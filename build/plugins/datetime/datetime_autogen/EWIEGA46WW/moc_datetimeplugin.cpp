/****************************************************************************
** Meta object code from reading C++ file 'datetimeplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/datetime/datetimeplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datetimeplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatetimePlugin_t {
    QByteArrayData data[5];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatetimePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatetimePlugin_t qt_meta_stringdata_DatetimePlugin = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DatetimePlugin"
QT_MOC_LITERAL(1, 15, 23), // "updateCurrentTimeString"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "refreshPluginItemsVisible"
QT_MOC_LITERAL(4, 66, 17) // "propertiesChanged"

    },
    "DatetimePlugin\0updateCurrentTimeString\0"
    "\0refreshPluginItemsVisible\0propertiesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatetimePlugin[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DatetimePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatetimePlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateCurrentTimeString(); break;
        case 1: _t->refreshPluginItemsVisible(); break;
        case 2: _t->propertiesChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DatetimePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DatetimePlugin.data,
    qt_meta_data_DatetimePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatetimePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatetimePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatetimePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    if (!strcmp(_clname, "com.deepin.dock.PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int DatetimePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x6e,  'D',  'a',  't',  'e',  't',  'i', 
    'm',  'e',  'P',  'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa2,  0x63,  'a',  'p',  'i',  0x65,  '1', 
    '.',  '2',  '.',  '3',  0x78,  0x1b,  'd',  'e', 
    'p',  'e',  'n',  'd',  's',  '-',  'd',  'a', 
    'e',  'm',  'o',  'n',  '-',  'd',  'b',  'u', 
    's',  '-',  's',  'e',  'r',  'v',  'i',  'c', 
    'e',  0x78,  0x1a,  'c',  'o',  'm',  '.',  'd', 
    'e',  'e',  'p',  'i',  'n',  '.',  'd',  'a', 
    'e',  'm',  'o',  'n',  '.',  'T',  'i',  'm', 
    'e',  'd',  'a',  't',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DatetimePlugin, DatetimePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
