/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *errNumLabel;
    QPlainTextEdit *errDetailsText;
    QPushButton *pushButton;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName("ErrorDialog");
        ErrorDialog->resize(300, 150);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ErrorDialog->sizePolicy().hasHeightForWidth());
        ErrorDialog->setSizePolicy(sizePolicy);
        ErrorDialog->setMinimumSize(QSize(300, 150));
        ErrorDialog->setMaximumSize(QSize(300, 16777215));
        verticalLayout_2 = new QVBoxLayout(ErrorDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        errNumLabel = new QLabel(ErrorDialog);
        errNumLabel->setObjectName("errNumLabel");

        verticalLayout->addWidget(errNumLabel);

        errDetailsText = new QPlainTextEdit(ErrorDialog);
        errDetailsText->setObjectName("errDetailsText");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(errDetailsText->sizePolicy().hasHeightForWidth());
        errDetailsText->setSizePolicy(sizePolicy1);
        errDetailsText->setMinimumSize(QSize(0, 0));
        errDetailsText->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;"));
        errDetailsText->setReadOnly(true);

        verticalLayout->addWidget(errDetailsText);

        pushButton = new QPushButton(ErrorDialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ErrorDialog);

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QCoreApplication::translate("ErrorDialog", "Dialog", nullptr));
        errNumLabel->setText(QCoreApplication::translate("ErrorDialog", "ERROR", nullptr));
        pushButton->setText(QCoreApplication::translate("ErrorDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
