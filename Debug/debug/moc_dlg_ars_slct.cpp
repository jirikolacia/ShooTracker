/****************************************************************************
** Meta object code from reading C++ file 'dlg_ars_slct.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlg_ars_slct.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_ars_slct.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlg_ars_slct_t {
    QByteArrayData data[12];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlg_ars_slct_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlg_ars_slct_t qt_meta_stringdata_dlg_ars_slct = {
    {
QT_MOC_LITERAL(0, 0, 12), // "dlg_ars_slct"
QT_MOC_LITERAL(1, 13, 11), // "SetWEAPONID"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "WEAPONID"
QT_MOC_LITERAL(4, 35, 19), // "on_PB_Stock_clicked"
QT_MOC_LITERAL(5, 55, 22), // "on_PB_Silencer_clicked"
QT_MOC_LITERAL(6, 78, 22), // "on_PB_Magazine_clicked"
QT_MOC_LITERAL(7, 101, 24), // "on_PB_PistolGrip_clicked"
QT_MOC_LITERAL(8, 126, 20), // "on_PB_Optics_clicked"
QT_MOC_LITERAL(9, 147, 22), // "on_PB_Foregrip_clicked"
QT_MOC_LITERAL(10, 170, 29), // "on_PB_Attachment_back_clicked"
QT_MOC_LITERAL(11, 200, 5) // "Close"

    },
    "dlg_ars_slct\0SetWEAPONID\0\0WEAPONID\0"
    "on_PB_Stock_clicked\0on_PB_Silencer_clicked\0"
    "on_PB_Magazine_clicked\0on_PB_PistolGrip_clicked\0"
    "on_PB_Optics_clicked\0on_PB_Foregrip_clicked\0"
    "on_PB_Attachment_back_clicked\0Close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlg_ars_slct[] = {

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
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dlg_ars_slct::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dlg_ars_slct *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetWEAPONID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_PB_Stock_clicked(); break;
        case 2: _t->on_PB_Silencer_clicked(); break;
        case 3: _t->on_PB_Magazine_clicked(); break;
        case 4: _t->on_PB_PistolGrip_clicked(); break;
        case 5: _t->on_PB_Optics_clicked(); break;
        case 6: _t->on_PB_Foregrip_clicked(); break;
        case 7: _t->on_PB_Attachment_back_clicked(); break;
        case 8: _t->Close(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlg_ars_slct::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_dlg_ars_slct.data,
    qt_meta_data_dlg_ars_slct,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dlg_ars_slct::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlg_ars_slct::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlg_ars_slct.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlg_ars_slct::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
