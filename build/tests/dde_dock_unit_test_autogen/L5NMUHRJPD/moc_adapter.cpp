/****************************************************************************
** Meta object code from reading C++ file 'adapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugins/bluetooth/componments/adapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Adapter_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Adapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Adapter_t qt_meta_stringdata_Adapter = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Adapter"
QT_MOC_LITERAL(1, 8, 11), // "nameChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "name"
QT_MOC_LITERAL(4, 26, 11), // "deviceAdded"
QT_MOC_LITERAL(5, 38, 13), // "const Device*"
QT_MOC_LITERAL(6, 52, 6), // "device"
QT_MOC_LITERAL(7, 59, 13), // "deviceRemoved"
QT_MOC_LITERAL(8, 73, 17), // "deviceNameUpdated"
QT_MOC_LITERAL(9, 91, 14), // "poweredChanged"
QT_MOC_LITERAL(10, 106, 7), // "powered"
QT_MOC_LITERAL(11, 114, 18), // "discoveringChanged"
QT_MOC_LITERAL(12, 133, 8) // "discover"

    },
    "Adapter\0nameChanged\0\0name\0deviceAdded\0"
    "const Device*\0device\0deviceRemoved\0"
    "deviceNameUpdated\0poweredChanged\0"
    "powered\0discoveringChanged\0discover"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Adapter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      11,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void Adapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Adapter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->deviceAdded((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 2: _t->deviceRemoved((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 3: _t->deviceNameUpdated((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 4: _t->poweredChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->discoveringChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Adapter::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Adapter::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Adapter::*)(const Device * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Adapter::deviceAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Adapter::*)(const Device * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Adapter::deviceRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Adapter::*)(const Device * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Adapter::deviceNameUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Adapter::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Adapter::poweredChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Adapter::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Adapter::discoveringChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Adapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Adapter.data,
    qt_meta_data_Adapter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Adapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Adapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Adapter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Adapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Adapter::nameChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Adapter *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Adapter::deviceAdded(const Device * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Adapter *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Adapter::deviceRemoved(const Device * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Adapter *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Adapter::deviceNameUpdated(const Device * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Adapter *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Adapter::poweredChanged(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Adapter *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Adapter::discoveringChanged(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Adapter *>(this), &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
