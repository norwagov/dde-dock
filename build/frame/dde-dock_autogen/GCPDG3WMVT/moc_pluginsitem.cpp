/****************************************************************************
** Meta object code from reading C++ file 'pluginsitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/item/pluginsitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginsitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginsItem_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginsItem_t qt_meta_stringdata_PluginsItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PluginsItem"
QT_MOC_LITERAL(1, 12, 11), // "refreshIcon"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "onGSettingsChanged"
QT_MOC_LITERAL(4, 44, 3) // "key"

    },
    "PluginsItem\0refreshIcon\0\0onGSettingsChanged\0"
    "key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void PluginsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginsItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshIcon(); break;
        case 1: _t->onGSettingsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<DockItem::staticMetaObject>(),
    qt_meta_stringdata_PluginsItem.data,
    qt_meta_data_PluginsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginsItem.stringdata0))
        return static_cast<void*>(this);
    return DockItem::qt_metacast(_clname);
}

int PluginsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
