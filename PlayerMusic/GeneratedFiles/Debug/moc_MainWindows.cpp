/****************************************************************************
** Meta object code from reading C++ file 'MainWindows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../View/MainWindows/MainWindows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindows_t {
    QByteArrayData data[19];
    char stringdata0[213];
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
QT_MOC_LITERAL(4, 23, 12), // "PlaySelected"
QT_MOC_LITERAL(5, 36, 5), // "index"
QT_MOC_LITERAL(6, 42, 9), // "PlayPause"
QT_MOC_LITERAL(7, 52, 4), // "Stop"
QT_MOC_LITERAL(8, 57, 4), // "Play"
QT_MOC_LITERAL(9, 62, 5), // "Pause"
QT_MOC_LITERAL(10, 68, 13), // "StatusChanged"
QT_MOC_LITERAL(11, 82, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(12, 108, 6), // "status"
QT_MOC_LITERAL(13, 115, 16), // "on_sliderProgres"
QT_MOC_LITERAL(14, 132, 15), // "on_sliderVolume"
QT_MOC_LITERAL(15, 148, 8), // "position"
QT_MOC_LITERAL(16, 157, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(17, 175, 18), // "on_positionChanged"
QT_MOC_LITERAL(18, 194, 18) // "on_durationChanged"

    },
    "MainWindows\0Exit\0\0Hide\0PlaySelected\0"
    "index\0PlayPause\0Stop\0Play\0Pause\0"
    "StatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0on_sliderProgres\0on_sliderVolume\0"
    "position\0on_btnAdd_clicked\0"
    "on_positionChanged\0on_durationChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    1,   96,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void, QMetaType::LongLong,   15,

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
        case 2: _t->PlaySelected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->PlayPause(); break;
        case 4: _t->Stop(); break;
        case 5: _t->Play(); break;
        case 6: _t->Pause(); break;
        case 7: _t->StatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 8: _t->on_sliderProgres(); break;
        case 9: _t->on_sliderVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_btnAdd_clicked(); break;
        case 11: _t->on_positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 12: _t->on_durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindows::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindows.data,
      qt_meta_data_MainWindows,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindows::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
