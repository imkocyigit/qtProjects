/****************************************************************************
** Meta object code from reading C++ file 'dbusslave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbusslave.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusslave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dbusslave_t {
    QByteArrayData data[6];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dbusslave_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dbusslave_t qt_meta_stringdata_dbusslave = {
    {
QT_MOC_LITERAL(0, 0, 9), // "dbusslave"
QT_MOC_LITERAL(1, 10, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 26, 34), // "org.deneme.dbusInterface.inte..."
QT_MOC_LITERAL(3, 61, 14), // "heardSomething"
QT_MOC_LITERAL(4, 76, 0), // ""
QT_MOC_LITERAL(5, 77, 3) // "msg"

    },
    "dbusslave\0D-Bus Interface\0"
    "org.deneme.dbusInterface.interface\0"
    "heardSomething\0\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dbusslave[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    1,   21,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void dbusslave::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dbusslave *_t = static_cast<dbusslave *>(_o);
        switch (_id) {
        case 0: _t->heardSomething((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dbusslave::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_dbusslave.data,
      qt_meta_data_dbusslave,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dbusslave::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dbusslave::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dbusslave.stringdata))
        return static_cast<void*>(const_cast< dbusslave*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int dbusslave::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
