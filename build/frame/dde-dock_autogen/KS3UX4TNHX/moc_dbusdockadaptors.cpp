/****************************************************************************
** Meta object code from reading C++ file 'dbusdockadaptors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/dbus/dbusdockadaptors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusdockadaptors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusDockAdaptors_t {
    QByteArrayData data[22];
    char stringdata0[1442];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusDockAdaptors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusDockAdaptors_t qt_meta_stringdata_DBusDockAdaptors = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DBusDockAdaptors"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 19), // "com.deepin.dde.Dock"
QT_MOC_LITERAL(3, 53, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 73, 1153), // "  <interface name=\"com.deepi..."
QT_MOC_LITERAL(5, 1135, 15), // "geometryChanged"
QT_MOC_LITERAL(6, 1151, 0), // ""
QT_MOC_LITERAL(7, 1152, 8), // "geometry"
QT_MOC_LITERAL(8, 1161, 20), // "showInPrimaryChanged"
QT_MOC_LITERAL(9, 1182, 20), // "pluginVisibleChanged"
QT_MOC_LITERAL(10, 1203, 10), // "pluginName"
QT_MOC_LITERAL(11, 1214, 7), // "visible"
QT_MOC_LITERAL(12, 1222, 8), // "callShow"
QT_MOC_LITERAL(13, 1231, 13), // "ReloadPlugins"
QT_MOC_LITERAL(14, 1245, 16), // "GetLoadedPlugins"
QT_MOC_LITERAL(15, 1262, 10), // "resizeDock"
QT_MOC_LITERAL(16, 1273, 6), // "offset"
QT_MOC_LITERAL(17, 1280, 8), // "dragging"
QT_MOC_LITERAL(18, 1289, 12), // "getPluginKey"
QT_MOC_LITERAL(19, 1302, 16), // "getPluginVisible"
QT_MOC_LITERAL(20, 1319, 16), // "setPluginVisible"
QT_MOC_LITERAL(21, 1336, 13) // "showInPrimary"

    },
    "DBusDockAdaptors\0D-Bus Interface\0"
    "com.deepin.dde.Dock\0D-Bus Introspection\0"
    "  <interface name=\"com.deepin.dde.Dock\">\n    <property access=\"rea"
    "d\" type=\"(iiii)\" name=\"geometry\"/>\n    <property access=\"readwr"
    "ite\" type=\"b\" name=\"showInPrimary\"/>\n    <method name=\"callShow"
    "\"/>    <method name=\"ReloadPlugins\"/>    <method name=\"GetLoadedPl"
    "ugins\">        <arg name=\"list\" type=\"as\" direction=\"out\"/>    "
    "</method>    <method name=\"resizeDock\">        <arg name=\"offset\" "
    "type=\"i\" direction=\"in\"/>        <arg name=\"dragging\" type=\"b\""
    " direction=\"in\"/>    </method>    <method name=\"getPluginKey\">    "
    "    <arg name=\"pluginName\" type=\"s\" direction=\"in\"/>        <arg"
    " name=\"key\" type=\"s\" direction=\"out\"/>    </method>    <method n"
    "ame=\"getPluginVisible\">        <arg name=\"pluginName\" type=\"s\" d"
    "irection=\"in\"/>        <arg name=\"visible\" type=\"b\" direction=\""
    "out\"/>    </method>    <method name=\"setPluginVisible\">        <arg"
    " name=\"pluginName\" type=\"s\" direction=\"in\"/>        <arg name=\""
    "visible\" type=\"b\" direction=\"in\"/>    </method>    <signal name=\""
    "pluginVisibleChanged\">        <arg type=\"s\"/>        <arg type=\"b\""
    "/>    </signal>  </interface>\n\0"
    "geometryChanged\0\0geometry\0"
    "showInPrimaryChanged\0pluginVisibleChanged\0"
    "pluginName\0visible\0callShow\0ReloadPlugins\0"
    "GetLoadedPlugins\0resizeDock\0offset\0"
    "dragging\0getPluginKey\0getPluginVisible\0"
    "setPluginVisible\0showInPrimary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusDockAdaptors[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
      10,   18, // methods
       2,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   68,    6, 0x06 /* Public */,
       8,    1,   71,    6, 0x06 /* Public */,
       9,    2,   74,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   79,    6, 0x0a /* Public */,
      13,    0,   80,    6, 0x0a /* Public */,
      14,    0,   81,    6, 0x0a /* Public */,
      15,    2,   82,    6, 0x0a /* Public */,
      18,    1,   87,    6, 0x0a /* Public */,
      19,    1,   90,    6, 0x0a /* Public */,
      20,    2,   93,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    7,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,
    QMetaType::QString, QMetaType::QString,   10,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   11,

 // properties: name, type, flags
       7, QMetaType::QRect, 0x00495001,
      21, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void DBusDockAdaptors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusDockAdaptors *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->geometryChanged((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 1: _t->showInPrimaryChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->pluginVisibleChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->callShow(); break;
        case 4: _t->ReloadPlugins(); break;
        case 5: { QStringList _r = _t->GetLoadedPlugins();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->resizeDock((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: { QString _r = _t->getPluginKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->getPluginVisible((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setPluginVisible((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusDockAdaptors::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusDockAdaptors::geometryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusDockAdaptors::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusDockAdaptors::showInPrimaryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DBusDockAdaptors::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusDockAdaptors::pluginVisibleChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBusDockAdaptors *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showInPrimary(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DBusDockAdaptors *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setShowInPrimary(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DBusDockAdaptors::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_DBusDockAdaptors.data,
    qt_meta_data_DBusDockAdaptors,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusDockAdaptors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusDockAdaptors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusDockAdaptors.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int DBusDockAdaptors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void DBusDockAdaptors::geometryChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusDockAdaptors::showInPrimaryChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBusDockAdaptors::pluginVisibleChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
