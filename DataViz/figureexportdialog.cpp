#include "figureexportdialog.h"
#include "qimagewriter.h"
#include "ui_figureexportdialog.h"

figureExportDialog::figureExportDialog(DataSet& slectedDataset, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::figureExportDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Configure Exporting Figure");

    ui->curretnDataset_label->setText(slectedDataset.getName());

    //Get supported image formats
    QList<QByteArray> supportedFormats = QImageWriter::supportedImageFormats();

    // Add supported formats to format_comboBox_2
    for (const QByteArray &format : supportedFormats) {
        ui->format_comboBox_2->addItem(QString(format).toUpper());
    }
    ui->format_comboBox_2->addItem("PDF");
    ui->format_comboBox_2->setCurrentText("PNG"); //default format

    //default size in pixel
    ui->length_lineEdit->setText("800");
    ui->Width_lineEdit_2->setText("600");

    connect(this, SIGNAL(exportFigure(int*, int*, QString*)), parent,SLOT(receiveFigConfigure(int*, int*, QString*)));
}

figureExportDialog::~figureExportDialog()
{
    delete ui;
}

void figureExportDialog::on_buttonBox_accepted()
{
    bool lengthOk, widthOk;
    int* length = new int(ui->length_lineEdit->text().toInt(&lengthOk));
    int* width = new int(ui->Width_lineEdit_2->text().toInt(&widthOk));
    QString* format = new QString(ui->format_comboBox_2->currentText()); // 获取格式

    // 校验有效性
    if (!lengthOk || *length <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Length must be a positive integer.");
        delete length;
        delete width;
        delete format;
        return;
    }

    if (!widthOk || *width <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Width must be a positive integer.");
        delete length;
        delete width;
        delete format;
        return;
    }

    emit exportFigure(width, length, format);
    this->accept();
}

