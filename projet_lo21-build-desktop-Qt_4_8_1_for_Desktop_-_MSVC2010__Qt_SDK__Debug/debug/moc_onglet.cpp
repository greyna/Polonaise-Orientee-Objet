/****************************************************************************
** Meta object code from reading C++ file 'onglet.h'
**
** Created: Sat Jun 9 21:43:10 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projet_lo21/onglet.h"
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
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      22,    7,    7,    7, 0x08,
      36,    7,    7,    7, 0x08,
      50,    7,    7,    7, 0x08,
      64,    7,    7,    7, 0x08,
      78,    7,    7,    7, 0x08,
      92,    7,    7,    7, 0x08,
     106,    7,    7,    7, 0x08,
     120,    7,    7,    7, 0x08,
     134,    7,    7,    7, 0x08,
     148,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Onglet[] = {
    "Onglet\0\0num0Pressed()\0num1Pressed()\0"
    "num2Pressed()\0num3Pressed()\0num4Pressed()\0"
    "num5Pressed()\0num6Pressed()\0num7Pressed()\0"
    "num8Pressed()\0num9Pressed()\0enterPressed()\0"
};

void Onglet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Onglet *_t = static_cast<Onglet *>(_o);
        switch (_id) {
        case 0: _t->num0Pressed(); break;
        case 1: _t->num1Pressed(); break;
        case 2: _t->num2Pressed(); break;
        case 3: _t->num3Pressed(); break;
        case 4: _t->num4Pressed(); break;
        case 5: _t->num5Pressed(); break;
        case 6: _t->num6Pressed(); break;
        case 7: _t->num7Pressed(); break;
        case 8: _t->num8Pressed(); break;
        case 9: _t->num9Pressed(); break;
        case 10: _t->enterPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Onglet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Onglet::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Onglet,
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
    return QMainWindow::qt_metacast(_clname);
}

int Onglet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
