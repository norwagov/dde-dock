/****************************************************************************
** Meta object code from reading C++ file 'datetimewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../plugins/datetime/datetimewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datetimewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatetimeWidget_t {
    QByteArrayData data[12];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatetimeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatetimeWidget_t qt_meta_stringdata_DatetimeWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DatetimeWidget"
QT_MOC_LITERAL(1, 15, 21), // "requestUpdateGeometry"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "set24HourFormat"
QT_MOC_LITERAL(4, 54, 5), // "value"
QT_MOC_LITERAL(5, 60, 20), // "updateDateTimeString"
QT_MOC_LITERAL(6, 81, 18), // "setShortDateFormat"
QT_MOC_LITERAL(7, 100, 4), // "type"
QT_MOC_LITERAL(8, 105, 18), // "setShortTimeFormat"
QT_MOC_LITERAL(9, 124, 17), // "setLongDateFormat"
QT_MOC_LITERAL(10, 142, 16), // "setWeekdayFormat"
QT_MOC_LITERAL(11, 159, 17) // "setLongTimeFormat"

    },
    "DatetimeWidget\0requestUpdateGeometry\0"
    "\0set24HourFormat\0value\0updateDateTimeString\0"
    "setShortDateFormat\0type\0setShortTimeFormat\0"
    "setLongDateFormat\0setWeekdayFormat\0"
    "setLongTimeFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatetimeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void DatetimeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatetimeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestUpdateGeometry(); break;
        case 1: _t->set24HourFormat((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->updateDateTimeString(); break;
        case 3: _t->setShortDateFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setShortTimeFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setLongDateFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setWeekdayFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setLongTimeFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DatetimeWidget::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatetimeWidget::requestUpdateGeometry)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatetimeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DatetimeWidget.data,
    qt_meta_data_DatetimeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatetimeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatetimeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatetimeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DatetimeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DatetimeWidget::requestUpdateGeometry()const
{
    QMetaObject::activate(const_cast< DatetimeWidget *>(this), &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
