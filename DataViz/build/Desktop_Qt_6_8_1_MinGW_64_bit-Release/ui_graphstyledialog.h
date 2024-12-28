/********************************************************************************
** Form generated from reading UI file 'graphstyledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHSTYLEDIALOG_H
#define UI_GRAPHSTYLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GraphStyleDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QComboBox *graphSelectionBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *colourDisplayBox;
    QPushButton *selectColourButton;
    QComboBox *widthSelectionBox;
    QComboBox *styleSelectionBox;
    QLineEdit *X_label_lineEdit;
    QLineEdit *Y_label_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *X_Range_L;
    QLabel *label_9;
    QLineEdit *X_Range_R;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *Y_Range_L;
    QLabel *label_10;
    QLineEdit *Y_Range_R;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *submitButton;

    void setupUi(QDialog *GraphStyleDialog)
    {
        if (GraphStyleDialog->objectName().isEmpty())
            GraphStyleDialog->setObjectName("GraphStyleDialog");
        GraphStyleDialog->resize(359, 331);
        GraphStyleDialog->setMinimumSize(QSize(300, 200));
        GraphStyleDialog->setMaximumSize(QSize(500, 500));
        verticalLayout_4 = new QVBoxLayout(GraphStyleDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(GraphStyleDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(GraphStyleDialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(GraphStyleDialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(GraphStyleDialog);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(GraphStyleDialog);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(GraphStyleDialog);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(GraphStyleDialog);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(GraphStyleDialog);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(111, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        graphSelectionBox = new QComboBox(GraphStyleDialog);
        graphSelectionBox->setObjectName("graphSelectionBox");

        verticalLayout->addWidget(graphSelectionBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        colourDisplayBox = new QLineEdit(GraphStyleDialog);
        colourDisplayBox->setObjectName("colourDisplayBox");
        colourDisplayBox->setMinimumSize(QSize(50, 20));
        colourDisplayBox->setMaximumSize(QSize(50, 20));
        colourDisplayBox->setFrame(false);
        colourDisplayBox->setReadOnly(true);

        horizontalLayout->addWidget(colourDisplayBox);

        selectColourButton = new QPushButton(GraphStyleDialog);
        selectColourButton->setObjectName("selectColourButton");

        horizontalLayout->addWidget(selectColourButton);


        verticalLayout->addLayout(horizontalLayout);

        widthSelectionBox = new QComboBox(GraphStyleDialog);
        widthSelectionBox->addItem(QString());
        widthSelectionBox->addItem(QString());
        widthSelectionBox->addItem(QString());
        widthSelectionBox->addItem(QString());
        widthSelectionBox->setObjectName("widthSelectionBox");

        verticalLayout->addWidget(widthSelectionBox);

        styleSelectionBox = new QComboBox(GraphStyleDialog);
        styleSelectionBox->addItem(QString());
        styleSelectionBox->addItem(QString());
        styleSelectionBox->addItem(QString());
        styleSelectionBox->addItem(QString());
        styleSelectionBox->setObjectName("styleSelectionBox");

        verticalLayout->addWidget(styleSelectionBox);

        X_label_lineEdit = new QLineEdit(GraphStyleDialog);
        X_label_lineEdit->setObjectName("X_label_lineEdit");

        verticalLayout->addWidget(X_label_lineEdit);

        Y_label_lineEdit = new QLineEdit(GraphStyleDialog);
        Y_label_lineEdit->setObjectName("Y_label_lineEdit");

        verticalLayout->addWidget(Y_label_lineEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        X_Range_L = new QLineEdit(GraphStyleDialog);
        X_Range_L->setObjectName("X_Range_L");

        horizontalLayout_2->addWidget(X_Range_L);

        label_9 = new QLabel(GraphStyleDialog);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        X_Range_R = new QLineEdit(GraphStyleDialog);
        X_Range_R->setObjectName("X_Range_R");

        horizontalLayout_2->addWidget(X_Range_R);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Y_Range_L = new QLineEdit(GraphStyleDialog);
        Y_Range_L->setObjectName("Y_Range_L");

        horizontalLayout_3->addWidget(Y_Range_L);

        label_10 = new QLabel(GraphStyleDialog);
        label_10->setObjectName("label_10");

        horizontalLayout_3->addWidget(label_10);

        Y_Range_R = new QLineEdit(GraphStyleDialog);
        Y_Range_R->setObjectName("Y_Range_R");

        horizontalLayout_3->addWidget(Y_Range_R);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(17, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        submitButton = new QDialogButtonBox(GraphStyleDialog);
        submitButton->setObjectName("submitButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy);
        submitButton->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(submitButton);


        verticalLayout_4->addLayout(verticalLayout_3);

        QWidget::setTabOrder(graphSelectionBox, selectColourButton);
        QWidget::setTabOrder(selectColourButton, widthSelectionBox);
        QWidget::setTabOrder(widthSelectionBox, styleSelectionBox);

        retranslateUi(GraphStyleDialog);

        QMetaObject::connectSlotsByName(GraphStyleDialog);
    } // setupUi

    void retranslateUi(QDialog *GraphStyleDialog)
    {
        GraphStyleDialog->setWindowTitle(QCoreApplication::translate("GraphStyleDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GraphStyleDialog", "Graph:", nullptr));
        label_2->setText(QCoreApplication::translate("GraphStyleDialog", "Colour:", nullptr));
        label_3->setText(QCoreApplication::translate("GraphStyleDialog", "Line Width:", nullptr));
        label_4->setText(QCoreApplication::translate("GraphStyleDialog", "Line Style:", nullptr));
        label_5->setText(QCoreApplication::translate("GraphStyleDialog", "X Label", nullptr));
        label_6->setText(QCoreApplication::translate("GraphStyleDialog", "Y Label", nullptr));
        label_7->setText(QCoreApplication::translate("GraphStyleDialog", "X Range", nullptr));
        label_8->setText(QCoreApplication::translate("GraphStyleDialog", "Y Range", nullptr));
        selectColourButton->setText(QCoreApplication::translate("GraphStyleDialog", "Select", nullptr));
        widthSelectionBox->setItemText(0, QCoreApplication::translate("GraphStyleDialog", "1", nullptr));
        widthSelectionBox->setItemText(1, QCoreApplication::translate("GraphStyleDialog", "2", nullptr));
        widthSelectionBox->setItemText(2, QCoreApplication::translate("GraphStyleDialog", "3", nullptr));
        widthSelectionBox->setItemText(3, QCoreApplication::translate("GraphStyleDialog", "4", nullptr));

        styleSelectionBox->setItemText(0, QCoreApplication::translate("GraphStyleDialog", "Solid", nullptr));
        styleSelectionBox->setItemText(1, QCoreApplication::translate("GraphStyleDialog", "Dashed", nullptr));
        styleSelectionBox->setItemText(2, QCoreApplication::translate("GraphStyleDialog", "Dotted", nullptr));
        styleSelectionBox->setItemText(3, QCoreApplication::translate("GraphStyleDialog", "Dash Dot", nullptr));

        label_9->setText(QCoreApplication::translate("GraphStyleDialog", "\342\200\224", nullptr));
        label_10->setText(QCoreApplication::translate("GraphStyleDialog", "\342\200\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphStyleDialog: public Ui_GraphStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHSTYLEDIALOG_H
