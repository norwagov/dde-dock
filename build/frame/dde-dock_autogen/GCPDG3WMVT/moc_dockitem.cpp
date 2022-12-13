/****************************************************************************
** Meta object code from reading C++ file 'dockitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/item/dockitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockItem_t {
    QByteArrayData data[20];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockItem_t qt_meta_stringdata_DockItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DockItem"
QT_MOC_LITERAL(1, 9, 11), // "dragStarted"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "itemDropped"
QT_MOC_LITERAL(4, 34, 11), // "destination"
QT_MOC_LITERAL(5, 46, 9), // "dropPoint"
QT_MOC_LITERAL(6, 56, 21), // "requestWindowAutoHide"
QT_MOC_LITERAL(7, 78, 8), // "autoHide"
QT_MOC_LITERAL(8, 87, 27), // "requestRefreshWindowVisible"
QT_MOC_LITERAL(9, 115, 11), // "refreshIcon"
QT_MOC_LITERAL(10, 127, 15), // "showPopupApplet"
QT_MOC_LITERAL(11, 143, 13), // "QWidget*const"
QT_MOC_LITERAL(12, 157, 6), // "applet"
QT_MOC_LITERAL(13, 164, 9), // "hidePopup"
QT_MOC_LITERAL(14, 174, 10), // "setDraging"
QT_MOC_LITERAL(15, 185, 5), // "bDrag"
QT_MOC_LITERAL(16, 191, 10), // "checkEntry"
QT_MOC_LITERAL(17, 202, 10), // "isDragging"
QT_MOC_LITERAL(18, 213, 15), // "showContextMenu"
QT_MOC_LITERAL(19, 229, 21) // "onContextMenuAccepted"

    },
    "DockItem\0dragStarted\0\0itemDropped\0"
    "destination\0dropPoint\0requestWindowAutoHide\0"
    "autoHide\0requestRefreshWindowVisible\0"
    "refreshIcon\0showPopupApplet\0QWidget*const\0"
    "applet\0hidePopup\0setDraging\0bDrag\0"
    "checkEntry\0isDragging\0showContextMenu\0"
    "onContextMenuAccepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    2,   75,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   84,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x0a /* Public */,
      14,    1,   89,    2, 0x0a /* Public */,
      16,    0,   92,    2, 0x0a /* Public */,
      17,    0,   93,    2, 0x0a /* Public */,
      18,    0,   94,    2, 0x09 /* Protected */,
      19,    0,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QPoint,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DockItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dragStarted(); break;
        case 1: _t->itemDropped((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 2: _t->requestWindowAutoHide((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->requestRefreshWindowVisible(); break;
        case 4: _t->refreshIcon(); break;
        case 5: _t->showPopupApplet((*reinterpret_cast< QWidget*const(*)>(_a[1]))); break;
        case 6: _t->hidePopup(); break;
        case 7: _t->setDraging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->checkEntry(); break;
        case 9: { bool _r = _t->isDragging();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->showContextMenu(); break;
        case 11: _t->onContextMenuAccepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockItem::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItem::dragStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockItem::*)(QObject * , const QPoint & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItem::itemDropped)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockItem::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItem::requestWindowAutoHide)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockItem::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItem::requestRefreshWindowVisible)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DockItem.data,
    qt_meta_data_DockItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DockItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void DockItem::dragStarted()const
{
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DockItem::itemDropped(QObject * _t1, const QPoint & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockItem::requestWindowAutoHide(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockItem::requestRefreshWindowVisible()const
{
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
