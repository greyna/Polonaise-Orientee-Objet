/****************************************************************************
** Meta object code from reading C++ file 'onglet.h'
**
** Created: Thu Jun 21 22:16:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../onglet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onglet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Onglet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      25,    7,    7,    7, 0x0a,
      43,    7,    7,    7, 0x0a,
      63,    7,    7,    7, 0x0a,
      83,    7,    7,    7, 0x0a,
      95,    7,    7,    7, 0x0a,
     110,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Onglet[] = {
    "Onglet\0\0traitementMode()\0traitementAngle()\0"
    "traitementBoutons()\0traitementClavier()\0"
    "newOnglet()\0deleteOnglet()\0dupOnglet()\0"
};

void Onglet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Onglet *_t = static_cast<Onglet *>(_o);
        switch (_id) {
        case 0: _t->traitementMode(); break;
        case 1: _t->traitementAngle(); break;
        case 2: _t->traitementBoutons(); break;
        case 3: _t->traitementClavier(); break;
        case 4: _t->newOnglet(); break;
        case 5: _t->deleteOnglet(); break;
        case 6: _t->dupOnglet(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Onglet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Onglet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Onglet,
      qt_meta_data_Onglet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Onglet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Onglet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Onglet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Onglet))
        return static_cast<void*>(const_cast< Onglet*>(this));
    return QWidget::qt_metacast(_clname);
}

int Onglet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
