/****************************************************************************
** Meta object code from reading C++ file 'adaptersmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugins/bluetooth/componments/adaptersmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adaptersmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdaptersManager_t {
    QByteArrayData data[13];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdaptersManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdaptersManager_t qt_meta_stringdata_AdaptersManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AdaptersManager"
QT_MOC_LITERAL(1, 16, 16), // "adapterIncreased"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "Adapter*"
QT_MOC_LITERAL(4, 43, 7), // "adapter"
QT_MOC_LITERAL(5, 51, 16), // "adapterDecreased"
QT_MOC_LITERAL(6, 68, 26), // "onAdapterPropertiesChanged"
QT_MOC_LITERAL(7, 95, 4), // "json"
QT_MOC_LITERAL(8, 100, 25), // "onDevicePropertiesChanged"
QT_MOC_LITERAL(9, 126, 12), // "onAddAdapter"
QT_MOC_LITERAL(10, 139, 15), // "onRemoveAdapter"
QT_MOC_LITERAL(11, 155, 11), // "onAddDevice"
QT_MOC_LITERAL(12, 167, 14) // "onRemoveDevice"

    },
    "AdaptersManager\0adapterIncreased\0\0"
    "Adapter*\0adapter\0adapterDecreased\0"
    "onAdapterPropertiesChanged\0json\0"
    "onDevicePropertiesChanged\0onAddAdapter\0"
    "onRemoveAdapter\0onAddDevice\0onRemoveDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdaptersManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void AdaptersManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdaptersManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->adapterIncreased((*reinterpret_cast< Adapter*(*)>(_a[1]))); break;
        case 1: _t->adapterDecreased((*reinterpret_cast< Adapter*(*)>(_a[1]))); break;
        case 2: _t->onAdapterPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onDevicePropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onAddAdapter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onRemoveAdapter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onAddDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onRemoveDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdaptersManager::*)(Adapter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdaptersManager::adapterIncreased)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AdaptersManager::*)(Adapter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdaptersManager::adapterDecreased)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdaptersManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AdaptersManager.data,
    qt_meta_data_AdaptersManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdaptersManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdaptersManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdaptersManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AdaptersManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AdaptersManager::adapterIncreased(Adapter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdaptersManager::adapterDecreased(Adapter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
