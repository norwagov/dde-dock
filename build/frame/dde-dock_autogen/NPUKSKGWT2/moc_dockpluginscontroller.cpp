/****************************************************************************
** Meta object code from reading C++ file 'dockpluginscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/controller/dockpluginscontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockpluginscontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockPluginsController_t {
    QByteArrayData data[9];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockPluginsController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockPluginsController_t qt_meta_stringdata_DockPluginsController = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DockPluginsController"
QT_MOC_LITERAL(1, 22, 18), // "pluginItemInserted"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "PluginsItem*"
QT_MOC_LITERAL(4, 55, 10), // "pluginItem"
QT_MOC_LITERAL(5, 66, 17), // "pluginItemRemoved"
QT_MOC_LITERAL(6, 84, 17), // "pluginItemUpdated"
QT_MOC_LITERAL(7, 102, 23), // "trayVisableCountChanged"
QT_MOC_LITERAL(8, 126, 5) // "count"

    },
    "DockPluginsController\0pluginItemInserted\0"
    "\0PluginsItem*\0pluginItem\0pluginItemRemoved\0"
    "pluginItemUpdated\0trayVisableCountChanged\0"
    "count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockPluginsController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void DockPluginsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockPluginsController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pluginItemInserted((*reinterpret_cast< PluginsItem*(*)>(_a[1]))); break;
        case 1: _t->pluginItemRemoved((*reinterpret_cast< PluginsItem*(*)>(_a[1]))); break;
        case 2: _t->pluginItemUpdated((*reinterpret_cast< PluginsItem*(*)>(_a[1]))); break;
        case 3: _t->trayVisableCountChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PluginsItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PluginsItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PluginsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockPluginsController::*)(PluginsItem * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockPluginsController::pluginItemInserted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockPluginsController::*)(PluginsItem * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockPluginsController::pluginItemRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockPluginsController::*)(PluginsItem * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockPluginsController::pluginItemUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockPluginsController::*)(const int & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockPluginsController::trayVisableCountChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockPluginsController::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPluginsController::staticMetaObject>(),
    qt_meta_stringdata_DockPluginsController.data,
    qt_meta_data_DockPluginsController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockPluginsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockPluginsController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockPluginsController.stringdata0))
        return static_cast<void*>(this);
    return AbstractPluginsController::qt_metacast(_clname);
}

int DockPluginsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPluginsController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DockPluginsController::pluginItemInserted(PluginsItem * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockPluginsController *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockPluginsController::pluginItemRemoved(PluginsItem * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockPluginsController *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockPluginsController::pluginItemUpdated(PluginsItem * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockPluginsController *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockPluginsController::trayVisableCountChanged(const int & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< DockPluginsController *>(this), &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
