/****************************************************************************
** Meta object code from reading C++ file 'dlg_warning.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlg_warning.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_warning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlg_warning_t {
    QByteArrayData data[7];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlg_warning_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlg_warning_t qt_meta_stringdata_dlg_warning = {
    {
QT_MOC_LITERAL(0, 0, 11), // "dlg_warning"
QT_MOC_LITERAL(1, 12, 8), // "setTitle"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "Title"
QT_MOC_LITERAL(4, 28, 14), // "setDescription"
QT_MOC_LITERAL(5, 43, 11), // "Description"
QT_MOC_LITERAL(6, 55, 16) // "on_PB_OK_clicked"

    },
    "dlg_warning\0setTitle\0\0Title\0setDescription\0"
    "Description\0on_PB_OK_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlg_warning[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void dlg_warning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dlg_warning *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setDescription((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_PB_OK_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlg_warning::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_dlg_warning.data,
    qt_meta_data_dlg_warning,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dlg_warning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlg_warning::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlg_warning.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlg_warning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
