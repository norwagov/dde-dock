/****************************************************************************
** Meta object code from reading C++ file 'trashwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/trash/trashwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trashwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrashWidget_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrashWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrashWidget_t qt_meta_stringdata_TrashWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TrashWidget"
QT_MOC_LITERAL(1, 12, 18), // "requestContextMenu"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "removeApp"
QT_MOC_LITERAL(4, 42, 6), // "appKey"
QT_MOC_LITERAL(5, 49, 11), // "moveToTrash"
QT_MOC_LITERAL(6, 61, 11), // "QList<QUrl>"
QT_MOC_LITERAL(7, 73, 7) // "urlList"

    },
    "TrashWidget\0requestContextMenu\0\0"
    "removeApp\0appKey\0moveToTrash\0QList<QUrl>\0"
    "urlList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrashWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void TrashWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrashWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestContextMenu(); break;
        case 1: _t->removeApp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->moveToTrash((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrashWidget::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrashWidget::requestContextMenu)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrashWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TrashWidget.data,
    qt_meta_data_TrashWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrashWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrashWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrashWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TrashWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TrashWidget::requestContextMenu()const
{
    QMetaObject::activate(const_cast< TrashWidget *>(this), &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
