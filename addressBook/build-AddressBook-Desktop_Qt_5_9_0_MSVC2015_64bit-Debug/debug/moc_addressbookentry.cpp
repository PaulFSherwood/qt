/****************************************************************************
** Meta object code from reading C++ file 'addressbookentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AddressBook/addressbookentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddressBookEntry_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressBookEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressBookEntry_t qt_meta_stringdata_AddressBookEntry = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddressBookEntry"
QT_MOC_LITERAL(1, 17, 11), // "nameChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "addressChanged"
QT_MOC_LITERAL(4, 45, 15), // "birthdayChanged"
QT_MOC_LITERAL(5, 61, 19), // "phoneNumbersChanged"
QT_MOC_LITERAL(6, 81, 4), // "name"
QT_MOC_LITERAL(7, 86, 7), // "address"
QT_MOC_LITERAL(8, 94, 8), // "birthday"
QT_MOC_LITERAL(9, 103, 12) // "phoneNumbers"

    },
    "AddressBookEntry\0nameChanged\0\0"
    "addressChanged\0birthdayChanged\0"
    "phoneNumbersChanged\0name\0address\0"
    "birthday\0phoneNumbers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressBookEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QDate, 0x00495103,
       9, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void AddressBookEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookEntry *_t = static_cast<AddressBookEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->addressChanged(); break;
        case 2: _t->birthdayChanged(); break;
        case 3: _t->phoneNumbersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddressBookEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookEntry::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddressBookEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookEntry::addressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddressBookEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookEntry::birthdayChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AddressBookEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookEntry::phoneNumbersChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AddressBookEntry *_t = static_cast<AddressBookEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 2: *reinterpret_cast< QDate*>(_v) = _t->birthday(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->phoneNumbers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AddressBookEntry *_t = static_cast<AddressBookEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBirthday(*reinterpret_cast< QDate*>(_v)); break;
        case 3: _t->setPhoneNumbers(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject AddressBookEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AddressBookEntry.data,
      qt_meta_data_AddressBookEntry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddressBookEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressBookEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddressBookEntry.stringdata0))
        return static_cast<void*>(const_cast< AddressBookEntry*>(this));
    return QObject::qt_metacast(_clname);
}

int AddressBookEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AddressBookEntry::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddressBookEntry::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AddressBookEntry::birthdayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AddressBookEntry::phoneNumbersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
