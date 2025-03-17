/****************************************************************************
** Meta object code from reading C++ file 'dlg_attachment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlg_attachment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_attachment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dlg_attachment_t {
    QByteArrayData data[15];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dlg_attachment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dlg_attachment_t qt_meta_stringdata_dlg_attachment = {
    {
QT_MOC_LITERAL(0, 0, 14), // "dlg_attachment"
QT_MOC_LITERAL(1, 15, 7), // "REFRESH"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "setTitle"
QT_MOC_LITERAL(4, 33, 5), // "Title"
QT_MOC_LITERAL(5, 39, 9), // "setAction"
QT_MOC_LITERAL(6, 49, 6), // "Action"
QT_MOC_LITERAL(7, 56, 15), // "setAttachmentID"
QT_MOC_LITERAL(8, 72, 12), // "AttachmentID"
QT_MOC_LITERAL(9, 85, 8), // "checkAll"
QT_MOC_LITERAL(10, 94, 5), // "clear"
QT_MOC_LITERAL(11, 100, 4), // "Init"
QT_MOC_LITERAL(12, 105, 29), // "on_PB_Attachment_Back_clicked"
QT_MOC_LITERAL(13, 135, 17), // "on_PB_Yes_clicked"
QT_MOC_LITERAL(14, 153, 20) // "on_PB_Delete_clicked"

    },
    "dlg_attachment\0REFRESH\0\0setTitle\0Title\0"
    "setAction\0Action\0setAttachmentID\0"
    "AttachmentID\0checkAll\0clear\0Init\0"
    "on_PB_Attachment_Back_clicked\0"
    "on_PB_Yes_clicked\0on_PB_Delete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlg_attachment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x0a /* Public */,
       5,    1,   68,    2, 0x0a /* Public */,
       7,    1,   71,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dlg_attachment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dlg_attachment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->REFRESH(); break;
        case 1: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setAttachmentID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->checkAll(); break;
        case 5: _t->clear(); break;
        case 6: _t->Init(); break;
        case 7: _t->on_PB_Attachment_Back_clicked(); break;
        case 8: _t->on_PB_Yes_clicked(); break;
        case 9: _t->on_PB_Delete_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dlg_attachment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dlg_attachment::REFRESH)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dlg_attachment::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_dlg_attachment.data,
    qt_meta_data_dlg_attachment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dlg_attachment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlg_attachment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dlg_attachment.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlg_attachment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void dlg_attachment::REFRESH()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
