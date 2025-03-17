/****************************************************************************
** Meta object code from reading C++ file 'dlg_arsenal_select_att.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlg_arsenal_select_att.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_arsenal_select_att.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlg_arsenal_select_att_t {
    QByteArrayData data[11];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlg_arsenal_select_att_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlg_arsenal_select_att_t qt_meta_stringdata_dlg_arsenal_select_att = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dlg_arsenal_select_att"
QT_MOC_LITERAL(1, 23, 11), // "SetWEAPONID"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "WEAPONID"
QT_MOC_LITERAL(4, 45, 19), // "on_PB_Stock_clicked"
QT_MOC_LITERAL(5, 65, 22), // "on_PB_Silencer_clicked"
QT_MOC_LITERAL(6, 88, 22), // "on_PB_Magazine_clicked"
QT_MOC_LITERAL(7, 111, 24), // "on_PB_PistolGrip_clicked"
QT_MOC_LITERAL(8, 136, 20), // "on_PB_Optics_clicked"
QT_MOC_LITERAL(9, 157, 22), // "on_PB_Foregrip_clicked"
QT_MOC_LITERAL(10, 180, 29) // "on_PB_Attachment_back_clicked"

    },
    "dlg_arsenal_select_att\0SetWEAPONID\0\0"
    "WEAPONID\0on_PB_Stock_clicked\0"
    "on_PB_Silencer_clicked\0on_PB_Magazine_clicked\0"
    "on_PB_PistolGrip_clicked\0on_PB_Optics_clicked\0"
    "on_PB_Foregrip_clicked\0"
    "on_PB_Attachment_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlg_arsenal_select_att[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dlg_arsenal_select_att::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dlg_arsenal_select_att *>(_o);
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
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlg_arsenal_select_att::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_dlg_arsenal_select_att.data,
    qt_meta_data_dlg_arsenal_select_att,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dlg_arsenal_select_att::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlg_arsenal_select_att::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlg_arsenal_select_att.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlg_arsenal_select_att::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
