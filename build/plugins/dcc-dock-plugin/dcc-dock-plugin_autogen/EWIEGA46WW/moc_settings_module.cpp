/****************************************************************************
** Meta object code from reading C++ file 'settings_module.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/dcc-dock-plugin/settings_module.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings_module.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsModule_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsModule_t qt_meta_stringdata_SettingsModule = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsModule"
QT_MOC_LITERAL(1, 15, 6), // "active"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "SettingsModule\0active\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SettingsModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->active(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SettingsModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SettingsModule.data,
    qt_meta_data_SettingsModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsModule.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModuleInterface"))
        return static_cast< ModuleInterface*>(this);
    if (!strcmp(_clname, "com.deepin.dde.ControlCenter.module/1.0"))
        return static_cast< dccV20::ModuleInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int SettingsModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x27,  'c',  'o',  'm',  '.',  'd', 
    'e',  'e',  'p',  'i',  'n',  '.',  'd',  'd', 
    'e',  '.',  'C',  'o',  'n',  't',  'r',  'o', 
    'l',  'C',  'e',  'n',  't',  'e',  'r',  '.', 
    'm',  'o',  'd',  'u',  'l',  'e',  '/',  '1', 
    '.',  '0', 
    // "className"
    0x03,  0x6e,  'S',  'e',  't',  't',  'i',  'n', 
    'g',  's',  'M',  'o',  'd',  'u',  'l',  'e', 
    // "MetaData"
    0x04,  0xa1,  0x63,  'a',  'p',  'i',  0x65,  '1', 
    '.',  '0',  '.',  '0', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(SettingsModule, SettingsModule)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
