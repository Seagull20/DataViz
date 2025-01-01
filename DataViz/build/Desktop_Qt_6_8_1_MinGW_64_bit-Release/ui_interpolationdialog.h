/********************************************************************************
** Form generated from reading UI file 'interpolationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERPOLATIONDIALOG_H
#define UI_INTERPOLATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interpolationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *Y_comboBox;
    QComboBox *X_comboBox;
    QComboBox *Interpolation_comboBox;

    void setupUi(QDialog *interpolationDialog)
    {
        if (interpolationDialog->objectName().isEmpty())
            interpolationDialog->setObjectName("interpolationDialog");
        interpolationDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(interpolationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        widget = new QWidget(interpolationDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 100, 291, 67));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_3);

        Y_comboBox = new QComboBox(widget);
        Y_comboBox->setObjectName("Y_comboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, Y_comboBox);

        X_comboBox = new QComboBox(widget);
        X_comboBox->setObjectName("X_comboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, X_comboBox);

        Interpolation_comboBox = new QComboBox(widget);
        Interpolation_comboBox->setObjectName("Interpolation_comboBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, Interpolation_comboBox);


        retranslateUi(interpolationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, interpolationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, interpolationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(interpolationDialog);
    } // setupUi

    void retranslateUi(QDialog *interpolationDialog)
    {
        interpolationDialog->setWindowTitle(QCoreApplication::translate("interpolationDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("interpolationDialog", "Select Interpolated Dataset :", nullptr));
        label_3->setText(QCoreApplication::translate("interpolationDialog", "Select Reference Dataset:", nullptr));
        label_2->setText(QCoreApplication::translate("interpolationDialog", "Interpolation Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interpolationDialog: public Ui_interpolationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERPOLATIONDIALOG_H
