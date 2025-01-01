#include "changedatasetinfodialog.h"
#include "qregularexpression.h"
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

    connect(this, SIGNAL(sendNewDataSetName_SIGNAL(std::shared_ptr<QString>)), parent, SLOT(receiveNewDataSetName(std::shared_ptr<QString>)));
    connect(this,SIGNAL(sendNewDataSetDescription_SIGNAL(std::shared_ptr<QString>)),parent,SLOT(receiveNewDataSetDescription(std::shared_ptr<QString>)));
}

ChangeDataSetInfoDialog::~ChangeDataSetInfoDialog()
{
    delete ui;
}

void ChangeDataSetInfoDialog::on_buttonBox_accepted()
{
    try {
        auto inputName = std::make_shared<QString>(ui->lineEdit->text().trimmed());
        auto inputDescription = std::make_shared<QString>(ui->textEdit->toPlainText().trimmed());

        // Check if inputName is valid (not empty and not purely numeric)
        QRegularExpression onlyNumbersRegex("^[0-9]+$");
        if (inputName->length() > 0 && !onlyNumbersRegex.match(*inputName).hasMatch()) {
            emit sendNewDataSetName_SIGNAL(inputName);
        } else {
            // Show error message for invalid inputName
            if (inputName->length() == 0) {
                throw 2; // Error: Name is empty
            } else if (onlyNumbersRegex.match(*inputName).hasMatch()) {
                throw 9; // Error: Name is numeric
            }
        }

        // Check if inputDescription is valid (not empty)
        if (inputDescription->length() > 0) {
            emit sendNewDataSetDescription_SIGNAL(inputDescription);
        }
    }
    catch (int errCode)
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
