#include "plotdatadialog.h"
#include "ui_plotdatadialog.h"

PlotDataDialog::PlotDataDialog(QList<std::shared_ptr<DataSet>> dataSetList, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlotDataDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Data To Plot");

    AllDataSets = dataSetList;

    foreach(auto dataSet, dataSetList)
    {
        ui->dataSelectionBox->addItem(dataSet->getName());
    }

    connect(this, SIGNAL(sendChosenDataSet_SIGNAL(std::shared_ptr<DataSet>)), parent, SLOT(receiveChosenDataSet(std::shared_ptr<DataSet>)));
}

PlotDataDialog::~PlotDataDialog()
{
    delete ui;
}

void PlotDataDialog::on_buttonBox_accepted()
{
    int index = ui->dataSelectionBox->currentIndex();
    //DataSet* selectedDataSet = AllDataSets[index];

    emit sendChosenDataSet_SIGNAL(AllDataSets[index]);

    PlotDataDialog::close();
}


void PlotDataDialog::on_buttonBox_rejected()
{
    PlotDataDialog::close();
}

