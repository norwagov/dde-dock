/****************************************************************************
** Meta object code from reading C++ file 'dbusadaptors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/keyboard-layout/dbusadaptors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusadaptors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusAdaptors_t {
    QByteArrayData data[32];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusAdaptors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusAdaptors_t qt_meta_stringdata_DBusAdaptors = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DBusAdaptors"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 23), // "com.deepin.dde.Keyboard"
QT_MOC_LITERAL(3, 53, 13), // "layoutChanged"
QT_MOC_LITERAL(4, 67, 0), // ""
QT_MOC_LITERAL(5, 68, 4), // "text"
QT_MOC_LITERAL(6, 73, 18), // "fcitxStatusChanged"
QT_MOC_LITERAL(7, 92, 7), // "running"
QT_MOC_LITERAL(8, 100, 9), // "onClicked"
QT_MOC_LITERAL(9, 110, 6), // "button"
QT_MOC_LITERAL(10, 117, 1), // "x"
QT_MOC_LITERAL(11, 119, 1), // "y"
QT_MOC_LITERAL(12, 121, 22), // "onCurrentLayoutChanged"
QT_MOC_LITERAL(13, 144, 5), // "value"
QT_MOC_LITERAL(14, 150, 23), // "onUserLayoutListChanged"
QT_MOC_LITERAL(15, 174, 17), // "initAllLayoutList"
QT_MOC_LITERAL(16, 192, 11), // "refreshMenu"
QT_MOC_LITERAL(17, 204, 20), // "refreshMenuSelection"
QT_MOC_LITERAL(18, 225, 21), // "handleActionTriggered"
QT_MOC_LITERAL(19, 247, 8), // "QAction*"
QT_MOC_LITERAL(20, 256, 6), // "action"
QT_MOC_LITERAL(21, 263, 18), // "onGSettingsChanged"
QT_MOC_LITERAL(22, 282, 3), // "key"
QT_MOC_LITERAL(23, 286, 16), // "onFcitxConnected"
QT_MOC_LITERAL(24, 303, 7), // "service"
QT_MOC_LITERAL(25, 311, 19), // "onFcitxDisconnected"
QT_MOC_LITERAL(26, 331, 17), // "onPropertyChanged"
QT_MOC_LITERAL(27, 349, 4), // "name"
QT_MOC_LITERAL(28, 354, 3), // "map"
QT_MOC_LITERAL(29, 358, 4), // "list"
QT_MOC_LITERAL(30, 363, 6), // "layout"
QT_MOC_LITERAL(31, 370, 12) // "fcitxRunning"

    },
    "DBusAdaptors\0D-Bus Interface\0"
    "com.deepin.dde.Keyboard\0layoutChanged\0"
    "\0text\0fcitxStatusChanged\0running\0"
    "onClicked\0button\0x\0y\0onCurrentLayoutChanged\0"
    "value\0onUserLayoutListChanged\0"
    "initAllLayoutList\0refreshMenu\0"
    "refreshMenuSelection\0handleActionTriggered\0"
    "QAction*\0action\0onGSettingsChanged\0"
    "key\0onFcitxConnected\0service\0"
    "onFcitxDisconnected\0onPropertyChanged\0"
    "name\0map\0list\0layout\0fcitxRunning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusAdaptors[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       2,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   81,    4, 0x06 /* Public */,
       6,    1,   84,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   87,    4, 0x0a /* Public */,
      12,    1,   94,    4, 0x08 /* Private */,
      14,    1,   97,    4, 0x08 /* Private */,
      15,    0,  100,    4, 0x08 /* Private */,
      16,    0,  101,    4, 0x08 /* Private */,
      17,    0,  102,    4, 0x08 /* Private */,
      18,    1,  103,    4, 0x08 /* Private */,
      21,    1,  106,    4, 0x08 /* Private */,
      23,    1,  109,    4, 0x08 /* Private */,
      25,    1,  112,    4, 0x08 /* Private */,
      26,    3,  115,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QStringList,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,   27,   28,   29,

 // properties: name, type, flags
      30, QMetaType::QString, 0x00495103,
      31, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void DBusAdaptors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusAdaptors *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->layoutChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->fcitxStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->onCurrentLayoutChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onUserLayoutListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->initAllLayoutList(); break;
        case 6: _t->refreshMenu(); break;
        case 7: _t->refreshMenuSelection(); break;
        case 8: _t->handleActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->onGSettingsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->onFcitxConnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->onFcitxDisconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->onPropertyChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantMap(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusAdaptors::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusAdaptors::layoutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusAdaptors::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusAdaptors::fcitxStatusChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBusAdaptors *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->layout(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isFcitxRunning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DBusAdaptors *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLayout(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DBusAdaptors::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_DBusAdaptors.data,
    qt_meta_data_DBusAdaptors,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusAdaptors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusAdaptors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusAdaptors.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int DBusAdaptors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DBusAdaptors::layoutChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusAdaptors::fcitxStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
