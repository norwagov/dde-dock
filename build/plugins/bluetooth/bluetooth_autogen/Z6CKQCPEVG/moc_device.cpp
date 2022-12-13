/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/bluetooth/componments/device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[18];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 11), // "nameChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "name"
QT_MOC_LITERAL(4, 25, 12), // "aliasChanged"
QT_MOC_LITERAL(5, 38, 5), // "alias"
QT_MOC_LITERAL(6, 44, 13), // "pairedChanged"
QT_MOC_LITERAL(7, 58, 6), // "paired"
QT_MOC_LITERAL(8, 65, 12), // "stateChanged"
QT_MOC_LITERAL(9, 78, 5), // "State"
QT_MOC_LITERAL(10, 84, 5), // "state"
QT_MOC_LITERAL(11, 90, 19), // "connectStateChanged"
QT_MOC_LITERAL(12, 110, 12), // "connectState"
QT_MOC_LITERAL(13, 123, 11), // "rssiChanged"
QT_MOC_LITERAL(14, 135, 4), // "rssi"
QT_MOC_LITERAL(15, 140, 16), // "StateUnavailable"
QT_MOC_LITERAL(16, 157, 14), // "StateAvailable"
QT_MOC_LITERAL(17, 172, 14) // "StateConnected"

    },
    "Device\0nameChanged\0\0name\0aliasChanged\0"
    "alias\0pairedChanged\0paired\0stateChanged\0"
    "State\0state\0connectStateChanged\0"
    "connectState\0rssiChanged\0rssi\0"
    "StateUnavailable\0StateAvailable\0"
    "StateConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
      11,    1,   56,    2, 0x06 /* Public */,
      13,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   14,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    3,   67,

 // enum data: key, value
      15, uint(Device::StateUnavailable),
      16, uint(Device::StateAvailable),
      17, uint(Device::StateConnected),

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Device *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->aliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pairedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< const State(*)>(_a[1]))); break;
        case 4: _t->connectStateChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->rssiChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Device::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::aliasChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Device::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::pairedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Device::*)(const State ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Device::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::connectStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Device::*)(const int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::rssiChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Device::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Device.data,
    qt_meta_data_Device,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Device::nameChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Device *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Device::aliasChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Device *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Device::pairedChanged(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Device *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Device::stateChanged(const State _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Device *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Device::connectStateChanged(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Device *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Device::rssiChanged(const int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Device *>(this), &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
