/********************************************************************************
** Form generated from reading UI file 'examinewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINEWINDOW_H
#define UI_EXAMINEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExamineWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *name_comboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *comment_plainTextEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *add_pushButton;
    QPushButton *cancel_pushButton;

    void setupUi(QDialog *ExamineWindow)
    {
        if (ExamineWindow->objectName().isEmpty())
            ExamineWindow->setObjectName("ExamineWindow");
        ExamineWindow->resize(310, 270);
        ExamineWindow->setMinimumSize(QSize(310, 270));
        verticalLayout_2 = new QVBoxLayout(ExamineWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ExamineWindow);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name_comboBox = new QComboBox(ExamineWindow);
        name_comboBox->setObjectName("name_comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name_comboBox->sizePolicy().hasHeightForWidth());
        name_comboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(name_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ExamineWindow);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        comment_plainTextEdit = new QPlainTextEdit(ExamineWindow);
        comment_plainTextEdit->setObjectName("comment_plainTextEdit");
        comment_plainTextEdit->setMinimumSize(QSize(150, 150));

        horizontalLayout_2->addWidget(comment_plainTextEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        add_pushButton = new QPushButton(ExamineWindow);
        add_pushButton->setObjectName("add_pushButton");

        horizontalLayout_3->addWidget(add_pushButton);

        cancel_pushButton = new QPushButton(ExamineWindow);
        cancel_pushButton->setObjectName("cancel_pushButton");

        horizontalLayout_3->addWidget(cancel_pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ExamineWindow);

        QMetaObject::connectSlotsByName(ExamineWindow);
    } // setupUi

    void retranslateUi(QDialog *ExamineWindow)
    {
        ExamineWindow->setWindowTitle(QCoreApplication::translate("ExamineWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ExamineWindow", "Dataset:", nullptr));
        label_2->setText(QCoreApplication::translate("ExamineWindow", "Comment:", nullptr));
        add_pushButton->setText(QCoreApplication::translate("ExamineWindow", "Add", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("ExamineWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamineWindow: public Ui_ExamineWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINEWINDOW_H
