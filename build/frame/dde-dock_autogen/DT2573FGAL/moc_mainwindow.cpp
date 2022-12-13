/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/window/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DragWidget_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DragWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DragWidget_t qt_meta_stringdata_DragWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DragWidget"
QT_MOC_LITERAL(1, 11, 15), // "dragPointOffset"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "dragFinished"
QT_MOC_LITERAL(4, 41, 11), // "onTouchMove"
QT_MOC_LITERAL(5, 53, 6), // "scaleX"
QT_MOC_LITERAL(6, 60, 6) // "scaleY"

    },
    "DragWidget\0dragPointOffset\0\0dragFinished\0"
    "onTouchMove\0scaleX\0scaleY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DragWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,

       0        // eod
};

void DragWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DragWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dragPointOffset((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->dragFinished(); break;
        case 2: _t->onTouchMove((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DragWidget::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DragWidget::dragPointOffset)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DragWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DragWidget::dragFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DragWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DragWidget.data,
    qt_meta_data_DragWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DragWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DragWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DragWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DragWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DragWidget::dragPointOffset(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DragWidget::dragFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "panelGeometryChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "launch"
QT_MOC_LITERAL(4, 40, 8), // "callShow"
QT_MOC_LITERAL(5, 49, 13), // "relaodPlugins"
QT_MOC_LITERAL(6, 63, 18), // "RegisterDdeSession"
QT_MOC_LITERAL(7, 82, 10), // "resizeDock"
QT_MOC_LITERAL(8, 93, 6), // "offset"
QT_MOC_LITERAL(9, 100, 8), // "dragging"
QT_MOC_LITERAL(10, 109, 15), // "resetDragWindow"
QT_MOC_LITERAL(11, 125, 16), // "compositeChanged"
QT_MOC_LITERAL(12, 142, 16), // "adjustShadowMask"
QT_MOC_LITERAL(13, 159, 22), // "onDbusNameOwnerChanged"
QT_MOC_LITERAL(14, 182, 4), // "name"
QT_MOC_LITERAL(15, 187, 8), // "oldOwner"
QT_MOC_LITERAL(16, 196, 8), // "newOwner"
QT_MOC_LITERAL(17, 205, 23), // "onMainWindowSizeChanged"
QT_MOC_LITERAL(18, 229, 16), // "themeTypeChanged"
QT_MOC_LITERAL(19, 246, 32), // "DGuiApplicationHelper::ColorType"
QT_MOC_LITERAL(20, 279, 9), // "themeType"
QT_MOC_LITERAL(21, 289, 22) // "touchRequestResizeDock"

    },
    "MainWindow\0panelGeometryChanged\0\0"
    "launch\0callShow\0relaodPlugins\0"
    "RegisterDdeSession\0resizeDock\0offset\0"
    "dragging\0resetDragWindow\0compositeChanged\0"
    "adjustShadowMask\0onDbusNameOwnerChanged\0"
    "name\0oldOwner\0newOwner\0onMainWindowSizeChanged\0"
    "themeTypeChanged\0DGuiApplicationHelper::ColorType\0"
    "themeType\0touchRequestResizeDock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    2,   84,    2, 0x0a /* Public */,
      10,    0,   89,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    3,   92,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,
      18,    1,  102,    2, 0x08 /* Private */,
      21,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   16,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->panelGeometryChanged(); break;
        case 1: _t->launch(); break;
        case 2: _t->callShow(); break;
        case 3: _t->relaodPlugins(); break;
        case 4: _t->RegisterDdeSession(); break;
        case 5: _t->resizeDock((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->resetDragWindow(); break;
        case 7: _t->compositeChanged(); break;
        case 8: _t->adjustShadowMask(); break;
        case 9: _t->onDbusNameOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->onMainWindowSizeChanged((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 11: _t->themeTypeChanged((*reinterpret_cast< DGuiApplicationHelper::ColorType(*)>(_a[1]))); break;
        case 12: _t->touchRequestResizeDock(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::panelGeometryChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<DBlurEffectWidget::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return DBlurEffectWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBlurEffectWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::panelGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
