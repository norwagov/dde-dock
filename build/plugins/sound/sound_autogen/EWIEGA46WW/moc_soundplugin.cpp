/****************************************************************************
** Meta object code from reading C++ file 'soundplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/sound/soundplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoundPlugin_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundPlugin_t qt_meta_stringdata_SoundPlugin = {
    {
QT_MOC_LITERAL(0, 0, 11) // "SoundPlugin"

    },
    "SoundPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SoundPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SoundPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SoundPlugin.data,
    qt_meta_data_SoundPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SoundPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoundPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    if (!strcmp(_clname, "com.deepin.dock.PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int SoundPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    0x03,  0x6b,  'S',  'o',  'u',  'n',  'd',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa2,  0x63,  'a',  'p',  'i',  0x65,  '1', 
    '.',  '1',  '.',  '1',  0x78,  0x1b,  'd',  'e', 
    'p',  'e',  'n',  'd',  's',  '-',  'd',  'a', 
    'e',  'm',  'o',  'n',  '-',  'd',  'b',  'u', 
    's',  '-',  's',  'e',  'r',  'v',  'i',  'c', 
    'e',  0x77,  'c',  'o',  'm',  '.',  'd',  'e', 
    'e',  'p',  'i',  'n',  '.',  'd',  'a',  'e', 
    'm',  'o',  'n',  '.',  'A',  'u',  'd',  'i', 
    'o', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(SoundPlugin, SoundPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
