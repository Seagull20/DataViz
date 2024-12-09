/********************************************************************************
** Form generated from reading UI file 'settingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGWINDOW_H
#define UI_SETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *colour_comboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *style_comboBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *width_spinBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *save_pushButton;
    QPushButton *cancel_pushButton;

    void setupUi(QDialog *SettingWindow)
    {
        if (SettingWindow->objectName().isEmpty())
            SettingWindow->setObjectName("SettingWindow");
        SettingWindow->resize(435, 321);
        verticalLayout_3 = new QVBoxLayout(SettingWindow);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(SettingWindow);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        colour_comboBox = new QComboBox(SettingWindow);
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->addItem(QString());
        colour_comboBox->setObjectName("colour_comboBox");

        horizontalLayout->addWidget(colour_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(SettingWindow);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        style_comboBox = new QComboBox(SettingWindow);
        style_comboBox->addItem(QString());
        style_comboBox->addItem(QString());
        style_comboBox->addItem(QString());
        style_comboBox->addItem(QString());
        style_comboBox->setObjectName("style_comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(style_comboBox->sizePolicy().hasHeightForWidth());
        style_comboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(style_comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(SettingWindow);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        width_spinBox = new QSpinBox(SettingWindow);
        width_spinBox->setObjectName("width_spinBox");
        width_spinBox->setMinimum(1);
        width_spinBox->setMaximum(20);

        horizontalLayout_3->addWidget(width_spinBox);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        save_pushButton = new QPushButton(SettingWindow);
        save_pushButton->setObjectName("save_pushButton");

        horizontalLayout_4->addWidget(save_pushButton);

        cancel_pushButton = new QPushButton(SettingWindow);
        cancel_pushButton->setObjectName("cancel_pushButton");

        horizontalLayout_4->addWidget(cancel_pushButton);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(SettingWindow);

        QMetaObject::connectSlotsByName(SettingWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingWindow)
    {
        SettingWindow->setWindowTitle(QCoreApplication::translate("SettingWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SettingWindow", "Colour:", nullptr));
        colour_comboBox->setItemText(0, QCoreApplication::translate("SettingWindow", "Red", nullptr));
        colour_comboBox->setItemText(1, QCoreApplication::translate("SettingWindow", "Green", nullptr));
        colour_comboBox->setItemText(2, QCoreApplication::translate("SettingWindow", "Blue", nullptr));
        colour_comboBox->setItemText(3, QCoreApplication::translate("SettingWindow", "Dark Red", nullptr));
        colour_comboBox->setItemText(4, QCoreApplication::translate("SettingWindow", "Dark Green", nullptr));
        colour_comboBox->setItemText(5, QCoreApplication::translate("SettingWindow", "Dark Blue", nullptr));
        colour_comboBox->setItemText(6, QCoreApplication::translate("SettingWindow", "Cyan", nullptr));
        colour_comboBox->setItemText(7, QCoreApplication::translate("SettingWindow", "Magenta", nullptr));
        colour_comboBox->setItemText(8, QCoreApplication::translate("SettingWindow", "Yellow", nullptr));
        colour_comboBox->setItemText(9, QCoreApplication::translate("SettingWindow", "Gray", nullptr));
        colour_comboBox->setItemText(10, QCoreApplication::translate("SettingWindow", "Dark Cyan", nullptr));
        colour_comboBox->setItemText(11, QCoreApplication::translate("SettingWindow", "Dark Mangenta", nullptr));
        colour_comboBox->setItemText(12, QCoreApplication::translate("SettingWindow", "Dark Yellow", nullptr));
        colour_comboBox->setItemText(13, QCoreApplication::translate("SettingWindow", "Dark Gray", nullptr));

        label_2->setText(QCoreApplication::translate("SettingWindow", "Line Style:", nullptr));
        style_comboBox->setItemText(0, QCoreApplication::translate("SettingWindow", "Single Line", nullptr));
        style_comboBox->setItemText(1, QCoreApplication::translate("SettingWindow", "Left Step Line", nullptr));
        style_comboBox->setItemText(2, QCoreApplication::translate("SettingWindow", "Right Step Line", nullptr));
        style_comboBox->setItemText(3, QCoreApplication::translate("SettingWindow", "Centre Step Line", nullptr));

        label_3->setText(QCoreApplication::translate("SettingWindow", "Line Width:", nullptr));
        save_pushButton->setText(QCoreApplication::translate("SettingWindow", "Save", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("SettingWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingWindow: public Ui_SettingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWINDOW_H
