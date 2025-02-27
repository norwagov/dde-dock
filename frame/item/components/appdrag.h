// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef APPDRAG_H
#define APPDRAG_H

#include "appdragwidget.h"

#include <QDrag>
#include <QWidget>

class AppDrag : public QDrag
{
public:
    explicit AppDrag(QObject *dragSource);
    virtual ~AppDrag();

    void setPixmap(const QPixmap &);
    QPixmap pixmap() const;

    Qt::DropAction start(Qt::DropActions supportedActions = Qt::CopyAction);
    Qt::DropAction exec(Qt::DropActions supportedActions = Qt::MoveAction);
    Qt::DropAction exec(Qt::DropActions supportedActions, Qt::DropAction defaultAction);

    AppDragWidget *appDragWidget();

private:
    void setDragMoveCursor();

private:
    QPointer<AppDragWidget> m_appDragWidget;
};

#endif /* DRAGAPP_H */
