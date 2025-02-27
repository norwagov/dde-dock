// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "onboardplugin.h"
#include "../widgets/tipswidget.h"

#include <QIcon>
#include <QSettings>

#define PLUGIN_STATE_KEY    "enable"

using DBusDock = com::deepin::dde::daemon::Dock;
using DockEntryInter = com::deepin::dde::daemon::dock::Entry;

using namespace Dock;
OnboardPlugin::OnboardPlugin(QObject *parent)
    : QObject(parent)
    , m_pluginLoaded(false)
    , m_startupState(false)
    , m_onboardItem(nullptr)
    , m_tipsLabel(new TipsWidget)
{
    m_tipsLabel->setText(tr("Onboard"));
    m_tipsLabel->setVisible(false);
    m_tipsLabel->setAccessibleName("Onboard");
}

const QString OnboardPlugin::pluginName() const
{
    return "onboard";
}

const QString OnboardPlugin::pluginDisplayName() const
{
    return tr("Onboard");
}

QWidget *OnboardPlugin::itemWidget(const QString &itemKey)
{
    Q_UNUSED(itemKey);

    return m_onboardItem.data();
}

QWidget *OnboardPlugin::itemTipsWidget(const QString &itemKey)
{
    Q_UNUSED(itemKey);

    return m_tipsLabel.data();
}

void OnboardPlugin::init(PluginProxyInterface *proxyInter)
{
    m_proxyInter = proxyInter;

    if (!pluginIsDisable()) {
        loadPlugin();
    }
}

void OnboardPlugin::pluginStateSwitched()
{
    m_proxyInter->saveValue(this, PLUGIN_STATE_KEY, pluginIsDisable());

    refreshPluginItemsVisible();
}

bool OnboardPlugin::pluginIsDisable()
{
    return !(m_proxyInter->getValue(this, PLUGIN_STATE_KEY, false).toBool());
}

const QString OnboardPlugin::itemCommand(const QString &itemKey)
{
    Q_UNUSED(itemKey);

    return QString("dbus-send --print-reply --dest=org.onboard.Onboard /org/onboard/Onboard/Keyboard org.onboard.Onboard.Keyboard.ToggleVisible");
}

const QString OnboardPlugin::itemContextMenu(const QString &itemKey)
{
    Q_UNUSED(itemKey);

    QList<QVariant> items;

    QMap<QString, QVariant> onboardSettings;
    onboardSettings["itemId"] = "onboard-settings";
    onboardSettings["itemText"] = tr("Settings");
    onboardSettings["isActive"] = true;
    items.push_back(onboardSettings);

    QMap<QString, QVariant> menu;
    menu["items"] = items;
    menu["checkableMenu"] = false;
    menu["singleCheck"] = false;

    return QJsonDocument::fromVariant(menu).toJson();
}

void OnboardPlugin::invokedMenuItem(const QString &itemKey, const QString &menuId, const bool checked)
{
    Q_UNUSED(itemKey)
    Q_UNUSED(checked)

    if (menuId != "onboard-settings") return;
    if(!m_startupState) {
        QProcess *process = new QProcess;
        connect(process,&QProcess::started, this, [ = ] {
            m_startupState = true;
        });

        connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
              [ = ](int exitCode, QProcess::ExitStatus exitStatus){
            Q_UNUSED(exitCode)
            Q_UNUSED(exitStatus)

            m_startupState = false;
            process->close();
            process->deleteLater();
        });
        process->start("onboard-settings");
    }

    DBusDock DockInter("com.deepin.dde.daemon.Dock",
                       "/com/deepin/dde/daemon/Dock",
                       QDBusConnection::sessionBus(), this);

    for (auto entry : DockInter.entries()) {
        DockEntryInter AppInter("com.deepin.dde.daemon.Dock",
                                entry.path(),
                                QDBusConnection::sessionBus(), this);
        if(AppInter.name() == "Onboard-Settings" && !AppInter.isActive()) {
            AppInter.Activate(0);
            break;
        }
    }
}

void OnboardPlugin::displayModeChanged(const Dock::DisplayMode displayMode)
{
    Q_UNUSED(displayMode);

    if (!pluginIsDisable()) {
        m_onboardItem->update();
    }
}

int OnboardPlugin::itemSortKey(const QString &itemKey)
{
    const QString key = QString("pos_%1_%2").arg(itemKey).arg(Dock::Efficient);
    return m_proxyInter->getValue(this, key, 3).toInt();
}

void OnboardPlugin::setSortKey(const QString &itemKey, const int order)
{
    const QString key = QString("pos_%1_%2").arg(itemKey).arg(Dock::Efficient);
    m_proxyInter->saveValue(this, key, order);
}

void OnboardPlugin::pluginSettingsChanged()
{
    refreshPluginItemsVisible();
}

void OnboardPlugin::loadPlugin()
{
    if (m_pluginLoaded) {
        qDebug() << "onboard plugin has been loaded! return";
        return;
    }

    m_pluginLoaded = true;

    m_onboardItem.reset(new OnboardItem);

    m_proxyInter->itemAdded(this, pluginName());
    displayModeChanged(displayMode());
}

void OnboardPlugin::refreshPluginItemsVisible()
{
    if (pluginIsDisable()) {
        m_proxyInter->itemRemoved(this, pluginName());
    } else {
        if (!m_pluginLoaded) {
            loadPlugin();
            return;
        }
        m_proxyInter->itemAdded(this, pluginName());
    }
}
