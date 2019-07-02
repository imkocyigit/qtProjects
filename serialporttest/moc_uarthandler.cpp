/****************************************************************************
** Meta object code from reading C++ file 'uarthandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "uarthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uarthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UartHandler_t {
    QByteArrayData data[18];
    char stringdata[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UartHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UartHandler_t qt_meta_stringdata_UartHandler = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UartHandler"
QT_MOC_LITERAL(1, 12, 10), // "portClosed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "portOpened"
QT_MOC_LITERAL(4, 35, 9), // "dataReady"
QT_MOC_LITERAL(5, 45, 7), // "newData"
QT_MOC_LITERAL(6, 53, 19), // "autoClosePortFailed"
QT_MOC_LITERAL(7, 73, 18), // "autoOpenPortFailed"
QT_MOC_LITERAL(8, 92, 24), // "autoPortResetSuccessfull"
QT_MOC_LITERAL(9, 117, 8), // "sendData"
QT_MOC_LITERAL(10, 126, 8), // "openPort"
QT_MOC_LITERAL(11, 135, 9), // "closePort"
QT_MOC_LITERAL(12, 145, 12), // "dataReceived"
QT_MOC_LITERAL(13, 158, 13), // "errorReceived"
QT_MOC_LITERAL(14, 172, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(15, 201, 9), // "errorCode"
QT_MOC_LITERAL(16, 211, 16), // "autoResetTimeout"
QT_MOC_LITERAL(17, 228, 16) // "portDisconnected"

    },
    "UartHandler\0portClosed\0\0portOpened\0"
    "dataReady\0newData\0autoClosePortFailed\0"
    "autoOpenPortFailed\0autoPortResetSuccessfull\0"
    "sendData\0openPort\0closePort\0dataReceived\0"
    "errorReceived\0QSerialPort::SerialPortError\0"
    "errorCode\0autoResetTimeout\0portDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UartHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    1,   81,    2, 0x06 /* Public */,
       6,    0,   84,    2, 0x06 /* Public */,
       7,    0,   85,    2, 0x06 /* Public */,
       8,    0,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   87,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    0,   91,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QByteArray,    5,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UartHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UartHandler *_t = static_cast<UartHandler *>(_o);
        switch (_id) {
        case 0: _t->portClosed(); break;
        case 1: _t->portOpened(); break;
        case 2: _t->dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->autoClosePortFailed(); break;
        case 4: _t->autoOpenPortFailed(); break;
        case 5: _t->autoPortResetSuccessfull(); break;
        case 6: { bool _r = _t->sendData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->openPort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->closePort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->dataReceived(); break;
        case 10: _t->errorReceived((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 11: _t->autoResetTimeout(); break;
        case 12: _t->portDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UartHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UartHandler::portClosed)) {
                *result = 0;
            }
        }
        {
            typedef void (UartHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UartHandler::portOpened)) {
                *result = 1;
            }
        }
        {
            typedef void (UartHandler::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UartHandler::dataReady)) {
                *result = 2;
            }
        }
        {
            typedef void (UartHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UartHandler::autoClosePortFailed)) {
                *result = 3;
            }
        }
        {
            typedef void (UartHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UartHandler::autoOpenPortFailed)) {
                *result = 4;
            }
        }
        {
            typedef void (UartHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UartHandler::autoPortResetSuccessfull)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject UartHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UartHandler.data,
      qt_meta_data_UartHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UartHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UartHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UartHandler.stringdata))
        return static_cast<void*>(const_cast< UartHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int UartHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UartHandler::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UartHandler::portOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void UartHandler::dataReady(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UartHandler::autoClosePortFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void UartHandler::autoOpenPortFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void UartHandler::autoPortResetSuccessfull()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
