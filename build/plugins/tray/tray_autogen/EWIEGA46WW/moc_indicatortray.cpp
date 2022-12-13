/****************************************************************************
** Meta object code from reading C++ file 'indicatortray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/tray/indicatortray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indicatortray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IndicatorTray_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IndicatorTray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IndicatorTray_t qt_meta_stringdata_IndicatorTray = {
    {
QT_MOC_LITERAL(0, 0, 13), // "IndicatorTray"
QT_MOC_LITERAL(1, 14, 11), // "delayLoaded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "removed"
QT_MOC_LITERAL(4, 35, 19), // "textPropertyChanged"
QT_MOC_LITERAL(5, 55, 12), // "QDBusMessage"
QT_MOC_LITERAL(6, 68, 7), // "message"
QT_MOC_LITERAL(7, 76, 19) // "iconPropertyChanged"

    },
    "IndicatorTray\0delayLoaded\0\0removed\0"
    "textPropertyChanged\0QDBusMessage\0"
    "message\0iconPropertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IndicatorTray[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void IndicatorTray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IndicatorTray *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->delayLoaded(); break;
        case 1: _t->removed(); break;
        case 2: _t->textPropertyChanged((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 3: _t->iconPropertyChanged((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IndicatorTray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IndicatorTray::delayLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IndicatorTray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IndicatorTray::removed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IndicatorTray::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IndicatorTray.data,
    qt_meta_data_IndicatorTray,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IndicatorTray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndicatorTray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IndicatorTray.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IndicatorTray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void IndicatorTray::delayLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void IndicatorTray::removed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
