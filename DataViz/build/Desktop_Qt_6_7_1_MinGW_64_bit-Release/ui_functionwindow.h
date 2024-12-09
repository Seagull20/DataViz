/********************************************************************************
** Form generated from reading UI file 'functionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONWINDOW_H
#define UI_FUNCTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FunctionWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *input_lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *calculate_pushButton;
    QPushButton *cancel_pushButton;

    void setupUi(QDialog *FunctionWindow)
    {
        if (FunctionWindow->objectName().isEmpty())
            FunctionWindow->setObjectName("FunctionWindow");
        FunctionWindow->resize(330, 150);
        FunctionWindow->setMaximumSize(QSize(330, 150));
        verticalLayout_2 = new QVBoxLayout(FunctionWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(FunctionWindow);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        input_lineEdit = new QLineEdit(FunctionWindow);
        input_lineEdit->setObjectName("input_lineEdit");
        input_lineEdit->setMinimumSize(QSize(150, 20));

        horizontalLayout->addWidget(input_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        calculate_pushButton = new QPushButton(FunctionWindow);
        calculate_pushButton->setObjectName("calculate_pushButton");

        horizontalLayout_2->addWidget(calculate_pushButton);

        cancel_pushButton = new QPushButton(FunctionWindow);
        cancel_pushButton->setObjectName("cancel_pushButton");

        horizontalLayout_2->addWidget(cancel_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(FunctionWindow);

        QMetaObject::connectSlotsByName(FunctionWindow);
    } // setupUi

    void retranslateUi(QDialog *FunctionWindow)
    {
        FunctionWindow->setWindowTitle(QCoreApplication::translate("FunctionWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FunctionWindow", "Enter Expression:", nullptr));
        calculate_pushButton->setText(QCoreApplication::translate("FunctionWindow", "Calculate", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("FunctionWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionWindow: public Ui_FunctionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONWINDOW_H
