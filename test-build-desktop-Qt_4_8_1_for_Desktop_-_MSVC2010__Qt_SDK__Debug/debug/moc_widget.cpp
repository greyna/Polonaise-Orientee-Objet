/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Mon Jun 11 00:27:47 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test/widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      23,    9,    9,    9, 0x0a,
      37,    9,    9,    9, 0x0a,
      51,    9,    9,    9, 0x0a,
      65,    9,    9,    9, 0x0a,
      79,    9,    9,    9, 0x0a,
      93,    9,    9,    9, 0x0a,
     107,    9,    9,    9, 0x0a,
     121,    9,    9,    9, 0x0a,
     135,    9,    9,    9, 0x0a,
     149,    9,    9,    9, 0x0a,
     163,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyWidget[] = {
    "MyWidget\0\0dupPressed()\0num0Pressed()\0"
    "num1Pressed()\0num2Pressed()\0num3Pressed()\0"
    "num4Pressed()\0num5Pressed()\0num6Pressed()\0"
    "num7Pressed()\0num8Pressed()\0num9Pressed()\0"
    "enterPressed()\0"
};

void MyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyWidget *_t = static_cast<MyWidget *>(_o);
        switch (_id) {
        case 0: _t->dupPressed(); break;
        case 1: _t->num0Pressed(); break;
        case 2: _t->num1Pressed(); break;
        case 3: _t->num2Pressed(); break;
        case 4: _t->num3Pressed(); break;
        case 5: _t->num4Pressed(); break;
        case 6: _t->num5Pressed(); break;
        case 7: _t->num6Pressed(); break;
        case 8: _t->num7Pressed(); break;
        case 9: _t->num8Pressed(); break;
        case 10: _t->num9Pressed(); break;
        case 11: _t->enterPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyWidget,
      qt_meta_data_MyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyWidget))
        return static_cast<void*>(const_cast< MyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
