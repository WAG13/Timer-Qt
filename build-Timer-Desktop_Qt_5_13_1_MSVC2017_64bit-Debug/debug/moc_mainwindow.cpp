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
    QByteArrayData data[16];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "addAlarm"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "SmartTimer"
QT_MOC_LITERAL(4, 32, 5), // "timer"
QT_MOC_LITERAL(5, 38, 8), // "addTimer"
QT_MOC_LITERAL(6, 47, 11), // "add_element"
QT_MOC_LITERAL(7, 59, 10), // "end_signal"
QT_MOC_LITERAL(8, 70, 11), // "update_time"
QT_MOC_LITERAL(9, 82, 21), // "on_add_button_clicked"
QT_MOC_LITERAL(10, 104, 24), // "on_delete_button_clicked"
QT_MOC_LITERAL(11, 129, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(12, 155, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 172, 4), // "item"
QT_MOC_LITERAL(14, 177, 10), // "show_timer"
QT_MOC_LITERAL(15, 188, 13) // "current_timer"

    },
    "MainWindow\0addAlarm\0\0SmartTimer\0timer\0"
    "addTimer\0add_element\0end_signal\0"
    "update_time\0on_add_button_clicked\0"
    "on_delete_button_clicked\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0show_timer\0current_timer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       7,    1,   68,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      14,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 3,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addAlarm((*reinterpret_cast< SmartTimer(*)>(_a[1]))); break;
        case 1: _t->addTimer((*reinterpret_cast< SmartTimer(*)>(_a[1]))); break;
        case 2: _t->add_element((*reinterpret_cast< SmartTimer(*)>(_a[1]))); break;
        case 3: _t->end_signal((*reinterpret_cast< SmartTimer(*)>(_a[1]))); break;
        case 4: _t->update_time(); break;
        case 5: _t->on_add_button_clicked(); break;
        case 6: _t->on_delete_button_clicked(); break;
        case 7: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->show_timer((*reinterpret_cast< SmartTimer(*)>(_a[1]))); break;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
