/****************************************************************************
** Meta object code from reading C++ file 'bluetoothapplet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/bluetooth/componments/bluetoothapplet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothapplet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingLabel_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingLabel_t qt_meta_stringdata_SettingLabel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingLabel"
QT_MOC_LITERAL(1, 13, 7), // "clicked"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "SettingLabel\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void SettingLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingLabel::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SettingLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingLabel.data,
    qt_meta_data_SettingLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingLabel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SettingLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_BluetoothApplet_t {
    QByteArrayData data[17];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothApplet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothApplet_t qt_meta_stringdata_BluetoothApplet = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BluetoothApplet"
QT_MOC_LITERAL(1, 16, 9), // "noAdapter"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "justHasAdapter"
QT_MOC_LITERAL(4, 42, 12), // "powerChanged"
QT_MOC_LITERAL(5, 55, 5), // "state"
QT_MOC_LITERAL(6, 61, 18), // "deviceStateChanged"
QT_MOC_LITERAL(7, 80, 13), // "const Device*"
QT_MOC_LITERAL(8, 94, 6), // "device"
QT_MOC_LITERAL(9, 101, 14), // "onAdapterAdded"
QT_MOC_LITERAL(10, 116, 8), // "Adapter*"
QT_MOC_LITERAL(11, 125, 7), // "adapter"
QT_MOC_LITERAL(12, 133, 16), // "onAdapterRemoved"
QT_MOC_LITERAL(13, 150, 17), // "onSetAdapterPower"
QT_MOC_LITERAL(14, 168, 25), // "updateBluetoothPowerState"
QT_MOC_LITERAL(15, 194, 22), // "setAirplaneModeEnabled"
QT_MOC_LITERAL(16, 217, 6) // "enable"

    },
    "BluetoothApplet\0noAdapter\0\0justHasAdapter\0"
    "powerChanged\0state\0deviceStateChanged\0"
    "const Device*\0device\0onAdapterAdded\0"
    "Adapter*\0adapter\0onAdapterRemoved\0"
    "onSetAdapterPower\0updateBluetoothPowerState\0"
    "setAirplaneModeEnabled\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothApplet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   67,    2, 0x0a /* Public */,
      12,    1,   70,    2, 0x0a /* Public */,
      13,    2,   73,    2, 0x0a /* Public */,
      14,    0,   78,    2, 0x0a /* Public */,
      15,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void BluetoothApplet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BluetoothApplet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->noAdapter(); break;
        case 1: _t->justHasAdapter(); break;
        case 2: _t->powerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->deviceStateChanged((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 4: _t->onAdapterAdded((*reinterpret_cast< Adapter*(*)>(_a[1]))); break;
        case 5: _t->onAdapterRemoved((*reinterpret_cast< Adapter*(*)>(_a[1]))); break;
        case 6: _t->onSetAdapterPower((*reinterpret_cast< Adapter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->updateBluetoothPowerState(); break;
        case 8: _t->setAirplaneModeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothApplet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothApplet::noAdapter)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothApplet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothApplet::justHasAdapter)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothApplet::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothApplet::powerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BluetoothApplet::*)(const Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothApplet::deviceStateChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BluetoothApplet::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BluetoothApplet.data,
    qt_meta_data_BluetoothApplet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BluetoothApplet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothApplet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothApplet.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BluetoothApplet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void BluetoothApplet::noAdapter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BluetoothApplet::justHasAdapter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BluetoothApplet::powerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BluetoothApplet::deviceStateChanged(const Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
