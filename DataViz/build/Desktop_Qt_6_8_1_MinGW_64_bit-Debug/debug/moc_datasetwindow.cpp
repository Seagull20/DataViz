/****************************************************************************
** Meta object code from reading C++ file 'datasetwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../datasetwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datasetwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13DataSetWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13DataSetWindowE = QtMocHelpers::stringData(
    "DataSetWindow",
    "Plot_XYPlot_SIGNAL",
    "",
    "std::shared_ptr<DataSet>",
    "ptr",
    "Open_HistPlotDialog_SIGNAL",
    "DisplayedDataSet",
    "deleteDataSet_SIGNAL",
    "refreshPlottingActions_SIGNAL",
    "SendXYDataSetToPlot",
    "Open_HistPlotDialog",
    "displayChangeDataSetNameDialog",
    "receiveNewDataSetName",
    "QString*",
    "receiveNewDataSetDescription"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13DataSetWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       5,    1,   71,    2, 0x06,    3 /* Public */,
       7,    1,   74,    2, 0x06,    5 /* Public */,
       8,    0,   77,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   78,    2, 0x0a,    8 /* Public */,
      10,    0,   79,    2, 0x0a,    9 /* Public */,
      11,    0,   80,    2, 0x0a,   10 /* Public */,
      12,    1,   81,    2, 0x0a,   11 /* Public */,
      14,    1,   84,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataSetWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN13DataSetWindowE.offsetsAndSizes,
    qt_meta_data_ZN13DataSetWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13DataSetWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataSetWindow, std::true_type>,
        // method 'Plot_XYPlot_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<DataSet>, std::false_type>,
        // method 'Open_HistPlotDialog_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<DataSet>, std::false_type>,
        // method 'deleteDataSet_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<DataSet>, std::false_type>,
        // method 'refreshPlottingActions_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SendXYDataSetToPlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Open_HistPlotDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayChangeDataSetNameDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveNewDataSetName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString *, std::false_type>,
        // method 'receiveNewDataSetDescription'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString *, std::false_type>
    >,
    nullptr
} };

void DataSetWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DataSetWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Plot_XYPlot_SIGNAL((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<DataSet>>>(_a[1]))); break;
        case 1: _t->Open_HistPlotDialog_SIGNAL((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<DataSet>>>(_a[1]))); break;
        case 2: _t->deleteDataSet_SIGNAL((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<DataSet>>>(_a[1]))); break;
        case 3: _t->refreshPlottingActions_SIGNAL(); break;
        case 4: _t->SendXYDataSetToPlot(); break;
        case 5: _t->Open_HistPlotDialog(); break;
        case 6: _t->displayChangeDataSetNameDialog(); break;
        case 7: _t->receiveNewDataSetName((*reinterpret_cast< std::add_pointer_t<QString*>>(_a[1]))); break;
        case 8: _t->receiveNewDataSetDescription((*reinterpret_cast< std::add_pointer_t<QString*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (DataSetWindow::*)(std::shared_ptr<DataSet> );
            if (_q_method_type _q_method = &DataSetWindow::Plot_XYPlot_SIGNAL; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (DataSetWindow::*)(std::shared_ptr<DataSet> );
            if (_q_method_type _q_method = &DataSetWindow::Open_HistPlotDialog_SIGNAL; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (DataSetWindow::*)(std::shared_ptr<DataSet> );
            if (_q_method_type _q_method = &DataSetWindow::deleteDataSet_SIGNAL; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (DataSetWindow::*)();
            if (_q_method_type _q_method = &DataSetWindow::refreshPlottingActions_SIGNAL; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *DataSetWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataSetWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13DataSetWindowE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DataSetWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DataSetWindow::Plot_XYPlot_SIGNAL(std::shared_ptr<DataSet> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataSetWindow::Open_HistPlotDialog_SIGNAL(std::shared_ptr<DataSet> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataSetWindow::deleteDataSet_SIGNAL(std::shared_ptr<DataSet> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataSetWindow::refreshPlottingActions_SIGNAL()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
