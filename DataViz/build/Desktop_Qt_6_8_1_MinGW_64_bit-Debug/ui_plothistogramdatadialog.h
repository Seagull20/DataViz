/********************************************************************************
** Form generated from reading UI file 'plothistogramdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTHISTOGRAMDATADIALOG_H
#define UI_PLOTHISTOGRAMDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlotHistogramDataDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *dataSelectionBox;
    QLineEdit *numBinsInput;
    QLineEdit *plotNameInput;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlotHistogramDataDialog)
    {
        if (PlotHistogramDataDialog->objectName().isEmpty())
            PlotHistogramDataDialog->setObjectName("PlotHistogramDataDialog");
        PlotHistogramDataDialog->resize(314, 210);
        PlotHistogramDataDialog->setMinimumSize(QSize(314, 210));
        PlotHistogramDataDialog->setMaximumSize(QSize(314, 210));
        verticalLayout_3 = new QVBoxLayout(PlotHistogramDataDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(PlotHistogramDataDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(PlotHistogramDataDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(PlotHistogramDataDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        dataSelectionBox = new QComboBox(PlotHistogramDataDialog);
        dataSelectionBox->setObjectName("dataSelectionBox");

        verticalLayout_2->addWidget(dataSelectionBox);

        numBinsInput = new QLineEdit(PlotHistogramDataDialog);
        numBinsInput->setObjectName("numBinsInput");

        verticalLayout_2->addWidget(numBinsInput);

        plotNameInput = new QLineEdit(PlotHistogramDataDialog);
        plotNameInput->setObjectName("plotNameInput");

        verticalLayout_2->addWidget(plotNameInput);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        textEdit = new QTextEdit(PlotHistogramDataDialog);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;"));
        textEdit->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(PlotHistogramDataDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(PlotHistogramDataDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PlotHistogramDataDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PlotHistogramDataDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PlotHistogramDataDialog);
    } // setupUi

    void retranslateUi(QDialog *PlotHistogramDataDialog)
    {
        PlotHistogramDataDialog->setWindowTitle(QCoreApplication::translate("PlotHistogramDataDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PlotHistogramDataDialog", "Dataset to plot:", nullptr));
        label_2->setText(QCoreApplication::translate("PlotHistogramDataDialog", "Number of bins:", nullptr));
        label_3->setText(QCoreApplication::translate("PlotHistogramDataDialog", "Plot name:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("PlotHistogramDataDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">WARNING: Histogram data should be appropriate for a histogram. Supplying data intended for another graph type will return inacccurate results.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotHistogramDataDialog: public Ui_PlotHistogramDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTHISTOGRAMDATADIALOG_H
