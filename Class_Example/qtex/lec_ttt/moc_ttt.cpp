/****************************************************************************
** Meta object code from reading C++ file 'ttt.h'
**
** Created: Thu Mar 6 11:47:11 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ttt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TTT[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x08,
      22,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TTT[] = {
    "TTT\0\0newGameClicked()\0gameOver()\0"
};

void TTT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TTT *_t = static_cast<TTT *>(_o);
        switch (_id) {
        case 0: _t->newGameClicked(); break;
        case 1: _t->gameOver(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TTT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TTT::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTT,
      qt_meta_data_TTT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TTT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TTT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TTT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TTT))
        return static_cast<void*>(const_cast< TTT*>(this));
    return QWidget::qt_metacast(_clname);
}

int TTT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
