/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(550, 160);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(550, 160));
        AboutDialog->setMaximumSize(QSize(550, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/aboutSymbol.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AboutDialog->setWindowIcon(icon);
        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 461, 131));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "This is an educational software development project developed and maintained by the students of the module ELEC362 in the Electrical Engineering department at the University of Liverpool, under the supervisor of Dr. Mohammad Hasan.\n"
"\n"
"All students taking ELEC362 are acknowledged for the development of this project, particular thanks to: \n"
"(Lige Dong and Yuanyi Que, 2022 cohort)\n"
"(Will Smith and Justin Lam Po Tang, 2023 cohort)\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
