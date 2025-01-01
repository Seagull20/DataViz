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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interpolationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *Y_comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *Interpolation_comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *X_comboBox;

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
        widget->setGeometry(QRect(110, 100, 190, 73));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        Y_comboBox = new QComboBox(widget);
        Y_comboBox->setObjectName("Y_comboBox");

        horizontalLayout_2->addWidget(Y_comboBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        Interpolation_comboBox = new QComboBox(widget);
        Interpolation_comboBox->setObjectName("Interpolation_comboBox");

        horizontalLayout_3->addWidget(Interpolation_comboBox);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        X_comboBox = new QComboBox(widget);
        X_comboBox->setObjectName("X_comboBox");

        horizontalLayout->addWidget(X_comboBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(interpolationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, interpolationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, interpolationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(interpolationDialog);
    } // setupUi

    void retranslateUi(QDialog *interpolationDialog)
    {
        interpolationDialog->setWindowTitle(QCoreApplication::translate("interpolationDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("interpolationDialog", "Select Reference Dataset:", nullptr));
        label_2->setText(QCoreApplication::translate("interpolationDialog", "Interpolation Type:", nullptr));
        label->setText(QCoreApplication::translate("interpolationDialog", "Select Interpolated Dataset :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interpolationDialog: public Ui_interpolationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERPOLATIONDIALOG_H
