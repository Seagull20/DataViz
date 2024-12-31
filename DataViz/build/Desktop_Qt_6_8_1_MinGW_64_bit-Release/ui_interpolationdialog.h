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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interpolationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *X_comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *Y_comboBox;

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
        widget->setGeometry(QRect(70, 80, 280, 48));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        X_comboBox = new QComboBox(widget);
        X_comboBox->setObjectName("X_comboBox");

        horizontalLayout->addWidget(X_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        Y_comboBox = new QComboBox(widget);
        Y_comboBox->setObjectName("Y_comboBox");

        horizontalLayout_2->addWidget(Y_comboBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(interpolationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, interpolationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, interpolationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(interpolationDialog);
    } // setupUi

    void retranslateUi(QDialog *interpolationDialog)
    {
        interpolationDialog->setWindowTitle(QCoreApplication::translate("interpolationDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("interpolationDialog", "Select X dataset:", nullptr));
        label_3->setText(QCoreApplication::translate("interpolationDialog", "Select Y dataset:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interpolationDialog: public Ui_interpolationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERPOLATIONDIALOG_H
