/********************************************************************************
** Form generated from reading UI file 'functiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONDIALOG_H
#define UI_FUNCTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FunctionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *functionInput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FunctionDialog)
    {
        if (FunctionDialog->objectName().isEmpty())
            FunctionDialog->setObjectName("FunctionDialog");
        FunctionDialog->resize(400, 97);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FunctionDialog->sizePolicy().hasHeightForWidth());
        FunctionDialog->setSizePolicy(sizePolicy);
        FunctionDialog->setMinimumSize(QSize(400, 97));
        FunctionDialog->setMaximumSize(QSize(400, 97));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/function.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FunctionDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(FunctionDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FunctionDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        functionInput = new QLineEdit(FunctionDialog);
        functionInput->setObjectName("functionInput");

        verticalLayout->addWidget(functionInput);

        buttonBox = new QDialogButtonBox(FunctionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FunctionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FunctionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FunctionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FunctionDialog);
    } // setupUi

    void retranslateUi(QDialog *FunctionDialog)
    {
        FunctionDialog->setWindowTitle(QCoreApplication::translate("FunctionDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FunctionDialog", "Enter a mathematical expression to create a new dataset:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionDialog: public Ui_FunctionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONDIALOG_H
