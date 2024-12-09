/****************************************************************************
** Meta object code from reading C++ file 'parentwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../parentwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parentwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSParentWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSParentWindowENDCLASS = QtMocHelpers::stringData(
    "ParentWindow",
    "PlotXYData_SIGNAL",
    "",
    "DataSet*",
    "ptr",
    "sendAllDataSets_SIGNAL",
    "QList<DataSet*>",
    "list",
    "on_actionLoad_Dataset_triggered",
    "GraphWindowToBePlotted",
    "on_actionAbout_triggered",
    "on_actionHelp_triggered",
    "on_actionHist_Plot_triggered",
    "PlotXYData",
    "receiveAllDataSetsRequest",
    "deleteDataSet",
    "refreshPlottingActions",
    "receiveHistogramData",
    "dataSet",
    "numBins",
    "histPlotName",
    "OpenHistPlotDialog",
    "selectedDataSet",
    "on_actionFunction_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSParentWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,
       5,    1,  101,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  104,    2, 0x08,    5 /* Private */,
       9,    1,  105,    2, 0x08,    6 /* Private */,
      10,    0,  108,    2, 0x08,    8 /* Private */,
      11,    0,  109,    2, 0x08,    9 /* Private */,
      12,    0,  110,    2, 0x08,   10 /* Private */,
      13,    0,  111,    2, 0x08,   11 /* Private */,
      14,    0,  112,    2, 0x08,   12 /* Private */,
      15,    1,  113,    2, 0x08,   13 /* Private */,
      16,    0,  116,    2, 0x08,   15 /* Private */,
      17,    3,  117,    2, 0x08,   16 /* Private */,
      21,    1,  124,    2, 0x08,   20 /* Private */,
      23,    0,  127,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QString,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 3,   22,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ParentWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSParentWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSParentWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSParentWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParentWindow, std::true_type>,
        // method 'PlotXYData_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>,
        // method 'sendAllDataSets_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<DataSet*>, std::false_type>,
        // method 'on_actionLoad_Dataset_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GraphWindowToBePlotted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHelp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHist_Plot_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlotXYData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveAllDataSetsRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteDataSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>,
        // method 'refreshPlottingActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveHistogramData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'OpenHistPlotDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>,
        // method 'on_actionFunction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ParentWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParentWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlotXYData_SIGNAL((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1]))); break;
        case 1: _t->sendAllDataSets_SIGNAL((*reinterpret_cast< std::add_pointer_t<QList<DataSet*>>>(_a[1]))); break;
        case 2: _t->on_actionLoad_Dataset_triggered(); break;
        case 3: _t->GraphWindowToBePlotted((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1]))); break;
        case 4: _t->on_actionAbout_triggered(); break;
        case 5: _t->on_actionHelp_triggered(); break;
        case 6: _t->on_actionHist_Plot_triggered(); break;
        case 7: _t->PlotXYData(); break;
        case 8: _t->receiveAllDataSetsRequest(); break;
        case 9: _t->deleteDataSet((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1]))); break;
        case 10: _t->refreshPlottingActions(); break;
        case 11: _t->receiveHistogramData((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 12: _t->OpenHistPlotDialog((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1]))); break;
        case 13: _t->on_actionFunction_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParentWindow::*)(DataSet * );
            if (_t _q_method = &ParentWindow::PlotXYData_SIGNAL; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParentWindow::*)(QList<DataSet*> );
            if (_t _q_method = &ParentWindow::sendAllDataSets_SIGNAL; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ParentWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParentWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSParentWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ParentWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ParentWindow::PlotXYData_SIGNAL(DataSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParentWindow::sendAllDataSets_SIGNAL(QList<DataSet*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
