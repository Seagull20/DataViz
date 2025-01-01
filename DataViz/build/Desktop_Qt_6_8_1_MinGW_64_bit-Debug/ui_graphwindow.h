/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *customPlot;

    void setupUi(QDialog *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName("GraphWindow");
        GraphWindow->resize(412, 319);
        GraphWindow->setMinimumSize(QSize(250, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/graph.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        GraphWindow->setWindowIcon(icon);
        gridLayout = new QGridLayout(GraphWindow);
        gridLayout->setObjectName("gridLayout");
        customPlot = new QCustomPlot(GraphWindow);
        customPlot->setObjectName("customPlot");
        customPlot->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        customPlot->setAutoFillBackground(false);

        gridLayout->addWidget(customPlot, 1, 0, 1, 1);


        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QDialog *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
