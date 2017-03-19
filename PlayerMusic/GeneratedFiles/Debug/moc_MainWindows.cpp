/****************************************************************************
** Meta object code from reading C++ file 'MainWindows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/MainWindows/MainWindows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindows_t {
    QByteArrayData data[14];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindows_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindows_t qt_meta_stringdata_MainWindows = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainWindows"
QT_MOC_LITERAL(1, 12, 4), // "Exit"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "Hide"
QT_MOC_LITERAL(4, 23, 12), // "playSelected"
QT_MOC_LITERAL(5, 36, 5), // "index"
QT_MOC_LITERAL(6, 42, 16), // "on_sliderProgres"
QT_MOC_LITERAL(7, 59, 15), // "on_sliderVolume"
QT_MOC_LITERAL(8, 75, 8), // "position"
QT_MOC_LITERAL(9, 84, 23), // "on_btnPlayPause_clicked"
QT_MOC_LITERAL(10, 108, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(11, 127, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(12, 145, 18), // "on_positionChanged"
QT_MOC_LITERAL(13, 164, 18) // "on_durationChanged"

    },
    "MainWindows\0Exit\0\0Hide\0playSelected\0"
    "index\0on_sliderProgres\0on_sliderVolume\0"
    "position\0on_btnPlayPause_clicked\0"
    "on_btnStop_clicked\0on_btnAdd_clicked\0"
    "on_positionChanged\0on_durationChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      13,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,    8,

       0        // eod
};

void MainWindows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindows *_t = static_cast<MainWindows *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Exit(); break;
        case 1: _t->Hide(); break;
        case 2: _t->playSelected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_sliderProgres(); break;
        case 4: _t->on_sliderVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_btnPlayPause_clicked(); break;
        case 6: _t->on_btnStop_clicked(); break;
        case 7: _t->on_btnAdd_clicked(); break;
        case 8: _t->on_positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->on_durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindows::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindows.data,
      qt_meta_data_MainWindows,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindows::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindows.stringdata0))
        return static_cast<void*>(const_cast< MainWindows*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
