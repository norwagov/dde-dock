/****************************************************************************
** Meta object code from reading C++ file 'multiscreenworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frame/util/multiscreenworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multiscreenworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiScreenWorker_t {
    QByteArrayData data[62];
    char stringdata0[1027];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiScreenWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiScreenWorker_t qt_meta_stringdata_MultiScreenWorker = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MultiScreenWorker"
QT_MOC_LITERAL(1, 18, 14), // "opacityChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 18), // "displayModeChanegd"
QT_MOC_LITERAL(5, 59, 26), // "requestUpdateRegionMonitor"
QT_MOC_LITERAL(6, 86, 29), // "requestUpdateFrontendGeometry"
QT_MOC_LITERAL(7, 116, 26), // "requestNotifyWindowManager"
QT_MOC_LITERAL(8, 143, 21), // "requestUpdatePosition"
QT_MOC_LITERAL(9, 165, 8), // "Position"
QT_MOC_LITERAL(10, 174, 7), // "fromPos"
QT_MOC_LITERAL(11, 182, 5), // "toPos"
QT_MOC_LITERAL(12, 188, 19), // "requestUpdateLayout"
QT_MOC_LITERAL(13, 208, 21), // "requestUpdateDragArea"
QT_MOC_LITERAL(14, 230, 24), // "requestUpdateMonitorInfo"
QT_MOC_LITERAL(15, 255, 18), // "requestStopShowAni"
QT_MOC_LITERAL(16, 274, 18), // "requestStopHideAni"
QT_MOC_LITERAL(17, 293, 22), // "requestUpdateDockEntry"
QT_MOC_LITERAL(18, 316, 27), // "notifyDaemonInterfaceUpdate"
QT_MOC_LITERAL(19, 344, 17), // "onAutoHideChanged"
QT_MOC_LITERAL(20, 362, 8), // "autoHide"
QT_MOC_LITERAL(21, 371, 20), // "updateDaemonDockSize"
QT_MOC_LITERAL(22, 392, 8), // "dockSize"
QT_MOC_LITERAL(23, 401, 28), // "onRequestUpdateRegionMonitor"
QT_MOC_LITERAL(24, 430, 16), // "handleDBusSignal"
QT_MOC_LITERAL(25, 447, 12), // "QDBusMessage"
QT_MOC_LITERAL(26, 460, 22), // "onRegionMonitorChanged"
QT_MOC_LITERAL(27, 483, 1), // "x"
QT_MOC_LITERAL(28, 485, 1), // "y"
QT_MOC_LITERAL(29, 487, 3), // "key"
QT_MOC_LITERAL(30, 491, 28), // "onExtralRegionMonitorChanged"
QT_MOC_LITERAL(31, 520, 15), // "showAniFinished"
QT_MOC_LITERAL(32, 536, 15), // "hideAniFinished"
QT_MOC_LITERAL(33, 552, 13), // "updateDisplay"
QT_MOC_LITERAL(34, 566, 19), // "onWindowSizeChanged"
QT_MOC_LITERAL(35, 586, 20), // "primaryScreenChanged"
QT_MOC_LITERAL(36, 607, 8), // "QScreen*"
QT_MOC_LITERAL(37, 616, 6), // "screen"
QT_MOC_LITERAL(38, 623, 20), // "updateParentGeometry"
QT_MOC_LITERAL(39, 644, 3), // "pos"
QT_MOC_LITERAL(40, 648, 17), // "onPositionChanged"
QT_MOC_LITERAL(41, 666, 8), // "position"
QT_MOC_LITERAL(42, 675, 20), // "onDisplayModeChanged"
QT_MOC_LITERAL(43, 696, 11), // "DisplayMode"
QT_MOC_LITERAL(44, 708, 11), // "displayMode"
QT_MOC_LITERAL(45, 720, 17), // "onHideModeChanged"
QT_MOC_LITERAL(46, 738, 8), // "HideMode"
QT_MOC_LITERAL(47, 747, 8), // "hideMode"
QT_MOC_LITERAL(48, 756, 18), // "onHideStateChanged"
QT_MOC_LITERAL(49, 775, 15), // "Dock::HideState"
QT_MOC_LITERAL(50, 791, 5), // "state"
QT_MOC_LITERAL(51, 797, 16), // "onOpacityChanged"
QT_MOC_LITERAL(52, 814, 31), // "onRequestUpdateFrontendGeometry"
QT_MOC_LITERAL(53, 846, 21), // "onRequestUpdateLayout"
QT_MOC_LITERAL(54, 868, 28), // "onRequestNotifyWindowManager"
QT_MOC_LITERAL(55, 897, 23), // "onRequestUpdatePosition"
QT_MOC_LITERAL(56, 921, 26), // "onRequestUpdateMonitorInfo"
QT_MOC_LITERAL(57, 948, 22), // "onRequestDelayShowDock"
QT_MOC_LITERAL(58, 971, 12), // "onTouchPress"
QT_MOC_LITERAL(59, 984, 4), // "type"
QT_MOC_LITERAL(60, 989, 14), // "onTouchRelease"
QT_MOC_LITERAL(61, 1004, 22) // "onDelayAutoHideChanged"

    },
    "MultiScreenWorker\0opacityChanged\0\0"
    "value\0displayModeChanegd\0"
    "requestUpdateRegionMonitor\0"
    "requestUpdateFrontendGeometry\0"
    "requestNotifyWindowManager\0"
    "requestUpdatePosition\0Position\0fromPos\0"
    "toPos\0requestUpdateLayout\0"
    "requestUpdateDragArea\0requestUpdateMonitorInfo\0"
    "requestStopShowAni\0requestStopHideAni\0"
    "requestUpdateDockEntry\0"
    "notifyDaemonInterfaceUpdate\0"
    "onAutoHideChanged\0autoHide\0"
    "updateDaemonDockSize\0dockSize\0"
    "onRequestUpdateRegionMonitor\0"
    "handleDBusSignal\0QDBusMessage\0"
    "onRegionMonitorChanged\0x\0y\0key\0"
    "onExtralRegionMonitorChanged\0"
    "showAniFinished\0hideAniFinished\0"
    "updateDisplay\0onWindowSizeChanged\0"
    "primaryScreenChanged\0QScreen*\0screen\0"
    "updateParentGeometry\0pos\0onPositionChanged\0"
    "position\0onDisplayModeChanged\0DisplayMode\0"
    "displayMode\0onHideModeChanged\0HideMode\0"
    "hideMode\0onHideStateChanged\0Dock::HideState\0"
    "state\0onOpacityChanged\0"
    "onRequestUpdateFrontendGeometry\0"
    "onRequestUpdateLayout\0"
    "onRequestNotifyWindowManager\0"
    "onRequestUpdatePosition\0"
    "onRequestUpdateMonitorInfo\0"
    "onRequestDelayShowDock\0onTouchPress\0"
    "type\0onTouchRelease\0onDelayAutoHideChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiScreenWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  214,    2, 0x06 /* Public */,
       4,    0,  217,    2, 0x06 /* Public */,
       5,    0,  218,    2, 0x06 /* Public */,
       6,    0,  219,    2, 0x06 /* Public */,
       7,    0,  220,    2, 0x06 /* Public */,
       8,    2,  221,    2, 0x06 /* Public */,
      12,    0,  226,    2, 0x06 /* Public */,
      13,    0,  227,    2, 0x06 /* Public */,
      14,    0,  228,    2, 0x06 /* Public */,
      15,    0,  229,    2, 0x06 /* Public */,
      16,    0,  230,    2, 0x06 /* Public */,
      17,    0,  231,    2, 0x06 /* Public */,
      18,    0,  232,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  233,    2, 0x0a /* Public */,
      21,    1,  236,    2, 0x0a /* Public */,
      23,    0,  239,    2, 0x0a /* Public */,
      24,    1,  240,    2, 0x08 /* Private */,
      26,    3,  243,    2, 0x08 /* Private */,
      30,    3,  250,    2, 0x08 /* Private */,
      31,    0,  257,    2, 0x08 /* Private */,
      32,    0,  258,    2, 0x08 /* Private */,
      33,    0,  259,    2, 0x08 /* Private */,
      34,    1,  260,    2, 0x08 /* Private */,
      35,    1,  263,    2, 0x08 /* Private */,
      38,    2,  266,    2, 0x08 /* Private */,
      38,    1,  271,    2, 0x08 /* Private */,
      40,    1,  274,    2, 0x08 /* Private */,
      42,    1,  277,    2, 0x08 /* Private */,
      45,    1,  280,    2, 0x08 /* Private */,
      48,    1,  283,    2, 0x08 /* Private */,
      51,    1,  286,    2, 0x08 /* Private */,
      52,    0,  289,    2, 0x08 /* Private */,
      53,    0,  290,    2, 0x08 /* Private */,
      54,    0,  291,    2, 0x08 /* Private */,
      55,    2,  292,    2, 0x08 /* Private */,
      56,    0,  297,    2, 0x08 /* Private */,
      57,    0,  298,    2, 0x08 /* Private */,
      58,    4,  299,    2, 0x08 /* Private */,
      60,    4,  308,    2, 0x08 /* Private */,
      61,    0,  317,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   27,   28,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   27,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 9,    3,   39,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, 0x80000000 | 9,   41,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   59,   27,   28,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   59,   27,   28,   29,
    QMetaType::Void,

       0        // eod
};

void MultiScreenWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiScreenWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 1: _t->displayModeChanegd(); break;
        case 2: _t->requestUpdateRegionMonitor(); break;
        case 3: _t->requestUpdateFrontendGeometry(); break;
        case 4: _t->requestNotifyWindowManager(); break;
        case 5: _t->requestUpdatePosition((*reinterpret_cast< const Position(*)>(_a[1])),(*reinterpret_cast< const Position(*)>(_a[2]))); break;
        case 6: _t->requestUpdateLayout(); break;
        case 7: _t->requestUpdateDragArea(); break;
        case 8: _t->requestUpdateMonitorInfo(); break;
        case 9: _t->requestStopShowAni(); break;
        case 10: _t->requestStopHideAni(); break;
        case 11: _t->requestUpdateDockEntry(); break;
        case 12: _t->notifyDaemonInterfaceUpdate(); break;
        case 13: _t->onAutoHideChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->updateDaemonDockSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onRequestUpdateRegionMonitor(); break;
        case 16: _t->handleDBusSignal((*reinterpret_cast< QDBusMessage(*)>(_a[1]))); break;
        case 17: _t->onRegionMonitorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 18: _t->onExtralRegionMonitorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 19: _t->showAniFinished(); break;
        case 20: _t->hideAniFinished(); break;
        case 21: _t->updateDisplay(); break;
        case 22: _t->onWindowSizeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 23: _t->primaryScreenChanged((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 24: _t->updateParentGeometry((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const Position(*)>(_a[2]))); break;
        case 25: _t->updateParentGeometry((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 26: _t->onPositionChanged((*reinterpret_cast< const Position(*)>(_a[1]))); break;
        case 27: _t->onDisplayModeChanged((*reinterpret_cast< const DisplayMode(*)>(_a[1]))); break;
        case 28: _t->onHideModeChanged((*reinterpret_cast< const HideMode(*)>(_a[1]))); break;
        case 29: _t->onHideStateChanged((*reinterpret_cast< const Dock::HideState(*)>(_a[1]))); break;
        case 30: _t->onOpacityChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 31: _t->onRequestUpdateFrontendGeometry(); break;
        case 32: _t->onRequestUpdateLayout(); break;
        case 33: _t->onRequestNotifyWindowManager(); break;
        case 34: _t->onRequestUpdatePosition((*reinterpret_cast< const Position(*)>(_a[1])),(*reinterpret_cast< const Position(*)>(_a[2]))); break;
        case 35: _t->onRequestUpdateMonitorInfo(); break;
        case 36: _t->onRequestDelayShowDock(); break;
        case 37: _t->onTouchPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 38: _t->onTouchRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 39: _t->onDelayAutoHideChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MultiScreenWorker::*)(const quint8 ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::opacityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::displayModeChanegd)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestUpdateRegionMonitor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestUpdateFrontendGeometry)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestNotifyWindowManager)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)(const Position & , const Position & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestUpdatePosition)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestUpdateLayout)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestUpdateDragArea)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestUpdateMonitorInfo)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestStopShowAni)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestStopHideAni)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::requestUpdateDockEntry)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MultiScreenWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiScreenWorker::notifyDaemonInterfaceUpdate)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MultiScreenWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MultiScreenWorker.data,
    qt_meta_data_MultiScreenWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MultiScreenWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiScreenWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiScreenWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MultiScreenWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void MultiScreenWorker::opacityChanged(const quint8 _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MultiScreenWorker *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultiScreenWorker::displayModeChanegd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MultiScreenWorker::requestUpdateRegionMonitor()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MultiScreenWorker::requestUpdateFrontendGeometry()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MultiScreenWorker::requestNotifyWindowManager()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MultiScreenWorker::requestUpdatePosition(const Position & _t1, const Position & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MultiScreenWorker::requestUpdateLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MultiScreenWorker::requestUpdateDragArea()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MultiScreenWorker::requestUpdateMonitorInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MultiScreenWorker::requestStopShowAni()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MultiScreenWorker::requestStopHideAni()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MultiScreenWorker::requestUpdateDockEntry()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MultiScreenWorker::notifyDaemonInterfaceUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
struct qt_meta_stringdata_ScreenChangeMonitor_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenChangeMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenChangeMonitor_t qt_meta_stringdata_ScreenChangeMonitor = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ScreenChangeMonitor"

    },
    "ScreenChangeMonitor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenChangeMonitor[] = {

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

void ScreenChangeMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ScreenChangeMonitor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ScreenChangeMonitor.data,
    qt_meta_data_ScreenChangeMonitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScreenChangeMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenChangeMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenChangeMonitor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScreenChangeMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
