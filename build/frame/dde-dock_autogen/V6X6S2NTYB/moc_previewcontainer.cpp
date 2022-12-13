/****************************************************************************
** Meta object code from reading C++ file 'previewcontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/item/components/previewcontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreviewContainer_t {
    QByteArrayData data[20];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewContainer_t qt_meta_stringdata_PreviewContainer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PreviewContainer"
QT_MOC_LITERAL(1, 17, 21), // "requestActivateWindow"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "WId"
QT_MOC_LITERAL(4, 44, 3), // "wid"
QT_MOC_LITERAL(5, 48, 20), // "requestPreviewWindow"
QT_MOC_LITERAL(6, 69, 19), // "requestCheckWindows"
QT_MOC_LITERAL(7, 89, 26), // "requestCancelPreviewWindow"
QT_MOC_LITERAL(8, 116, 16), // "requestHidePopup"
QT_MOC_LITERAL(9, 133, 21), // "updateLayoutDirection"
QT_MOC_LITERAL(10, 155, 14), // "Dock::Position"
QT_MOC_LITERAL(11, 170, 7), // "dockPos"
QT_MOC_LITERAL(12, 178, 14), // "updateDockSize"
QT_MOC_LITERAL(13, 193, 4), // "size"
QT_MOC_LITERAL(14, 198, 15), // "checkMouseLeave"
QT_MOC_LITERAL(15, 214, 11), // "prepareHide"
QT_MOC_LITERAL(16, 226, 17), // "onSnapshotClicked"
QT_MOC_LITERAL(17, 244, 14), // "previewEntered"
QT_MOC_LITERAL(18, 259, 15), // "previewFloating"
QT_MOC_LITERAL(19, 275, 25) // "onRequestCloseAppSnapshot"

    },
    "PreviewContainer\0requestActivateWindow\0"
    "\0WId\0wid\0requestPreviewWindow\0"
    "requestCheckWindows\0requestCancelPreviewWindow\0"
    "requestHidePopup\0updateLayoutDirection\0"
    "Dock::Position\0dockPos\0updateDockSize\0"
    "size\0checkMouseLeave\0prepareHide\0"
    "onSnapshotClicked\0previewEntered\0"
    "previewFloating\0onRequestCloseAppSnapshot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewContainer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,
       7,    0,   86,    2, 0x06 /* Public */,
       8,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   88,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,
      16,    1,   96,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PreviewContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreviewContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestActivateWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 1: _t->requestPreviewWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 2: _t->requestCheckWindows(); break;
        case 3: _t->requestCancelPreviewWindow(); break;
        case 4: _t->requestHidePopup(); break;
        case 5: _t->updateLayoutDirection((*reinterpret_cast< const Dock::Position(*)>(_a[1]))); break;
        case 6: _t->updateDockSize((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->checkMouseLeave(); break;
        case 8: _t->prepareHide(); break;
        case 9: _t->onSnapshotClicked((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 10: _t->previewEntered((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 11: _t->previewFloating(); break;
        case 12: _t->onRequestCloseAppSnapshot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dock::Position >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreviewContainer::*)(const WId ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewContainer::requestActivateWindow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PreviewContainer::*)(const WId ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewContainer::requestPreviewWindow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PreviewContainer::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewContainer::requestCheckWindows)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PreviewContainer::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewContainer::requestCancelPreviewWindow)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PreviewContainer::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewContainer::requestHidePopup)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PreviewContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PreviewContainer.data,
    qt_meta_data_PreviewContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreviewContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewContainer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PreviewContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void PreviewContainer::requestActivateWindow(const WId _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PreviewContainer::requestPreviewWindow(const WId _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PreviewContainer::requestCheckWindows()const
{
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PreviewContainer::requestCancelPreviewWindow()const
{
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PreviewContainer::requestHidePopup()const
{
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
