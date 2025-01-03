#include "datasetwindow.h"
#include "ui_datasetwindow.h"

DataSetWindow::DataSetWindow(std::shared_ptr<DataSet> DataSet,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataSetWindow)
{// This is called when a dataset is to be plot in a table displayed in a mdisubwindow
    ui->setupUi(this);

    // Initialising the member data
    DisplayedDataSet=DataSet;


    // Setting up the table
    ui->Table->setColumnCount(2); // 2 columns one for x and one for y
    QTableWidgetItem* TableItem=nullptr; // Variable used to ppulate the table

    // Setting the header lalebels of the columns
    QStringList ColumnHeaders;
    ColumnHeaders<<"x"<<"y";
    ui->Table->setHorizontalHeaderLabels(ColumnHeaders);


    // Populating the table
    for (int i=0;i<DataSet->Size();i++)
    {
        ui->Table->insertRow(i); // Adds a new row to the table

        auto ValuePtr = DataSet->getPoint(i);
        if (ValuePtr != nullptr) {
            QString x_value = QString::number(ValuePtr[0]);
            QString y_value = QString::number(ValuePtr[1]);

            // set X value
            TableItem = new QTableWidgetItem(x_value, 0);
            ui->Table->setItem(i, 0, TableItem);

            // set Y value
            TableItem = new QTableWidgetItem(y_value, 0);
            ui->Table->setItem(i, 1, TableItem);
        } else {
            qDebug() << "Invalid data point at index" << i;
        }


    }


   // Setting the title of the window
   this->setWindowTitle("Dataset: "+DataSet->getName());

   // Constructing the context menu so it is ready to be called whenever
   ConstructContextMenu(ContextMenu);


   // Setting icons for actions:
    XYPlot->setIcon(QIcon(":/icons/graph.svg"));
    actionEditDataSetInfo->setIcon(QIcon(":/icons/edit.svg"));
    HistPlot->setIcon(QIcon(":/icons/histogram.svg"));



   // connecting actions to responses via signal-slot mechanism:
    connect(XYPlot,SIGNAL(triggered()),this,SLOT(SendXYDataSetToPlot()));
    connect(HistPlot,SIGNAL(triggered()),this,SLOT(Open_HistPlotDialog()));
    connect(actionEditDataSetInfo, SIGNAL(triggered()), this, SLOT(displayChangeDataSetNameDialog()));

}

DataSetWindow::~DataSetWindow()
{ // This function is called when the window is closed (used for cleanup)
    // Disconnect signals to prevent accessing invalid memory
    disconnect(XYPlot, SIGNAL(triggered()), this, SLOT(SendXYDataSetToPlot()));
    disconnect(HistPlot, SIGNAL(triggered()), this, SLOT(Open_HistPlotDialog()));
    disconnect(actionEditDataSetInfo, SIGNAL(triggered()), this, SLOT(displayChangeDataSetNameDialog()));

    emit deleteDataSet_SIGNAL(DisplayedDataSet);

    delete PlotSubMenu;
    delete ContextMenu;
    delete XYPlot;
    delete HistPlot;
    delete ui;
}

void DataSetWindow::contextMenuEvent(QContextMenuEvent *event)
{ // This function is called when the user right-clicks on the datasetwindow
    ContextMenu->popup(event->globalPos()); // displaying the menu where the user clicks
}

void DataSetWindow::ConstructContextMenu(QMenu *)
{// This function is called in the constructor to build the context menu so that it does not need to be built everytime from scratch
    PlotSubMenu->setIcon(QIcon(":/icons/plot.svg")); // Setting icon of the submenu
    PlotSubMenu->addAction(XYPlot); // Add the action to the menu
    PlotSubMenu->addAction(HistPlot);
    ContextMenu->addMenu(PlotSubMenu); // Add the submenus to the main menu
    ContextMenu->addAction(actionEditDataSetInfo);
}


void DataSetWindow::SendXYDataSetToPlot()
{// A signal to tell the parent widnow that the dataset must be plotted when the
 // user choses XYPlot from the context Menu of the DatSetWidnow
   emit Plot_XYPlot_SIGNAL(DisplayedDataSet);
}

void DataSetWindow::Open_HistPlotDialog()
{// A signal to tell the parent window to open the Histogram plotting window
    emit Open_HistPlotDialog_SIGNAL(DisplayedDataSet);
}

void DataSetWindow::displayChangeDataSetNameDialog()
{
   ChangeDataSetInfoDialog* ChangeDataSetName_dlg=new ChangeDataSetInfoDialog(this);
   ChangeDataSetName_dlg->exec();
   delete ChangeDataSetName_dlg;
}

void DataSetWindow::receiveNewDataSetName(std::shared_ptr<QString> name)
{

   DisplayedDataSet->setName(name);
   this->setWindowTitle("Dataset: "+DisplayedDataSet->getName());


   emit refreshPlottingActions_SIGNAL(); // instruct parent window to update the main menu actions
}

void DataSetWindow::receiveNewDataSetDescription(std::shared_ptr<QString> description)
{
    DisplayedDataSet->setDescription(description);
}

std::shared_ptr<DataSet> DataSetWindow::getDisplayedDataSet() const
{
    return DisplayedDataSet;
}
