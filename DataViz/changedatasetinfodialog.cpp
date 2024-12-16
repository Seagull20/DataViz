#include "changedatasetinfodialog.h"
#include "ui_changedatasetinfodialog.h"
#include "datasetwindow.h"
ChangeDataSetInfoDialog::ChangeDataSetInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeDataSetInfoDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Change Dataset Information");
    this->setWindowIcon(QIcon(":/icons/edit.svg"));

    DataSetWindow *dataSetWindow = qobject_cast<DataSetWindow*>(parent);
    if (dataSetWindow) {
        ui->lineEdit->setText(dataSetWindow->getDisplayedDataSet()->getName()); // fectch the name stored in dataset object
        ui->textEdit->setText(dataSetWindow->getDisplayedDataSet()->getDescription()); // fectch the descrption stored in dataset object
    }

    connect(this, SIGNAL(sendNewDataSetName_SIGNAL(QString*)), parent, SLOT(receiveNewDataSetName(QString*)));
    connect(this,SIGNAL(sendNewDataSetDescription_SIGNAL(QString*)),parent,SLOT(receiveNewDataSetDescription(QString*)));
}

ChangeDataSetInfoDialog::~ChangeDataSetInfoDialog()
{
    delete ui;
}

void ChangeDataSetInfoDialog::on_buttonBox_accepted()
{
    try {
        QString* inputName = new QString(ui->lineEdit->text());
        QString* inputDescription = new QString(ui->textEdit->toPlainText());

        if(inputName->length() > 0)
        {

            emit sendNewDataSetName_SIGNAL(inputName);
        } else {
            delete inputName;
        }
        if (inputDescription->length() > 0) {
            emit sendNewDataSetDescription_SIGNAL(inputDescription);
        }else{
            delete inputDescription;
        }
    }
    catch(int errCode)
    {
        displayErrorDialog(errCode);
    }

    ChangeDataSetInfoDialog::close();
}

void ChangeDataSetInfoDialog::on_buttonBox_rejected()
{
    ChangeDataSetInfoDialog::close();
}

void ChangeDataSetInfoDialog::displayErrorDialog(int errCode)
{
    ErrorDialog* Error_dlg=new ErrorDialog(errCode, this);
    Error_dlg->exec();
    delete Error_dlg;
}
