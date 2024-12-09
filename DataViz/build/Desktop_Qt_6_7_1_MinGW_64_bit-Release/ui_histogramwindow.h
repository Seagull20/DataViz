/********************************************************************************
** Form generated from reading UI file 'histogramwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMWINDOW_H
#define UI_HISTOGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_HistogramWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *name_comboBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *plot_pushButton;
    QSpacerItem *verticalSpacer;
    QCustomPlot *customPlot;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancel_pushButton;

    void setupUi(QDialog *HistogramWindow)
    {
        if (HistogramWindow->objectName().isEmpty())
            HistogramWindow->setObjectName("HistogramWindow");
        HistogramWindow->resize(425, 396);
        verticalLayout_2 = new QVBoxLayout(HistogramWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(HistogramWindow);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name_comboBox = new QComboBox(HistogramWindow);
        name_comboBox->setObjectName("name_comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name_comboBox->sizePolicy().hasHeightForWidth());
        name_comboBox->setSizePolicy(sizePolicy);
        name_comboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(name_comboBox);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        plot_pushButton = new QPushButton(HistogramWindow);
        plot_pushButton->setObjectName("plot_pushButton");

        horizontalLayout->addWidget(plot_pushButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        customPlot = new QCustomPlot(HistogramWindow);
        customPlot->setObjectName("customPlot");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy1);
        customPlot->setMinimumSize(QSize(300, 300));

        verticalLayout->addWidget(customPlot);

        verticalSpacer_2 = new QSpacerItem(10, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        cancel_pushButton = new QPushButton(HistogramWindow);
        cancel_pushButton->setObjectName("cancel_pushButton");

        horizontalLayout_2->addWidget(cancel_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HistogramWindow);

        QMetaObject::connectSlotsByName(HistogramWindow);
    } // setupUi

    void retranslateUi(QDialog *HistogramWindow)
    {
        HistogramWindow->setWindowTitle(QCoreApplication::translate("HistogramWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HistogramWindow", "Dataset:", nullptr));
        plot_pushButton->setText(QCoreApplication::translate("HistogramWindow", "Plot", nullptr));
        cancel_pushButton->setText(QCoreApplication::translate("HistogramWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistogramWindow: public Ui_HistogramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMWINDOW_H
