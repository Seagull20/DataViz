/****************************************************************************
** Meta object code from reading C++ file 'graphwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
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
#error "This file was generated using the moc from 6.8.1. It"
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
struct qt_meta_tag_ZN11GraphWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11GraphWindowE = QtMocHelpers::stringData(
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
    "ExportPlot",
    "receiveAllDataSets",
    "QList<DataSet*>",
    "receivedDataSets",
    "receiveChosenDataSet",
    "DataSet*",
    "chosenDataSet",
    "setAxisLabels",
    "xLabel",
    "yLabel",
    "setRanges",
    "xLeftRange",
    "xRightRange",
    "yLeftRange",
    "yRightRange"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11GraphWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   69,    2, 0x08,    2 /* Private */,
       8,    0,   74,    2, 0x08,    5 /* Private */,
       9,    0,   75,    2, 0x08,    6 /* Private */,
      10,    0,   76,    2, 0x08,    7 /* Private */,
      11,    1,   77,    2, 0x08,    8 /* Private */,
      14,    1,   80,    2, 0x08,   10 /* Private */,
      17,    2,   83,    2, 0x08,   12 /* Private */,
      20,    4,   88,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   21,   22,   23,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject GraphWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN11GraphWindowE.offsetsAndSizes,
    qt_meta_data_ZN11GraphWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11GraphWindowE_t,
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
        // method 'ExportPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveAllDataSets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<DataSet*>, std::false_type>,
        // method 'receiveChosenDataSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>,
        // method 'setAxisLabels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setRanges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void GraphWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestAllDataSets_SIGNAL(); break;
        case 1: _t->ChangeGraphStyle((*reinterpret_cast< std::add_pointer_t<QCPGraph*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPen*>>(_a[2]))); break;
        case 2: _t->OpenGraphStyleDialog(); break;
        case 3: _t->OpenPlotDataDialog(); break;
        case 4: _t->ExportPlot(); break;
        case 5: _t->receiveAllDataSets((*reinterpret_cast< std::add_pointer_t<QList<DataSet*>>>(_a[1]))); break;
        case 6: _t->receiveChosenDataSet((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1]))); break;
        case 7: _t->setAxisLabels((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->setRanges((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
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
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (GraphWindow::*)();
            if (_q_method_type _q_method = &GraphWindow::requestAllDataSets_SIGNAL; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
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
    if (!strcmp(_clname, qt_meta_stringdata_ZN11GraphWindowE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GraphWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GraphWindow::requestAllDataSets_SIGNAL()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
