/****************************************************************************
** Meta object code from reading C++ file 'mainpanelcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/window/mainpanelcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainpanelcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainPanelControl_t {
    QByteArrayData data[14];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainPanelControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainPanelControl_t qt_meta_stringdata_MainPanelControl = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MainPanelControl"
QT_MOC_LITERAL(1, 17, 9), // "itemMoved"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "DockItem*"
QT_MOC_LITERAL(4, 38, 10), // "sourceItem"
QT_MOC_LITERAL(5, 49, 10), // "targetItem"
QT_MOC_LITERAL(6, 60, 9), // "itemAdded"
QT_MOC_LITERAL(7, 70, 10), // "appDesktop"
QT_MOC_LITERAL(8, 81, 3), // "idx"
QT_MOC_LITERAL(9, 85, 10), // "insertItem"
QT_MOC_LITERAL(10, 96, 5), // "index"
QT_MOC_LITERAL(11, 102, 4), // "item"
QT_MOC_LITERAL(12, 107, 10), // "removeItem"
QT_MOC_LITERAL(13, 118, 11) // "itemUpdated"

    },
    "MainPanelControl\0itemMoved\0\0DockItem*\0"
    "sourceItem\0targetItem\0itemAdded\0"
    "appDesktop\0idx\0insertItem\0index\0item\0"
    "removeItem\0itemUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainPanelControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   49,    2, 0x0a /* Public */,
      12,    1,   54,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,   10,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3,   11,

       0        // eod
};

void MainPanelControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainPanelControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemMoved((*reinterpret_cast< DockItem*(*)>(_a[1])),(*reinterpret_cast< DockItem*(*)>(_a[2]))); break;
        case 1: _t->itemAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->insertItem((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< DockItem*(*)>(_a[2]))); break;
        case 3: _t->removeItem((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        case 4: _t->itemUpdated((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainPanelControl::*)(DockItem * , DockItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainPanelControl::itemMoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainPanelControl::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainPanelControl::itemAdded)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainPanelControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainPanelControl.data,
    qt_meta_data_MainPanelControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainPanelControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainPanelControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainPanelControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainPanelControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MainPanelControl::itemMoved(DockItem * _t1, DockItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainPanelControl::itemAdded(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
