/****************************************************************************
** Meta object code from reading C++ file 'spaceinvaders.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Space-Invaders-Remixed/spaceinvaders.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spaceinvaders.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpaceInvaders_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpaceInvaders_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpaceInvaders_t qt_meta_stringdata_SpaceInvaders = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SpaceInvaders"
QT_MOC_LITERAL(1, 14, 12), // "scoreChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "levelChanged"
QT_MOC_LITERAL(4, 41, 12), // "livesChanged"
QT_MOC_LITERAL(5, 54, 9), // "startGame"
QT_MOC_LITERAL(6, 64, 9), // "pauseGame"
QT_MOC_LITERAL(7, 74, 8) // "stopGame"

    },
    "SpaceInvaders\0scoreChanged\0\0levelChanged\0"
    "livesChanged\0startGame\0pauseGame\0"
    "stopGame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpaceInvaders[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SpaceInvaders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpaceInvaders *_t = static_cast<SpaceInvaders *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scoreChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->levelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->livesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->startGame(); break;
        case 4: _t->pauseGame(); break;
        case 5: _t->stopGame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpaceInvaders::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpaceInvaders::scoreChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SpaceInvaders::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpaceInvaders::levelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SpaceInvaders::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpaceInvaders::livesChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SpaceInvaders::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpaceInvaders.data,
      qt_meta_data_SpaceInvaders,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpaceInvaders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpaceInvaders::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpaceInvaders.stringdata0))
        return static_cast<void*>(const_cast< SpaceInvaders*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpaceInvaders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SpaceInvaders::scoreChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpaceInvaders::levelChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpaceInvaders::livesChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
