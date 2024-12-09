/********************************************************************************
** Form generated from reading UI file 'changedatasetnamedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDATASETNAMEDIALOG_H
#define UI_CHANGEDATASETNAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeDataSetNameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeDataSetNameDialog)
    {
        if (ChangeDataSetNameDialog->objectName().isEmpty())
            ChangeDataSetNameDialog->setObjectName("ChangeDataSetNameDialog");
        ChangeDataSetNameDialog->resize(320, 83);
        ChangeDataSetNameDialog->setMaximumSize(QSize(320, 83));
        verticalLayout = new QVBoxLayout(ChangeDataSetNameDialog);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(ChangeDataSetNameDialog);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(ChangeDataSetNameDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChangeDataSetNameDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChangeDataSetNameDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChangeDataSetNameDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChangeDataSetNameDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeDataSetNameDialog)
    {
        ChangeDataSetNameDialog->setWindowTitle(QCoreApplication::translate("ChangeDataSetNameDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeDataSetNameDialog: public Ui_ChangeDataSetNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDATASETNAMEDIALOG_H
