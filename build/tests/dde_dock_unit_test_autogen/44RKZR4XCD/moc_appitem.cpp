/****************************************************************************
** Meta object code from reading C++ file 'appitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/item/appitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppItem_t {
    QByteArrayData data[28];
    char stringdata0[404];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppItem_t qt_meta_stringdata_AppItem = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AppItem"
QT_MOC_LITERAL(1, 8, 21), // "requestActivateWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "WId"
QT_MOC_LITERAL(4, 35, 3), // "wid"
QT_MOC_LITERAL(5, 39, 20), // "requestPreviewWindow"
QT_MOC_LITERAL(6, 60, 20), // "requestCancelPreview"
QT_MOC_LITERAL(7, 81, 9), // "dragReady"
QT_MOC_LITERAL(8, 91, 8), // "QWidget*"
QT_MOC_LITERAL(9, 100, 10), // "dragWidget"
QT_MOC_LITERAL(10, 111, 28), // "requestUpdateEntryGeometries"
QT_MOC_LITERAL(11, 140, 17), // "updateWindowInfos"
QT_MOC_LITERAL(12, 158, 13), // "WindowInfoMap"
QT_MOC_LITERAL(13, 172, 4), // "info"
QT_MOC_LITERAL(14, 177, 11), // "refreshIcon"
QT_MOC_LITERAL(15, 189, 13), // "activeChanged"
QT_MOC_LITERAL(16, 203, 11), // "showPreview"
QT_MOC_LITERAL(17, 215, 15), // "playSwingEffect"
QT_MOC_LITERAL(18, 231, 15), // "stopSwingEffect"
QT_MOC_LITERAL(19, 247, 20), // "checkAttentionEffect"
QT_MOC_LITERAL(20, 268, 18), // "onGSettingsChanged"
QT_MOC_LITERAL(21, 287, 3), // "key"
QT_MOC_LITERAL(22, 291, 21), // "checkGSettingsControl"
QT_MOC_LITERAL(23, 313, 18), // "onThemeTypeChanged"
QT_MOC_LITERAL(24, 332, 32), // "DGuiApplicationHelper::ColorType"
QT_MOC_LITERAL(25, 365, 9), // "themeType"
QT_MOC_LITERAL(26, 375, 13), // "onRefreshIcon"
QT_MOC_LITERAL(27, 389, 14) // "onResetPreview"

    },
    "AppItem\0requestActivateWindow\0\0WId\0"
    "wid\0requestPreviewWindow\0requestCancelPreview\0"
    "dragReady\0QWidget*\0dragWidget\0"
    "requestUpdateEntryGeometries\0"
    "updateWindowInfos\0WindowInfoMap\0info\0"
    "refreshIcon\0activeChanged\0showPreview\0"
    "playSwingEffect\0stopSwingEffect\0"
    "checkAttentionEffect\0onGSettingsChanged\0"
    "key\0checkGSettingsControl\0onThemeTypeChanged\0"
    "DGuiApplicationHelper::ColorType\0"
    "themeType\0onRefreshIcon\0onResetPreview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    1,  102,    2, 0x06 /* Public */,
       6,    0,  105,    2, 0x06 /* Public */,
       7,    1,  106,    2, 0x06 /* Public */,
      10,    0,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  110,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,
      19,    0,  118,    2, 0x08 /* Private */,
      20,    1,  119,    2, 0x08 /* Private */,
      22,    0,  122,    2, 0x08 /* Private */,
      23,    1,  123,    2, 0x08 /* Private */,
      26,    0,  126,    2, 0x08 /* Private */,
      27,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AppItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestActivateWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 1: _t->requestPreviewWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 2: _t->requestCancelPreview(); break;
        case 3: _t->dragReady((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->requestUpdateEntryGeometries(); break;
        case 5: _t->updateWindowInfos((*reinterpret_cast< const WindowInfoMap(*)>(_a[1]))); break;
        case 6: _t->refreshIcon(); break;
        case 7: _t->activeChanged(); break;
        case 8: _t->showPreview(); break;
        case 9: _t->playSwingEffect(); break;
        case 10: _t->stopSwingEffect(); break;
        case 11: _t->checkAttentionEffect(); break;
        case 12: _t->onGSettingsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: { bool _r = _t->checkGSettingsControl();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->onThemeTypeChanged((*reinterpret_cast< DGuiApplicationHelper::ColorType(*)>(_a[1]))); break;
        case 15: _t->onRefreshIcon(); break;
        case 16: _t->onResetPreview(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WindowInfoMap >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppItem::*)(const WId ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppItem::requestActivateWindow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppItem::*)(const WId ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppItem::requestPreviewWindow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppItem::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppItem::requestCancelPreview)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppItem::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppItem::dragReady)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AppItem::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppItem::requestUpdateEntryGeometries)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppItem::staticMetaObject = { {
    QMetaObject::SuperData::link<DockItem::staticMetaObject>(),
    qt_meta_stringdata_AppItem.data,
    qt_meta_data_AppItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppItem.stringdata0))
        return static_cast<void*>(this);
    return DockItem::qt_metacast(_clname);
}

int AppItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void AppItem::requestActivateWindow(const WId _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< AppItem *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppItem::requestPreviewWindow(const WId _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< AppItem *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AppItem::requestCancelPreview()const
{
    QMetaObject::activate(const_cast< AppItem *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AppItem::dragReady(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AppItem::requestUpdateEntryGeometries()const
{
    QMetaObject::activate(const_cast< AppItem *>(this), &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
