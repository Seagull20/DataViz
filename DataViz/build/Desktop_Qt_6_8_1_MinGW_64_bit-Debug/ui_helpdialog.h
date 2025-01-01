/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *plainTextEdit_4;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_6;
    QPlainTextEdit *plainTextEdit_5;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_7;
    QPlainTextEdit *plainTextEdit_6;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_8;
    QPlainTextEdit *plainTextEdit_7;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName("HelpDialog");
        HelpDialog->resize(650, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HelpDialog->sizePolicy().hasHeightForWidth());
        HelpDialog->setSizePolicy(sizePolicy);
        HelpDialog->setMinimumSize(QSize(650, 400));
        HelpDialog->setMaximumSize(QSize(650, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/helpSymbol.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        HelpDialog->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HelpDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(HelpDialog);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(HelpDialog);
        listWidget->setObjectName("listWidget");
        listWidget->setMinimumSize(QSize(250, 0));
        listWidget->setMaximumSize(QSize(250, 16777215));

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(HelpDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(page);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;"));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        plainTextEdit_2 = new QPlainTextEdit(page_2);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;"));
        plainTextEdit_2->setReadOnly(true);

        verticalLayout_5->addWidget(plainTextEdit_2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        plainTextEdit_3 = new QPlainTextEdit(page_3);
        plainTextEdit_3->setObjectName("plainTextEdit_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit_3->sizePolicy().hasHeightForWidth());
        plainTextEdit_3->setSizePolicy(sizePolicy1);
        plainTextEdit_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;"));
        plainTextEdit_3->setReadOnly(true);

        verticalLayout_2->addWidget(plainTextEdit_3);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        verticalLayout_3 = new QVBoxLayout(page_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        plainTextEdit_4 = new QPlainTextEdit(page_4);
        plainTextEdit_4->setObjectName("plainTextEdit_4");
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"background: transparent;\n"
"border: none;\n"
"}"));
        plainTextEdit_4->setReadOnly(true);

        verticalLayout_3->addWidget(plainTextEdit_4);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        verticalLayout_6 = new QVBoxLayout(page_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        plainTextEdit_5 = new QPlainTextEdit(page_5);
        plainTextEdit_5->setObjectName("plainTextEdit_5");
        plainTextEdit_5->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"background: transparent;\n"
"border: none;\n"
"}"));
        plainTextEdit_5->setReadOnly(true);

        verticalLayout_6->addWidget(plainTextEdit_5);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        verticalLayout_7 = new QVBoxLayout(page_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        plainTextEdit_6 = new QPlainTextEdit(page_6);
        plainTextEdit_6->setObjectName("plainTextEdit_6");
        plainTextEdit_6->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"background: transparent;\n"
"border: none;\n"
"}"));
        plainTextEdit_6->setReadOnly(true);

        verticalLayout_7->addWidget(plainTextEdit_6);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        verticalLayout_8 = new QVBoxLayout(page_7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        plainTextEdit_7 = new QPlainTextEdit(page_7);
        plainTextEdit_7->setObjectName("plainTextEdit_7");
        plainTextEdit_7->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"background: transparent;\n"
"border: none;\n"
"}"));
        plainTextEdit_7->setReadOnly(true);

        verticalLayout_8->addWidget(plainTextEdit_7);

        stackedWidget->addWidget(page_7);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(HelpDialog);
        QObject::connect(listWidget, &QListWidget::currentRowChanged, stackedWidget, &QStackedWidget::setCurrentIndex);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QCoreApplication::translate("HelpDialog", "Help", nullptr));
        label_4->setText(QCoreApplication::translate("HelpDialog", "Select a tab on the left to view related help information.\n"
"", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("HelpDialog", "Loading a file can be done by clicking on:\n"
"\n"
"File menu -> Load Dataset -> Select a dataset file\n"
"\n"
"Alternatively, by clicking on the page symbol in the toolbar at the top of the app.", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("HelpDialog", "There are two methods for plotting a dataset.\n"
"\n"
"Method 1:\n"
"Right-mouse-click on the dataset -> Plot -> XY Plot\n"
"Right-mouse-click on the dataset -> Plot -> Histogram Plot, follow instructions and click 'OK'\n"
"\n"
"Method 2:\n"
"Plot -> XY Plot -> Select a dataset to plot.\n"
"Plot -> Histogram Plot -> Follow the instructions of the dialog box and click 'OK'", nullptr));
        plainTextEdit_3->setPlainText(QCoreApplication::translate("HelpDialog", "To rename a loaded dataset:\n"
"\n"
"right-click on the dataset -> Edit Dataset Name", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("HelpDialog", "The app currently is designed to work with datasets saved in txt file, where the data is listed in two columns. The first column is the x coordinate of the data point while the second is the y coordinate of the datapoints.\n"
"\n"
"The x and y coordinates can be either separated by a tab or a comma.", nullptr));
        plainTextEdit_5->setPlainText(QCoreApplication::translate("HelpDialog", "To change the colour, style etc. of a graph:\n"
"\n"
"Right-click on the figure -> Edit style -> input chosen settings", nullptr));
        plainTextEdit_6->setPlainText(QCoreApplication::translate("HelpDialog", "To plot an additional graph to a figure window:\n"
"\n"
"Right-click on the figure -> Add Data -> select a loaded dataset to plot.", nullptr));
        plainTextEdit_7->setPlainText(QCoreApplication::translate("HelpDialog", "You can perform mathematical functions with entire datasets using the following method:\n"
"\n"
"Analysis -> Function -> input a mathematical formula.\n"
"\n"
"Dataset names are case sensitive and must be typed correctly and fully.\n"
"\n"
"Datasets being used must be of equal size.\n"
"\n"
"The mathematical equation must comprise 2 datasets. More or less than this will result in errors.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
