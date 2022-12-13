/****************************************************************************
** Meta object code from reading C++ file 'airplanemodeplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/airplane-mode/airplanemodeplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'airplanemodeplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirplaneModePlugin_t {
    QByteArrayData data[6];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirplaneModePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirplaneModePlugin_t qt_meta_stringdata_AirplaneModePlugin = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AirplaneModePlugin"
QT_MOC_LITERAL(1, 19, 26), // "refreshAirplaneEnableState"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 23), // "onAirplaneEnableChanged"
QT_MOC_LITERAL(4, 71, 6), // "enable"
QT_MOC_LITERAL(5, 78, 37) // "onWirelessAccessPointsOrAdapt..."

    },
    "AirplaneModePlugin\0refreshAirplaneEnableState\0"
    "\0onAirplaneEnableChanged\0enable\0"
    "onWirelessAccessPointsOrAdapterChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirplaneModePlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void AirplaneModePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirplaneModePlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshAirplaneEnableState(); break;
        case 1: _t->onAirplaneEnableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onWirelessAccessPointsOrAdapterChange(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AirplaneModePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AirplaneModePlugin.data,
    qt_meta_data_AirplaneModePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirplaneModePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirplaneModePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirplaneModePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    if (!strcmp(_clname, "com.deepin.dock.PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int AirplaneModePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x24,  'c',  'o',  'm',  '.',  'd', 
    'e',  'e',  'p',  'i',  'n',  '.',  'd',  'o', 
    'c',  'k',  '.',  'P',  'l',  'u',  'g',  'i', 
    'n',  's',  'I',  't',  'e',  'm',  'I',  'n', 
    't',  'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x72,  'A',  'i',  'r',  'p',  'l',  'a', 
    'n',  'e',  'M',  'o',  'd',  'e',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa2,  0x63,  'a',  'p',  'i',  0x65,  '1', 
    '.',  '1',  '.',  '1',  0x78,  0x1b,  'd',  'e', 
    'p',  'e',  'n',  'd',  's',  '-',  'd',  'a', 
    'e',  'm',  'o',  'n',  '-',  'd',  'b',  'u', 
    's',  '-',  's',  'e',  'r',  'v',  'i',  'c', 
    'e',  0x60, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(AirplaneModePlugin, AirplaneModePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
