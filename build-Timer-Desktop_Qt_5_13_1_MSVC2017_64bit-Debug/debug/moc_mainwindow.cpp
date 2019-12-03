/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Timer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "add_element"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "SmartTimer*"
QT_MOC_LITERAL(4, 36, 5), // "timer"
QT_MOC_LITERAL(5, 42, 9), // "add_alarm"
QT_MOC_LITERAL(6, 52, 9), // "add_timer"
QT_MOC_LITERAL(7, 62, 10), // "end_signal"
QT_MOC_LITERAL(8, 73, 11), // "update_time"
QT_MOC_LITERAL(9, 85, 21), // "on_add_button_clicked"
QT_MOC_LITERAL(10, 107, 24), // "on_delete_button_clicked"
QT_MOC_LITERAL(11, 132, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(12, 158, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 175, 4), // "item"
QT_MOC_LITERAL(14, 180, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(15, 212, 5), // "index"
QT_MOC_LITERAL(16, 218, 22), // "on_play_button_clicked"
QT_MOC_LITERAL(17, 241, 23), // "on_reset_button_clicked"
QT_MOC_LITERAL(18, 265, 10), // "show_timer"
QT_MOC_LITERAL(19, 276, 13) // "current_timer"

    },
    "MainWindow\0add_element\0\0SmartTimer*\0"
    "timer\0add_alarm\0add_timer\0end_signal\0"
    "update_time\0on_add_button_clicked\0"
    "on_delete_button_clicked\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0on_comboBox_currentIndexChanged\0"
    "index\0on_play_button_clicked\0"
    "on_reset_button_clicked\0show_timer\0"
    "current_timer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x0a /* Public */,
       7,    1,   83,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    0,   96,    2, 0x08 /* Private */,
      18,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add_element((*reinterpret_cast< SmartTimer*(*)>(_a[1]))); break;
        case 1: _t->add_alarm((*reinterpret_cast< SmartTimer*(*)>(_a[1]))); break;
        case 2: _t->add_timer((*reinterpret_cast< SmartTimer*(*)>(_a[1]))); break;
        case 3: _t->end_signal((*reinterpret_cast< SmartTimer*(*)>(_a[1]))); break;
        case 4: _t->update_time(); break;
        case 5: _t->on_add_button_clicked(); break;
        case 6: _t->on_delete_button_clicked(); break;
        case 7: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_play_button_clicked(); break;
        case 10: _t->on_reset_button_clicked(); break;
        case 11: _t->show_timer((*reinterpret_cast< SmartTimer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
