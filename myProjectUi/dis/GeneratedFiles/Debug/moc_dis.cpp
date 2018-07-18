/****************************************************************************
** Meta object code from reading C++ file 'dis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dis_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dis_t qt_meta_stringdata_dis = {
    {
QT_MOC_LITERAL(0, 0, 3), // "dis"
QT_MOC_LITERAL(1, 4, 23), // "on_toolButton_1_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "on_bbtn0_clicked"
QT_MOC_LITERAL(4, 46, 11), // "dealSingnal"
QT_MOC_LITERAL(5, 58, 8), // "QString&"
QT_MOC_LITERAL(6, 67, 3), // "str"
QT_MOC_LITERAL(7, 71, 11), // "dealtimeout"
QT_MOC_LITERAL(8, 83, 10) // "dealNumber"

    },
    "dis\0on_toolButton_1_clicked\0\0"
    "on_bbtn0_clicked\0dealSingnal\0QString&\0"
    "str\0dealtimeout\0dealNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       7,    0,   44,    2, 0x0a /* Public */,
       8,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    2,

       0        // eod
};

void dis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dis *_t = static_cast<dis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toolButton_1_clicked(); break;
        case 1: _t->on_bbtn0_clicked(); break;
        case 2: _t->dealSingnal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->dealtimeout(); break;
        case 4: { int _r = _t->dealNumber((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject dis::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dis.data,
      qt_meta_data_dis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dis.stringdata0))
        return static_cast<void*>(const_cast< dis*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int dis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
