/********************************************************************************
** Form generated from reading UI file 'plotdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTDATADIALOG_H
#define UI_PLOTDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlotDataDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QComboBox *dataSelectionBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlotDataDialog)
    {
        if (PlotDataDialog->objectName().isEmpty())
            PlotDataDialog->setObjectName("PlotDataDialog");
        PlotDataDialog->resize(270, 120);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlotDataDialog->sizePolicy().hasHeightForWidth());
        PlotDataDialog->setSizePolicy(sizePolicy);
        PlotDataDialog->setMinimumSize(QSize(270, 120));
        PlotDataDialog->setMaximumSize(QSize(270, 120));
        verticalLayout_3 = new QVBoxLayout(PlotDataDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit = new QLineEdit(PlotDataDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;"));
        lineEdit->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(PlotDataDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        dataSelectionBox = new QComboBox(PlotDataDialog);
        dataSelectionBox->setObjectName("dataSelectionBox");

        verticalLayout_2->addWidget(dataSelectionBox);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PlotDataDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(PlotDataDialog);

        QMetaObject::connectSlotsByName(PlotDataDialog);
    } // setupUi

    void retranslateUi(QDialog *PlotDataDialog)
    {
        PlotDataDialog->setWindowTitle(QCoreApplication::translate("PlotDataDialog", "Dialog", nullptr));
        lineEdit->setText(QCoreApplication::translate("PlotDataDialog", "Select a dataset to add to the graph.", nullptr));
        label->setText(QCoreApplication::translate("PlotDataDialog", "Dataset:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotDataDialog: public Ui_PlotDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTDATADIALOG_H
