/********************************************************************************
** Form generated from reading UI file 'figureexportdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIGUREEXPORTDIALOG_H
#define UI_FIGUREEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_figureExportDialog
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLabel *curretnDataset_label;
    QLineEdit *length_lineEdit;
    QLineEdit *Width_lineEdit_2;
    QComboBox *format_comboBox_2;

    void setupUi(QDialog *figureExportDialog)
    {
        if (figureExportDialog->objectName().isEmpty())
            figureExportDialog->setObjectName("figureExportDialog");
        figureExportDialog->resize(392, 297);
        layoutWidget = new QWidget(figureExportDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 50, 221, 121));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(1, QFormLayout::FieldRole, buttonBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        curretnDataset_label = new QLabel(layoutWidget);
        curretnDataset_label->setObjectName("curretnDataset_label");

        verticalLayout->addWidget(curretnDataset_label);

        length_lineEdit = new QLineEdit(layoutWidget);
        length_lineEdit->setObjectName("length_lineEdit");

        verticalLayout->addWidget(length_lineEdit);

        Width_lineEdit_2 = new QLineEdit(layoutWidget);
        Width_lineEdit_2->setObjectName("Width_lineEdit_2");

        verticalLayout->addWidget(Width_lineEdit_2);

        format_comboBox_2 = new QComboBox(layoutWidget);
        format_comboBox_2->setObjectName("format_comboBox_2");

        verticalLayout->addWidget(format_comboBox_2);


        horizontalLayout->addLayout(verticalLayout);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);


        retranslateUi(figureExportDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, figureExportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, figureExportDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(figureExportDialog);
    } // setupUi

    void retranslateUi(QDialog *figureExportDialog)
    {
        figureExportDialog->setWindowTitle(QCoreApplication::translate("figureExportDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("figureExportDialog", "Graph", nullptr));
        label_2->setText(QCoreApplication::translate("figureExportDialog", "Length", nullptr));
        label_3->setText(QCoreApplication::translate("figureExportDialog", "Width", nullptr));
        label_5->setText(QCoreApplication::translate("figureExportDialog", "Format", nullptr));
        curretnDataset_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class figureExportDialog: public Ui_figureExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIGUREEXPORTDIALOG_H
