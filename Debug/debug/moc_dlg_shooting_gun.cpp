/****************************************************************************
** Meta object code from reading C++ file 'dlg_shooting_gun.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlg_shooting_gun.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_shooting_gun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlg_shooting_gun_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlg_shooting_gun_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlg_shooting_gun_t qt_meta_stringdata_dlg_shooting_gun = {
    {
QT_MOC_LITERAL(0, 0, 16), // "dlg_shooting_gun"
QT_MOC_LITERAL(1, 17, 6), // "InitCB"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 47, 9), // "CloseThis"
QT_MOC_LITERAL(5, 57, 8), // "InitArms"
QT_MOC_LITERAL(6, 66, 4), // "Arms"
QT_MOC_LITERAL(7, 71, 8), // "setOrder"
QT_MOC_LITERAL(8, 80, 2) // "ID"

    },
    "dlg_shooting_gun\0InitCB\0\0on_pushButton_clicked\0"
    "CloseThis\0InitArms\0Arms\0setOrder\0ID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlg_shooting_gun[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void dlg_shooting_gun::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dlg_shooting_gun *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitCB(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->CloseThis(); break;
        case 3: _t->InitArms((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->setOrder((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlg_shooting_gun::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_dlg_shooting_gun.data,
    qt_meta_data_dlg_shooting_gun,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dlg_shooting_gun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlg_shooting_gun::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlg_shooting_gun.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlg_shooting_gun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
