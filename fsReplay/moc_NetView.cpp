/****************************************************************************
** Meta object code from reading C++ file 'NetView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NetView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetView[] = {

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
       9,    8,    8,    8, 0x0a,
      24,    8,    8,    8, 0x0a,
      39,    8,    8,    8, 0x0a,
      46,    8,    8,    8, 0x0a,
      54,    8,    8,    8, 0x0a,
      63,    8,    8,    8, 0x0a,
      86,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetView[] = {
    "NetView\0\0TimeToUpdate()\0TimeToRecord()\0"
    "Play()\0Pause()\0Record()\0BackupSliderMoved(int)\0"
    "RateSliderMoved(int)\0"
};

void NetView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetView *_t = static_cast<NetView *>(_o);
        switch (_id) {
        case 0: _t->TimeToUpdate(); break;
        case 1: _t->TimeToRecord(); break;
        case 2: _t->Play(); break;
        case 3: _t->Pause(); break;
        case 4: _t->Record(); break;
        case 5: _t->BackupSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->RateSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NetView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetView,
      qt_meta_data_NetView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetView))
        return static_cast<void*>(const_cast< NetView*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
