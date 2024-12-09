/********************************************************************************
** Form generated from reading UI file 'changedatasetinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDATASETINFODIALOG_H
#define UI_CHANGEDATASETINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeDataSetInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeDataSetInfoDialog)
    {
        if (ChangeDataSetInfoDialog->objectName().isEmpty())
            ChangeDataSetInfoDialog->setObjectName("ChangeDataSetInfoDialog");
        ChangeDataSetInfoDialog->resize(350, 300);
        ChangeDataSetInfoDialog->setMaximumSize(QSize(350, 300));
        verticalLayout = new QVBoxLayout(ChangeDataSetInfoDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ChangeDataSetInfoDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(ChangeDataSetInfoDialog);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ChangeDataSetInfoDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        textEdit = new QTextEdit(ChangeDataSetInfoDialog);
        textEdit->setObjectName("textEdit");

        horizontalLayout_2->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(ChangeDataSetInfoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChangeDataSetInfoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChangeDataSetInfoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChangeDataSetInfoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChangeDataSetInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeDataSetInfoDialog)
    {
        ChangeDataSetInfoDialog->setWindowTitle(QCoreApplication::translate("ChangeDataSetInfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangeDataSetInfoDialog", "Rename dataset:", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeDataSetInfoDialog", "Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeDataSetInfoDialog: public Ui_ChangeDataSetInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDATASETINFODIALOG_H
