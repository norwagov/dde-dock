/****************************************************************************
** Meta object code from reading C++ file 'trayplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/tray/trayplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trayplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrayPlugin_t {
    QByteArrayData data[28];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrayPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrayPlugin_t qt_meta_stringdata_TrayPlugin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TrayPlugin"
QT_MOC_LITERAL(1, 11, 10), // "initXEmbed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "initSNI"
QT_MOC_LITERAL(4, 31, 13), // "addTrayWidget"
QT_MOC_LITERAL(5, 45, 7), // "itemKey"
QT_MOC_LITERAL(6, 53, 19), // "AbstractTrayWidget*"
QT_MOC_LITERAL(7, 73, 10), // "trayWidget"
QT_MOC_LITERAL(8, 84, 15), // "sniItemsChanged"
QT_MOC_LITERAL(9, 100, 18), // "xembedItemsChanged"
QT_MOC_LITERAL(10, 119, 15), // "trayXEmbedAdded"
QT_MOC_LITERAL(11, 135, 5), // "winId"
QT_MOC_LITERAL(12, 141, 12), // "traySNIAdded"
QT_MOC_LITERAL(13, 154, 14), // "sniServicePath"
QT_MOC_LITERAL(14, 169, 18), // "trayIndicatorAdded"
QT_MOC_LITERAL(15, 188, 13), // "indicatorName"
QT_MOC_LITERAL(16, 202, 11), // "trayRemoved"
QT_MOC_LITERAL(17, 214, 12), // "deleteObject"
QT_MOC_LITERAL(18, 227, 17), // "xembedItemChanged"
QT_MOC_LITERAL(19, 245, 12), // "switchToMode"
QT_MOC_LITERAL(20, 258, 17), // "Dock::DisplayMode"
QT_MOC_LITERAL(21, 276, 4), // "mode"
QT_MOC_LITERAL(22, 281, 23), // "onRequestWindowAutoHide"
QT_MOC_LITERAL(23, 305, 8), // "autoHide"
QT_MOC_LITERAL(24, 314, 29), // "onRequestRefershWindowVisible"
QT_MOC_LITERAL(25, 344, 22), // "onSNIItemStatusChanged"
QT_MOC_LITERAL(26, 367, 25), // "SNITrayWidget::ItemStatus"
QT_MOC_LITERAL(27, 393, 6) // "status"

    },
    "TrayPlugin\0initXEmbed\0\0initSNI\0"
    "addTrayWidget\0itemKey\0AbstractTrayWidget*\0"
    "trayWidget\0sniItemsChanged\0"
    "xembedItemsChanged\0trayXEmbedAdded\0"
    "winId\0traySNIAdded\0sniServicePath\0"
    "trayIndicatorAdded\0indicatorName\0"
    "trayRemoved\0deleteObject\0xembedItemChanged\0"
    "switchToMode\0Dock::DisplayMode\0mode\0"
    "onRequestWindowAutoHide\0autoHide\0"
    "onRequestRefershWindowVisible\0"
    "onSNIItemStatusChanged\0SNITrayWidget::ItemStatus\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrayPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    2,   91,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    2,   98,    2, 0x08 /* Private */,
      12,    2,  103,    2, 0x08 /* Private */,
      14,    2,  108,    2, 0x08 /* Private */,
      16,    2,  113,    2, 0x08 /* Private */,
      16,    1,  118,    2, 0x28 /* Private | MethodCloned */,
      18,    1,  121,    2, 0x08 /* Private */,
      19,    1,  124,    2, 0x08 /* Private */,
      22,    1,  127,    2, 0x08 /* Private */,
      24,    0,  130,    2, 0x08 /* Private */,
      25,    1,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    5,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,   17,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,

       0        // eod
};

void TrayPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrayPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initXEmbed(); break;
        case 1: _t->initSNI(); break;
        case 2: _t->addTrayWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AbstractTrayWidget*(*)>(_a[2]))); break;
        case 3: _t->sniItemsChanged(); break;
        case 4: _t->xembedItemsChanged(); break;
        case 5: _t->trayXEmbedAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 6: _t->traySNIAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->trayIndicatorAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->trayRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 9: _t->trayRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->xembedItemChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 11: _t->switchToMode((*reinterpret_cast< const Dock::DisplayMode(*)>(_a[1]))); break;
        case 12: _t->onRequestWindowAutoHide((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 13: _t->onRequestRefershWindowVisible(); break;
        case 14: _t->onSNIItemStatusChanged((*reinterpret_cast< SNITrayWidget::ItemStatus(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractTrayWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dock::DisplayMode >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrayPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TrayPlugin.data,
    qt_meta_data_TrayPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrayPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrayPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrayPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    if (!strcmp(_clname, "com.deepin.dock.PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int TrayPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x24,  'c',  'o',  'm',  '.',  'd', 
    'e',  'e',  'p',  'i',  'n',  '.',  'd',  'o', 
    'c',  'k',  '.',  'P',  'l',  'u',  'g',  'i', 
    'n',  's',  'I',  't',  'e',  'm',  'I',  'n', 
    't',  'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x6a,  'T',  'r',  'a',  'y',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa2,  0x63,  'a',  'p',  'i',  0x65,  '1', 
    '.',  '1',  '.',  '1',  0x78,  0x1b,  'd',  'e', 
    'p',  'e',  'n',  'd',  's',  '-',  'd',  'a', 
    'e',  'm',  'o',  'n',  '-',  'd',  'b',  'u', 
    's',  '-',  's',  'e',  'r',  'v',  'i',  'c', 
    'e',  0x78,  0x1a,  'c',  'o',  'm',  '.',  'd', 
    'e',  'e',  'p',  'i',  'n',  '.',  'd',  'd', 
    'e',  '.',  'T',  'r',  'a',  'y',  'M',  'a', 
    'n',  'a',  'g',  'e',  'r', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(TrayPlugin, TrayPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
