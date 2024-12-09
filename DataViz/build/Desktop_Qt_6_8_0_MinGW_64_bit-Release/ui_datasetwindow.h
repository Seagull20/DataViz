/********************************************************************************
** Form generated from reading UI file 'datasetwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASETWINDOW_H
#define UI_DATASETWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DataSetWindow
{
public:
    QGridLayout *gridLayout;
    QTableWidget *Table;

    void setupUi(QDialog *DataSetWindow)
    {
        if (DataSetWindow->objectName().isEmpty())
            DataSetWindow->setObjectName("DataSetWindow");
        DataSetWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/dataset.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DataSetWindow->setWindowIcon(icon);
        gridLayout = new QGridLayout(DataSetWindow);
        gridLayout->setObjectName("gridLayout");
        Table = new QTableWidget(DataSetWindow);
        Table->setObjectName("Table");

        gridLayout->addWidget(Table, 0, 0, 1, 1);


        retranslateUi(DataSetWindow);

        QMetaObject::connectSlotsByName(DataSetWindow);
    } // setupUi

    void retranslateUi(QDialog *DataSetWindow)
    {
        DataSetWindow->setWindowTitle(QCoreApplication::translate("DataSetWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataSetWindow: public Ui_DataSetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASETWINDOW_H
