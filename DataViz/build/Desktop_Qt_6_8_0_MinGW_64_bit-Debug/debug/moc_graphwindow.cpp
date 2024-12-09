/****************************************************************************
** Meta object code from reading C++ file 'graphwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGraphWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGraphWindowENDCLASS = QtMocHelpers::stringData(
    "GraphWindow",
    "requestAllDataSets_SIGNAL",
    "",
    "ChangeGraphStyle",
    "QCPGraph*",
    "graph",
    "QPen*",
    "pen",
    "OpenGraphStyleDialog",
    "OpenPlotDataDialog",
    "receiveAllDataSets",
    "QList<DataSet*>",
    "receivedDataSets",
    "receiveChosenDataSet",
    "DataSet*",
    "chosenDataSet"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGraphWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   51,    2, 0x08,    2 /* Private */,
       8,    0,   56,    2, 0x08,    5 /* Private */,
       9,    0,   57,    2, 0x08,    6 /* Private */,
      10,    1,   58,    2, 0x08,    7 /* Private */,
      13,    1,   61,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject GraphWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSGraphWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGraphWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGraphWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GraphWindow, std::true_type>,
        // method 'requestAllDataSets_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ChangeGraphStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPGraph *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPen *, std::false_type>,
        // method 'OpenGraphStyleDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenPlotDataDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveAllDataSets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<DataSet*>, std::false_type>,
        // method 'receiveChosenDataSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>
    >,
    nullptr
} };

void GraphWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestAllDataSets_SIGNAL(); break;
        case 1: _t->ChangeGraphStyle((*reinterpret_cast< std::add_pointer_t<QCPGraph*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPen*>>(_a[2]))); break;
        case 2: _t->OpenGraphStyleDialog(); break;
        case 3: _t->OpenPlotDataDialog(); break;
        case 4: _t->receiveAllDataSets((*reinterpret_cast< std::add_pointer_t<QList<DataSet*>>>(_a[1]))); break;
        case 5: _t->receiveChosenDataSet((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPGraph* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphWindow::*)();
            if (_t _q_method = &GraphWindow::requestAllDataSets_SIGNAL; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *GraphWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGraphWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GraphWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GraphWindow::requestAllDataSets_SIGNAL()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
