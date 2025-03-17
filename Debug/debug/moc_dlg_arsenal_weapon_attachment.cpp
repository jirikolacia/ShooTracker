/****************************************************************************
** Meta object code from reading C++ file 'dlg_arsenal_weapon_attachment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlg_arsenal_weapon_attachment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_arsenal_weapon_attachment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlg_arsenal_weapon_attachment_t {
    QByteArrayData data[13];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlg_arsenal_weapon_attachment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlg_arsenal_weapon_attachment_t qt_meta_stringdata_dlg_arsenal_weapon_attachment = {
    {
QT_MOC_LITERAL(0, 0, 29), // "dlg_arsenal_weapon_attachment"
QT_MOC_LITERAL(1, 30, 5), // "CLOSE"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "setWeapon"
QT_MOC_LITERAL(4, 47, 8), // "WEAPONID"
QT_MOC_LITERAL(5, 56, 17), // "setAttachmentType"
QT_MOC_LITERAL(6, 74, 14), // "ATTACHMENTTYPE"
QT_MOC_LITERAL(7, 89, 8), // "checkAll"
QT_MOC_LITERAL(8, 98, 29), // "on_PB_Attachment_back_clicked"
QT_MOC_LITERAL(9, 128, 18), // "on_PB_Save_clicked"
QT_MOC_LITERAL(10, 147, 29), // "on_LW_Attachments_itemClicked"
QT_MOC_LITERAL(11, 177, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 194, 10) // "Attachment"

    },
    "dlg_arsenal_weapon_attachment\0CLOSE\0"
    "\0setWeapon\0WEAPONID\0setAttachmentType\0"
    "ATTACHMENTTYPE\0checkAll\0"
    "on_PB_Attachment_back_clicked\0"
    "on_PB_Save_clicked\0on_LW_Attachments_itemClicked\0"
    "QListWidgetItem*\0Attachment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlg_arsenal_weapon_attachment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void dlg_arsenal_weapon_attachment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dlg_arsenal_weapon_attachment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CLOSE(); break;
        case 1: _t->setWeapon((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setAttachmentType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->checkAll(); break;
        case 4: _t->on_PB_Attachment_back_clicked(); break;
        case 5: _t->on_PB_Save_clicked(); break;
        case 6: _t->on_LW_Attachments_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dlg_arsenal_weapon_attachment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dlg_arsenal_weapon_attachment::CLOSE)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlg_arsenal_weapon_attachment::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_dlg_arsenal_weapon_attachment.data,
    qt_meta_data_dlg_arsenal_weapon_attachment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dlg_arsenal_weapon_attachment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlg_arsenal_weapon_attachment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlg_arsenal_weapon_attachment.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlg_arsenal_weapon_attachment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void dlg_arsenal_weapon_attachment::CLOSE()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
