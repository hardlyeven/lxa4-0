/****************************************************************************
** Meta object code from reading C++ file 'verifydialog.h'
**
** Created: Sun Apr 29 16:17:26 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "verifydialog.h"
 

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VerifyDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      24,   13,   13,   13, 0x09,
      33,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VerifyDialog[] = {
    "VerifyDialog\0\0yesSlot()\0noSlot()\0"
    "cancelSlot()\0"
};

const QMetaObject VerifyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VerifyDialog,
      qt_meta_data_VerifyDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VerifyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VerifyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VerifyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VerifyDialog))
        return static_cast<void*>(const_cast< VerifyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int VerifyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: yesSlot(); break;
        case 1: noSlot(); break;
        case 2: cancelSlot(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
