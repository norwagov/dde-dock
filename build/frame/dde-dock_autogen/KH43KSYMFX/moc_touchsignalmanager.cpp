/****************************************************************************
** Meta object code from reading C++ file 'touchsignalmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/util/touchsignalmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'touchsignalmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TouchSignalManager_t {
    QByteArrayData data[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TouchSignalManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TouchSignalManager_t qt_meta_stringdata_TouchSignalManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TouchSignalManager"
QT_MOC_LITERAL(1, 19, 15), // "shortTouchPress"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "time"
QT_MOC_LITERAL(4, 41, 6), // "scaleX"
QT_MOC_LITERAL(5, 48, 6), // "scaleY"
QT_MOC_LITERAL(6, 55, 12), // "touchRelease"
QT_MOC_LITERAL(7, 68, 16), // "middleTouchPress"
QT_MOC_LITERAL(8, 85, 9), // "touchMove"
QT_MOC_LITERAL(9, 95, 19), // "dealShortTouchPress"
QT_MOC_LITERAL(10, 115, 16), // "dealTouchRelease"
QT_MOC_LITERAL(11, 132, 20), // "dealMiddleTouchPress"
QT_MOC_LITERAL(12, 153, 14), // "dealTouchPress"
QT_MOC_LITERAL(13, 168, 8) // "figerNum"

    },
    "TouchSignalManager\0shortTouchPress\0\0"
    "time\0scaleX\0scaleY\0touchRelease\0"
    "middleTouchPress\0touchMove\0"
    "dealShortTouchPress\0dealTouchRelease\0"
    "dealMiddleTouchPress\0dealTouchPress\0"
    "figerNum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TouchSignalManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       6,    2,   61,    2, 0x06 /* Public */,
       7,    2,   66,    2, 0x06 /* Public */,
       8,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,   76,    2, 0x08 /* Private */,
      10,    2,   83,    2, 0x08 /* Private */,
      11,    2,   88,    2, 0x08 /* Private */,
      12,    4,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double,   13,    3,    4,    5,

       0        // eod
};

void TouchSignalManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TouchSignalManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shortTouchPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->touchRelease((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->middleTouchPress((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->touchMove((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->dealShortTouchPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->dealTouchRelease((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->dealMiddleTouchPress((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->dealTouchPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TouchSignalManager::*)(int , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchSignalManager::shortTouchPress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TouchSignalManager::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchSignalManager::touchRelease)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TouchSignalManager::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchSignalManager::middleTouchPress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TouchSignalManager::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchSignalManager::touchMove)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TouchSignalManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TouchSignalManager.data,
    qt_meta_data_TouchSignalManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TouchSignalManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TouchSignalManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TouchSignalManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TouchSignalManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TouchSignalManager::shortTouchPress(int _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TouchSignalManager::touchRelease(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TouchSignalManager::middleTouchPress(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TouchSignalManager::touchMove(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
