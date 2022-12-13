/****************************************************************************
** Meta object code from reading C++ file 'bluetoothadapteritem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugins/bluetooth/componments/bluetoothadapteritem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothadapteritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BluetoothDeviceItem_t {
    QByteArrayData data[15];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothDeviceItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothDeviceItem_t qt_meta_stringdata_BluetoothDeviceItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "BluetoothDeviceItem"
QT_MOC_LITERAL(1, 20, 20), // "requestTopDeviceItem"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "DStandardItem*"
QT_MOC_LITERAL(4, 57, 4), // "item"
QT_MOC_LITERAL(5, 62, 18), // "deviceStateChanged"
QT_MOC_LITERAL(6, 81, 13), // "const Device*"
QT_MOC_LITERAL(7, 95, 6), // "device"
QT_MOC_LITERAL(8, 102, 16), // "disconnectDevice"
QT_MOC_LITERAL(9, 119, 15), // "updateIconTheme"
QT_MOC_LITERAL(10, 135, 32), // "DGuiApplicationHelper::ColorType"
QT_MOC_LITERAL(11, 168, 4), // "type"
QT_MOC_LITERAL(12, 173, 17), // "updateDeviceState"
QT_MOC_LITERAL(13, 191, 13), // "Device::State"
QT_MOC_LITERAL(14, 205, 5) // "state"

    },
    "BluetoothDeviceItem\0requestTopDeviceItem\0"
    "\0DStandardItem*\0item\0deviceStateChanged\0"
    "const Device*\0device\0disconnectDevice\0"
    "updateIconTheme\0DGuiApplicationHelper::ColorType\0"
    "type\0updateDeviceState\0Device::State\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothDeviceItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       8,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   46,    2, 0x0a /* Public */,
      12,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void BluetoothDeviceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BluetoothDeviceItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestTopDeviceItem((*reinterpret_cast< DStandardItem*(*)>(_a[1]))); break;
        case 1: _t->deviceStateChanged((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 2: _t->disconnectDevice(); break;
        case 3: _t->updateIconTheme((*reinterpret_cast< DGuiApplicationHelper::ColorType(*)>(_a[1]))); break;
        case 4: _t->updateDeviceState((*reinterpret_cast< Device::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothDeviceItem::*)(DStandardItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothDeviceItem::requestTopDeviceItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothDeviceItem::*)(const Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothDeviceItem::deviceStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothDeviceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothDeviceItem::disconnectDevice)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BluetoothDeviceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BluetoothDeviceItem.data,
    qt_meta_data_BluetoothDeviceItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BluetoothDeviceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothDeviceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothDeviceItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BluetoothDeviceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void BluetoothDeviceItem::requestTopDeviceItem(DStandardItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothDeviceItem::deviceStateChanged(const Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothDeviceItem::disconnectDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_BluetoothAdapterItem_t {
    QByteArrayData data[28];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothAdapterItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothAdapterItem_t qt_meta_stringdata_BluetoothAdapterItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "BluetoothAdapterItem"
QT_MOC_LITERAL(1, 21, 19), // "adapterPowerChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 22), // "requestSetAdapterPower"
QT_MOC_LITERAL(4, 65, 8), // "Adapter*"
QT_MOC_LITERAL(5, 74, 7), // "adapter"
QT_MOC_LITERAL(6, 82, 5), // "state"
QT_MOC_LITERAL(7, 88, 21), // "requestRefreshAdapter"
QT_MOC_LITERAL(8, 110, 13), // "connectDevice"
QT_MOC_LITERAL(9, 124, 13), // "const Device*"
QT_MOC_LITERAL(10, 138, 6), // "device"
QT_MOC_LITERAL(11, 145, 18), // "deviceCountChanged"
QT_MOC_LITERAL(12, 164, 18), // "deviceStateChanged"
QT_MOC_LITERAL(13, 183, 13), // "onDeviceAdded"
QT_MOC_LITERAL(14, 197, 15), // "onDeviceRemoved"
QT_MOC_LITERAL(15, 213, 19), // "onDeviceNameUpdated"
QT_MOC_LITERAL(16, 233, 15), // "onConnectDevice"
QT_MOC_LITERAL(17, 249, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 261, 5), // "index"
QT_MOC_LITERAL(19, 267, 15), // "onTopDeviceItem"
QT_MOC_LITERAL(20, 283, 14), // "DStandardItem*"
QT_MOC_LITERAL(21, 298, 4), // "item"
QT_MOC_LITERAL(22, 303, 20), // "onAdapterNameChanged"
QT_MOC_LITERAL(23, 324, 4), // "name"
QT_MOC_LITERAL(24, 329, 15), // "updateIconTheme"
QT_MOC_LITERAL(25, 345, 32), // "DGuiApplicationHelper::ColorType"
QT_MOC_LITERAL(26, 378, 4), // "type"
QT_MOC_LITERAL(27, 383, 8) // "sizeHint"

    },
    "BluetoothAdapterItem\0adapterPowerChanged\0"
    "\0requestSetAdapterPower\0Adapter*\0"
    "adapter\0state\0requestRefreshAdapter\0"
    "connectDevice\0const Device*\0device\0"
    "deviceCountChanged\0deviceStateChanged\0"
    "onDeviceAdded\0onDeviceRemoved\0"
    "onDeviceNameUpdated\0onConnectDevice\0"
    "QModelIndex\0index\0onTopDeviceItem\0"
    "DStandardItem*\0item\0onAdapterNameChanged\0"
    "name\0updateIconTheme\0"
    "DGuiApplicationHelper::ColorType\0type\0"
    "sizeHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothAdapterItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    2,   85,    2, 0x06 /* Public */,
       7,    1,   90,    2, 0x06 /* Public */,
       8,    2,   93,    2, 0x06 /* Public */,
      11,    0,   98,    2, 0x06 /* Public */,
      12,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  102,    2, 0x0a /* Public */,
      14,    1,  105,    2, 0x0a /* Public */,
      15,    1,  108,    2, 0x0a /* Public */,
      16,    1,  111,    2, 0x0a /* Public */,
      19,    1,  114,    2, 0x0a /* Public */,
      22,    1,  117,    2, 0x0a /* Public */,
      24,    1,  120,    2, 0x0a /* Public */,
      27,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4,   10,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::QSize,

       0        // eod
};

void BluetoothAdapterItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BluetoothAdapterItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->adapterPowerChanged(); break;
        case 1: _t->requestSetAdapterPower((*reinterpret_cast< Adapter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->requestRefreshAdapter((*reinterpret_cast< Adapter*(*)>(_a[1]))); break;
        case 3: _t->connectDevice((*reinterpret_cast< const Device*(*)>(_a[1])),(*reinterpret_cast< Adapter*(*)>(_a[2]))); break;
        case 4: _t->deviceCountChanged(); break;
        case 5: _t->deviceStateChanged((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 6: _t->onDeviceAdded((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 7: _t->onDeviceRemoved((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 8: _t->onDeviceNameUpdated((*reinterpret_cast< const Device*(*)>(_a[1]))); break;
        case 9: _t->onConnectDevice((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->onTopDeviceItem((*reinterpret_cast< DStandardItem*(*)>(_a[1]))); break;
        case 11: _t->onAdapterNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->updateIconTheme((*reinterpret_cast< DGuiApplicationHelper::ColorType(*)>(_a[1]))); break;
        case 13: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothAdapterItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAdapterItem::adapterPowerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothAdapterItem::*)(Adapter * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAdapterItem::requestSetAdapterPower)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothAdapterItem::*)(Adapter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAdapterItem::requestRefreshAdapter)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BluetoothAdapterItem::*)(const Device * , Adapter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAdapterItem::connectDevice)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BluetoothAdapterItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAdapterItem::deviceCountChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BluetoothAdapterItem::*)(const Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAdapterItem::deviceStateChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BluetoothAdapterItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BluetoothAdapterItem.data,
    qt_meta_data_BluetoothAdapterItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BluetoothAdapterItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothAdapterItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothAdapterItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BluetoothAdapterItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void BluetoothAdapterItem::adapterPowerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BluetoothAdapterItem::requestSetAdapterPower(Adapter * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothAdapterItem::requestRefreshAdapter(Adapter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BluetoothAdapterItem::connectDevice(const Device * _t1, Adapter * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BluetoothAdapterItem::deviceCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BluetoothAdapterItem::deviceStateChanged(const Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
