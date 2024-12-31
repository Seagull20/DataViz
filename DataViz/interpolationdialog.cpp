#include "interpolationdialog.h"
#include "ui_interpolationdialog.h"

interpolationDialog::interpolationDialog(QList<DataSet*> datasets,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::interpolationDialog)
{
    ui->setupUi(this);
    setWindowTitle("Interpolation");
    availableDatasets = datasets;

    for (DataSet* dataset : datasets) {
        ui->X_comboBox->addItem(dataset->getName());
        ui->Y_comboBox->addItem(dataset->getName());
    }
}

interpolationDialog::~interpolationDialog()
{
    delete ui;
}

void interpolationDialog::on_buttonBox_accepted()
{

}

