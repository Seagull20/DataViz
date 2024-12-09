/********************************************************************************
** Form generated from reading UI file 'graphstyledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QComboBox *graphSelectionBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *colourDisplayBox;
    QPushButton *selectColourButton;
    QComboBox *widthSelectionBox;
    QComboBox *styleSelectionBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *submitButton;

    void setupUi(QDialog *GraphStyleDialog)
    {
        if (GraphStyleDialog->objectName().isEmpty())
            GraphStyleDialog->setObjectName("GraphStyleDialog");
        GraphStyleDialog->resize(300, 200);
        GraphStyleDialog->setMinimumSize(QSize(300, 200));
        GraphStyleDialog->setMaximumSize(QSize(300, 200));
        verticalLayout_3 = new QVBoxLayout(GraphStyleDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(GraphStyleDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(GraphStyleDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(GraphStyleDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(GraphStyleDialog);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        graphSelectionBox = new QComboBox(GraphStyleDialog);
        graphSelectionBox->setObjectName("graphSelectionBox");

        verticalLayout_2->addWidget(graphSelectionBox);

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


        verticalLayout_2->addLayout(horizontalLayout);

        widthSelectionBox = new QComboBox(GraphStyleDialog);
        widthSelectionBox->addItem(QString());
        widthSelectionBox->addItem(QString());
        widthSelectionBox->addItem(QString());
        widthSelectionBox->addItem(QString());
        widthSelectionBox->setObjectName("widthSelectionBox");

        verticalLayout_2->addWidget(widthSelectionBox);

        styleSelectionBox = new QComboBox(GraphStyleDialog);
        styleSelectionBox->addItem(QString());
        styleSelectionBox->addItem(QString());
        styleSelectionBox->addItem(QString());
        styleSelectionBox->addItem(QString());
        styleSelectionBox->setObjectName("styleSelectionBox");

        verticalLayout_2->addWidget(styleSelectionBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        submitButton = new QDialogButtonBox(GraphStyleDialog);
        submitButton->setObjectName("submitButton");
        submitButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(submitButton);

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
        selectColourButton->setText(QCoreApplication::translate("GraphStyleDialog", "Select", nullptr));
        widthSelectionBox->setItemText(0, QCoreApplication::translate("GraphStyleDialog", "1", nullptr));
        widthSelectionBox->setItemText(1, QCoreApplication::translate("GraphStyleDialog", "2", nullptr));
        widthSelectionBox->setItemText(2, QCoreApplication::translate("GraphStyleDialog", "3", nullptr));
        widthSelectionBox->setItemText(3, QCoreApplication::translate("GraphStyleDialog", "4", nullptr));

        styleSelectionBox->setItemText(0, QCoreApplication::translate("GraphStyleDialog", "Solid", nullptr));
        styleSelectionBox->setItemText(1, QCoreApplication::translate("GraphStyleDialog", "Dashed", nullptr));
        styleSelectionBox->setItemText(2, QCoreApplication::translate("GraphStyleDialog", "Dotted", nullptr));
        styleSelectionBox->setItemText(3, QCoreApplication::translate("GraphStyleDialog", "Dash Dot", nullptr));

    } // retranslateUi

};

namespace Ui {
    class GraphStyleDialog: public Ui_GraphStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHSTYLEDIALOG_H
