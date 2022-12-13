/****************************************************************************
** Meta object code from reading C++ file 'soundapplet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/sound/soundapplet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundapplet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Port_t {
    QByteArrayData data[14];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Port_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Port_t qt_meta_stringdata_Port = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Port"
QT_MOC_LITERAL(1, 5, 9), // "idChanged"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 2), // "id"
QT_MOC_LITERAL(4, 19, 11), // "nameChanged"
QT_MOC_LITERAL(5, 31, 4), // "name"
QT_MOC_LITERAL(6, 36, 15), // "cardNameChanged"
QT_MOC_LITERAL(7, 52, 15), // "isActiveChanged"
QT_MOC_LITERAL(8, 68, 5), // "ative"
QT_MOC_LITERAL(9, 74, 16), // "directionChanged"
QT_MOC_LITERAL(10, 91, 9), // "Direction"
QT_MOC_LITERAL(11, 101, 9), // "direction"
QT_MOC_LITERAL(12, 111, 13), // "cardIdChanged"
QT_MOC_LITERAL(13, 125, 6) // "cardId"

    },
    "Port\0idChanged\0\0id\0nameChanged\0name\0"
    "cardNameChanged\0isActiveChanged\0ative\0"
    "directionChanged\0Direction\0direction\0"
    "cardIdChanged\0cardId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Port[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      12,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::UInt,   13,

       0        // eod
};

void Port::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Port *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->cardNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->isActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->directionChanged((*reinterpret_cast< Direction(*)>(_a[1]))); break;
        case 5: _t->cardIdChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Port::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Port::idChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Port::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Port::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Port::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Port::cardNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Port::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Port::isActiveChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Port::*)(Direction ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Port::directionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Port::*)(uint ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Port::cardIdChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Port::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Port.data,
    qt_meta_data_Port,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Port::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Port::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Port.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Port::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Port::idChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Port *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Port::nameChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Port *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Port::cardNameChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Port *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Port::isActiveChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Port *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Port::directionChanged(Direction _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Port *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Port::cardIdChanged(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Port *>(this), &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_SoundApplet_t {
    QByteArrayData data[26];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundApplet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundApplet_t qt_meta_stringdata_SoundApplet = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SoundApplet"
QT_MOC_LITERAL(1, 12, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 18), // "defaultSinkChanged"
QT_MOC_LITERAL(5, 52, 9), // "DBusSink*"
QT_MOC_LITERAL(6, 62, 4), // "sink"
QT_MOC_LITERAL(7, 67, 20), // "onDefaultSinkChanged"
QT_MOC_LITERAL(8, 88, 15), // "onVolumeChanged"
QT_MOC_LITERAL(9, 104, 6), // "volume"
QT_MOC_LITERAL(10, 111, 24), // "volumeSliderValueChanged"
QT_MOC_LITERAL(11, 136, 21), // "increaseVolumeChanged"
QT_MOC_LITERAL(12, 158, 12), // "cardsChanged"
QT_MOC_LITERAL(13, 171, 5), // "cards"
QT_MOC_LITERAL(14, 177, 10), // "removePort"
QT_MOC_LITERAL(15, 188, 6), // "portId"
QT_MOC_LITERAL(16, 195, 6), // "cardId"
QT_MOC_LITERAL(17, 202, 7), // "addPort"
QT_MOC_LITERAL(18, 210, 11), // "const Port*"
QT_MOC_LITERAL(19, 222, 4), // "port"
QT_MOC_LITERAL(20, 227, 10), // "activePort"
QT_MOC_LITERAL(21, 238, 16), // "haldleDbusSignal"
QT_MOC_LITERAL(22, 255, 12), // "QDBusMessage"
QT_MOC_LITERAL(23, 268, 3), // "msg"
QT_MOC_LITERAL(24, 272, 16), // "updateListHeight"
QT_MOC_LITERAL(25, 289, 16) // "portEnableChange"

    },
    "SoundApplet\0volumeChanged\0\0value\0"
    "defaultSinkChanged\0DBusSink*\0sink\0"
    "onDefaultSinkChanged\0onVolumeChanged\0"
    "volume\0volumeSliderValueChanged\0"
    "increaseVolumeChanged\0cardsChanged\0"
    "cards\0removePort\0portId\0cardId\0addPort\0"
    "const Port*\0port\0activePort\0"
    "haldleDbusSignal\0QDBusMessage\0msg\0"
    "updateListHeight\0portEnableChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundApplet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   85,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      14,    2,   94,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,
      20,    2,  102,    2, 0x08 /* Private */,
      21,    1,  107,    2, 0x08 /* Private */,
      24,    0,  110,    2, 0x08 /* Private */,
      25,    2,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,   15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,   15,   16,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   16,   15,

       0        // eod
};

void SoundApplet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SoundApplet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->volumeChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->defaultSinkChanged((*reinterpret_cast< DBusSink*(*)>(_a[1]))); break;
        case 2: _t->onDefaultSinkChanged(); break;
        case 3: _t->onVolumeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->volumeSliderValueChanged(); break;
        case 5: _t->increaseVolumeChanged(); break;
        case 6: _t->cardsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->removePort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 8: _t->addPort((*reinterpret_cast< const Port*(*)>(_a[1]))); break;
        case 9: _t->activePort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 10: _t->haldleDbusSignal((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 11: _t->updateListHeight(); break;
        case 12: _t->portEnableChange((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SoundApplet::*)(const int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoundApplet::volumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SoundApplet::*)(DBusSink * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoundApplet::defaultSinkChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SoundApplet::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_SoundApplet.data,
    qt_meta_data_SoundApplet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SoundApplet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundApplet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoundApplet.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int SoundApplet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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
void SoundApplet::volumeChanged(const int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SoundApplet *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SoundApplet::defaultSinkChanged(DBusSink * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SoundApplet *>(this), &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
