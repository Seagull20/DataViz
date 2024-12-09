/********************************************************************************
** Form generated from reading UI file 'createwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWINDOW_H
#define UI_CREATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *name_lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *row_spinBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QTableWidget *input_tableWidget;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *save_pushButton;
    QPushButton *cancel_pushButton;

    void setupUi(QDialog *CreateWindow)
    {
        if (CreateWindow->objectName().isEmpty())
            CreateWindow->setObjectName("CreateWindow");
        CreateWindow->resize(350, 420);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateWindow->sizePolicy().hasHeightForWidth());
        CreateWindow->setSizePolicy(sizePolicy);
        CreateWindow->setMinimumSize(QSize(350, 420));
        verticalLayout_3 = new QVBoxLayout(CreateWindow);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(CreateWindow);
        label_3->setObjectName("label_3");
        QFont font;
        font.setBold(true);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name_lineEdit = new QLineEdit(CreateWindow);
        name_lineEdit->setObjectName("name_lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name_lineEdit->sizePolicy().hasHeightForWidth());
        name_lineEdit->setSizePolicy(sizePolicy1);
        name_lineEdit->setMinimumSize(QSize(100, 22));

        horizontalLayout->addWidget(name_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(CreateWindow);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        row_spinBox = new QSpinBox(CreateWindow);
        row_spinBox->setObjectName("row_spinBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(row_spinBox->sizePolicy().hasHeightForWidth());
        row_spinBox->setSizePolicy(sizePolicy3);
        row_spinBox->setMinimum(0);
        row_spinBox->setMaximum(500);

        horizontalLayout_2->addWidget(row_spinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(CreateWindow);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        input_tableWidget = new QTableWidget(CreateWindow);
        input_tableWidget->setObjectName("input_tableWidget");
        sizePolicy.setHeightForWidth(input_tableWidget->sizePolicy().hasHeightForWidth());
        input_tableWidget->setSizePolicy(sizePolicy);
        input_tableWidget->setMinimumSize(QSize(100, 100));

        verticalLayout->addWidget(input_tableWidget);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        save_pushButton = new QPushButton(CreateWindow);
        save_pushButton->setObjectName("save_pushButton");

        horizontalLayout_3->addWidget(save_pushButton);

        cancel_pushButton = new QPushButton(CreateWindow);
        cancel_pushButton->setObjectName("cancel_pushButton");

        horizontalLayout_3->addWidget(cancel_pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(CreateWindow);

        QMetaObject::connectSlotsByName(CreateWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateWindow)
    {
        CreateWindow->setWindowTitle(QCoreApplication::translate("CreateWindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("CreateWindow", "Name of Dataset:", nullptr));
        label_2->setText(QCoreApplication::translate("CreateWindow", "Number of Data Points:", nullptr));
        label->setText(QCoreApplication::translate("CreateWindow", "Enter Data:", nullptr));
        save_pushButton->setText(QCoreApplication::translate("CreateWindow", "Save", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("CreateWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWindow: public Ui_CreateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWINDOW_H
