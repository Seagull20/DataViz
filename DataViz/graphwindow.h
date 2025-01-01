#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

/********************************
 *
 *  This class is defined to show a graph in a window,
 *  an object of this class is the window in which a graph is plotted
 *
 *  In this class, a figure is the frame of the plot of the curves, its
 *  properties include the axes, the grid, the title, the legend.
 *
 *  In this class, a graph is the curve plotted, its properties include
 *  the width of the line, its style, and its colour.
 *
 *
**********************************/

#include <QDialog>
#include <QMenu>
#include <QMenuBar>
#include <QContextMenuEvent>
#include <QAction>
#include <QVector>
#include "gsl/gsl_histogram.h"
#include "dataset.h"
#include "qcustomplot.h"
#include "graphstyledialog.h"
#include "plotdatadialog.h"

namespace Ui {
class GraphWindow;
}

class GraphWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GraphWindow(std::shared_ptr<DataSet> DataSet, QWidget *parent = nullptr);
    explicit GraphWindow(std::shared_ptr<DataSet> DataSet, int numBins, QString histPlotName, QWidget *parent = nullptr);
    ~GraphWindow();


    void SetGraphSetting(std::shared_ptr<DataSet> DataSet); // Function to control the setting of the curve (dataset represenation in the figure)
    void SetHistogramSetting(QVector<double>* data, int numBins, QString histPlotName);
    QVector<double>* extractHistDataFromDataSet(std::shared_ptr<DataSet> dataSet);
    void SetFigureSetting(); // Function to control the setting of the figure itself
    void getXRnage(QString &upper,QString &lower);
    void getYRnage(QString &upper,QString &lower);
    void getLabel(QString &xLabel, QString &yLabel);


    static int FigureCounter; // Number of Figures created in the app ( defined as static because it is shared among all objects of this class)
    QList<QCPGraph*> AllGraphs;

private:
    Ui::GraphWindow *ui;
    QList<std::shared_ptr<DataSet>> AllDataSets;
    std::shared_ptr<DataSet> curretDataset;
    // context menu
    QMenu *ContextMenu=new QMenu(this);

    // sub-menu and actions for adding data
    QAction* actionAddData = new QAction("Add Data", this);

    // other actions
    QAction* actionEditStyle=new QAction("Edit Style", this);

    QAction* actionExportPlot = new QAction("Export Plot",this);

    QCPRange xRange,yRange;

    void contextMenuEvent(QContextMenuEvent *event);
    void ConstructContextMenu(QMenu *);
public slots:
    void receiveFigConfigure(int* width, int* length, QString* format);
private slots:
    void ChangeGraphStyle(QCPGraph * graph, QPen* pen);
    void OpenGraphStyleDialog();
    void OpenPlotDataDialog();
    void openExportPlotDialog();
    void receiveAllDataSets(QList<std::shared_ptr<DataSet>> receivedDataSets);
    void receiveChosenDataSet(std::shared_ptr<DataSet> chosenDataSet);
    void setAxisLabels(const QString &xLabel, const QString &yLabel);
    void setRanges(const QString &xLeftRange,const QString &xRightRange,const QString &yLeftRange,const QString &yRightRange);

signals:
    void requestAllDataSets_SIGNAL();
};

#endif // GRAPHWINDOW_H
