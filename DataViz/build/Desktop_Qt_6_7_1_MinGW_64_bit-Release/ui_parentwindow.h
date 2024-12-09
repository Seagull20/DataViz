/********************************************************************************
** Form generated from reading UI file 'parentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARENTWINDOW_H
#define UI_PARENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParentWindow
{
public:
    QAction *actionLoad_Dataset;
    QAction *actionAbout;
    QAction *actionHelp;
    QAction *actionHist_Plot;
    QAction *actionFunction;
    QWidget *centralwidget;
    QMdiArea *WindowsManager;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuPlot;
    QMenu *menuXY_Plot;
    QMenu *menuAnalysis;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ParentWindow)
    {
        if (ParentWindow->objectName().isEmpty())
            ParentWindow->setObjectName("ParentWindow");
        ParentWindow->resize(800, 600);
        actionLoad_Dataset = new QAction(ParentWindow);
        actionLoad_Dataset->setObjectName("actionLoad_Dataset");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/dataset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_Dataset->setIcon(icon);
        actionAbout = new QAction(ParentWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/aboutSymbol.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon1);
        actionHelp = new QAction(ParentWindow);
        actionHelp->setObjectName("actionHelp");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/helpSymbol.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon2);
        actionHist_Plot = new QAction(ParentWindow);
        actionHist_Plot->setObjectName("actionHist_Plot");
        actionFunction = new QAction(ParentWindow);
        actionFunction->setObjectName("actionFunction");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/function.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFunction->setIcon(icon3);
        centralwidget = new QWidget(ParentWindow);
        centralwidget->setObjectName("centralwidget");
        WindowsManager = new QMdiArea(centralwidget);
        WindowsManager->setObjectName("WindowsManager");
        WindowsManager->setGeometry(QRect(180, 120, 200, 160));
        ParentWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ParentWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuPlot = new QMenu(menubar);
        menuPlot->setObjectName("menuPlot");
        menuXY_Plot = new QMenu(menuPlot);
        menuXY_Plot->setObjectName("menuXY_Plot");
        menuAnalysis = new QMenu(menubar);
        menuAnalysis->setObjectName("menuAnalysis");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        ParentWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ParentWindow);
        statusbar->setObjectName("statusbar");
        ParentWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(ParentWindow);
        toolBar->setObjectName("toolBar");
        ParentWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuPlot->menuAction());
        menubar->addAction(menuAnalysis->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionLoad_Dataset);
        menuPlot->addAction(menuXY_Plot->menuAction());
        menuPlot->addAction(actionHist_Plot);
        menuAnalysis->addAction(actionFunction);
        menuHelp->addAction(actionHelp);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionLoad_Dataset);

        retranslateUi(ParentWindow);

        QMetaObject::connectSlotsByName(ParentWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ParentWindow)
    {
        ParentWindow->setWindowTitle(QCoreApplication::translate("ParentWindow", "DataViz 0.0", nullptr));
        actionLoad_Dataset->setText(QCoreApplication::translate("ParentWindow", "Load Dataset", nullptr));
        actionAbout->setText(QCoreApplication::translate("ParentWindow", "About", nullptr));
        actionHelp->setText(QCoreApplication::translate("ParentWindow", "Help", nullptr));
        actionHist_Plot->setText(QCoreApplication::translate("ParentWindow", "Histogram Plot", nullptr));
        actionFunction->setText(QCoreApplication::translate("ParentWindow", "Function", nullptr));
        menuFile->setTitle(QCoreApplication::translate("ParentWindow", "File", nullptr));
        menuPlot->setTitle(QCoreApplication::translate("ParentWindow", "Plot", nullptr));
        menuXY_Plot->setTitle(QCoreApplication::translate("ParentWindow", "XY Plot", nullptr));
        menuAnalysis->setTitle(QCoreApplication::translate("ParentWindow", "Analysis", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("ParentWindow", "Help", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("ParentWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("ParentWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParentWindow: public Ui_ParentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARENTWINDOW_H
