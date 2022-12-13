/****************************************************************************
** Meta object code from reading C++ file 'dockitemmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/controller/dockitemmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockitemmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockItemManager_t {
    QByteArrayData data[23];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockItemManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockItemManager_t qt_meta_stringdata_DockItemManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DockItemManager"
QT_MOC_LITERAL(1, 16, 12), // "itemInserted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 9), // "DockItem*"
QT_MOC_LITERAL(5, 46, 4), // "item"
QT_MOC_LITERAL(6, 51, 11), // "itemRemoved"
QT_MOC_LITERAL(7, 63, 11), // "itemUpdated"
QT_MOC_LITERAL(8, 75, 23), // "trayVisableCountChanged"
QT_MOC_LITERAL(9, 99, 5), // "count"
QT_MOC_LITERAL(10, 105, 21), // "requestWindowAutoHide"
QT_MOC_LITERAL(11, 127, 8), // "autoHide"
QT_MOC_LITERAL(12, 136, 27), // "requestRefershWindowVisible"
QT_MOC_LITERAL(13, 164, 21), // "requestUpdateDockItem"
QT_MOC_LITERAL(14, 186, 16), // "refreshItemsIcon"
QT_MOC_LITERAL(15, 203, 9), // "itemMoved"
QT_MOC_LITERAL(16, 213, 14), // "DockItem*const"
QT_MOC_LITERAL(17, 228, 10), // "sourceItem"
QT_MOC_LITERAL(18, 239, 10), // "targetItem"
QT_MOC_LITERAL(19, 250, 9), // "itemAdded"
QT_MOC_LITERAL(20, 260, 10), // "appDesktop"
QT_MOC_LITERAL(21, 271, 3), // "idx"
QT_MOC_LITERAL(22, 275, 20) // "onPluginLoadFinished"

    },
    "DockItemManager\0itemInserted\0\0index\0"
    "DockItem*\0item\0itemRemoved\0itemUpdated\0"
    "trayVisableCountChanged\0count\0"
    "requestWindowAutoHide\0autoHide\0"
    "requestRefershWindowVisible\0"
    "requestUpdateDockItem\0refreshItemsIcon\0"
    "itemMoved\0DockItem*const\0sourceItem\0"
    "targetItem\0itemAdded\0appDesktop\0idx\0"
    "onPluginLoadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockItemManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,
      10,    1,   83,    2, 0x06 /* Public */,
      12,    0,   86,    2, 0x06 /* Public */,
      13,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   88,    2, 0x0a /* Public */,
      15,    2,   89,    2, 0x0a /* Public */,
      19,    2,   94,    2, 0x0a /* Public */,
      22,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,   21,
    QMetaType::Void,

       0        // eod
};

void DockItemManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockItemManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemInserted((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< DockItem*(*)>(_a[2]))); break;
        case 1: _t->itemRemoved((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        case 2: _t->itemUpdated((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        case 3: _t->trayVisableCountChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->requestWindowAutoHide((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->requestRefershWindowVisible(); break;
        case 6: _t->requestUpdateDockItem(); break;
        case 7: _t->refreshItemsIcon(); break;
        case 8: _t->itemMoved((*reinterpret_cast< DockItem*const(*)>(_a[1])),(*reinterpret_cast< DockItem*const(*)>(_a[2]))); break;
        case 9: _t->itemAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->onPluginLoadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockItemManager::*)(const int , DockItem * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItemManager::itemInserted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockItemManager::*)(DockItem * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItemManager::itemRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockItemManager::*)(DockItem * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItemManager::itemUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockItemManager::*)(const int & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItemManager::trayVisableCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockItemManager::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItemManager::requestWindowAutoHide)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockItemManager::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItemManager::requestRefershWindowVisible)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockItemManager::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockItemManager::requestUpdateDockItem)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockItemManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DockItemManager.data,
    qt_meta_data_DockItemManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockItemManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockItemManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockItemManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DockItemManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DockItemManager::itemInserted(const int _t1, DockItem * _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< DockItemManager *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockItemManager::itemRemoved(DockItem * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockItemManager *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockItemManager::itemUpdated(DockItem * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockItemManager *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockItemManager::trayVisableCountChanged(const int & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockItemManager *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DockItemManager::requestWindowAutoHide(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockItemManager *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DockItemManager::requestRefershWindowVisible()const
{
    QMetaObject::activate(const_cast< DockItemManager *>(this), &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DockItemManager::requestUpdateDockItem()const
{
    QMetaObject::activate(const_cast< DockItemManager *>(this), &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
