#include "graphstyledialog.h"
#include "graphwindow.h"
#include "ui_graphstyledialog.h"

GraphStyleDialog::GraphStyleDialog(QList<QCPGraph*> graphs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphStyleDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Edit Style of " + parent->windowTitle());
    this->setWindowIcon(QIcon(":/icons/edit.svg"));

    allGraphs = graphs;

    foreach (QCPGraph* graph, graphs)
    {
        ui->graphSelectionBox->addItem(graph->name());
    }


    QPalette palette = ui->colourDisplayBox->palette();
    palette.setColor(QPalette::Base, Qt::blue);
    ui->colourDisplayBox->setPalette(palette);
    selectedColour = Qt::blue;

    //fill the line edit with initial value.
    GraphWindow *graphWindow = qobject_cast<GraphWindow*>(parent);
    graphWindow->getLabel(xLabel,yLabel);
    graphWindow->getXRnage(xRightRange,xLeftRange);
    graphWindow->getYRnage(yRightRange,yLeftRange);
    ui->X_label_lineEdit->setText(xLabel);
    ui->Y_label_lineEdit->setText(yLabel);
    ui->X_Range_L->setText(xLeftRange);
    ui->X_Range_R->setText(xRightRange);
    ui->Y_Range_L->setText(yLeftRange);
    ui->Y_Range_R->setText(yRightRange);


    connect(this, SIGNAL(ChangeGraphStyle_SIGNAL(QCPGraph*, QPen*)), parent, SLOT(ChangeGraphStyle(QCPGraph*, QPen*)));
    connect(this, SIGNAL(ChangeAxisLabels(QString,QString)), parent, SLOT(setAxisLabels(QString,QString)));
    connect(this,SIGNAL(ChangeRanges(QString,QString,QString,QString)),parent,SLOT(setRanges(QString,QString,QString,QString)));
}

GraphStyleDialog::~GraphStyleDialog()
{
    delete ui;
}

void GraphStyleDialog::on_selectColourButton_clicked()
{
    QColor colour = QColorDialog::getColor(Qt::blue, this, "Select Colour");
    try { // check to see if user cancelled colour selection
        if (colour.isValid())
        {
            QPalette palette = ui->colourDisplayBox->palette();
            palette.setColor(QPalette::Base, colour);
            ui->colourDisplayBox->setPalette(palette);
            selectedColour = colour;
        } else throw colour;
    }
    catch(QColor colour)
    {
        // do nothing. leave colour as default (blue, set in the constructor) or whatever user has previously set it as
    }

}


void GraphStyleDialog::on_submitButton_accepted()
{
    int selectedWidth = ui->widthSelectionBox->currentText().toInt();
    QString styleText = ui->styleSelectionBox->currentText();
    xLabel = ui->X_label_lineEdit->text();
    yLabel = ui->Y_label_lineEdit->text();

    xLeftRange = ui->X_Range_L->text();
    xRightRange = ui->X_Range_R->text();
    yLeftRange = ui->Y_Range_L->text();
    yRightRange = ui->Y_Range_R->text();
    QVector<double> xRange, yRange;

    auto xValidationResult = rangeChecker(xLeftRange,xRightRange,xRange);
    auto yValidationResult = rangeChecker(yLeftRange,yRightRange,yRange);

    if (xValidationResult.has_value() ||yValidationResult.has_value() ) {

        if(xValidationResult.has_value()){
            QMessageBox::warning(this, "Input Error", xValidationResult.value());
            return;
        }else{
            QMessageBox::warning(this, "Input Error", yValidationResult.value());
            return;
        }
    }

    Qt::PenStyle selectedStyle;

    try { // check for errors in line width selection
        if (!selectedWidth)
        {
            throw 4;
        }
    }
    catch(int errCode)
    {
        selectedWidth = 1; // set to default 1
        displayErrorDialog(errCode);
    }

    try{ // check for errors in line style selection
        if (styleText == "Solid")
            selectedStyle = Qt::SolidLine;
        else if (styleText == "Dashed")
            selectedStyle = Qt::DashLine;
        else if (styleText == "Dash Dot")
            selectedStyle = Qt::DashDotLine;
        else if (styleText == "Dotted")
            selectedStyle = Qt::DotLine;
        else
            throw 3;
    }
    catch(int errCode)
    {
        selectedStyle = Qt::SolidLine; // default is solid line
        displayErrorDialog(errCode);
    }

    pen = new QPen(selectedColour, selectedWidth, selectedStyle);

    foreach (QCPGraph* graph, allGraphs)
    {
        if (ui->graphSelectionBox->currentText() == graph->name())
        {
            selectedGraph = graph;
        }
    }

    emit ChangeGraphStyle_SIGNAL(selectedGraph, pen);
    emit ChangeAxisLabels(xLabel, yLabel);
    emit ChangeRanges(xLeftRange,xRightRange,yLeftRange,yRightRange);
    GraphStyleDialog::close();
}


void GraphStyleDialog::on_submitButton_rejected()
{
    GraphStyleDialog::close();
}

void GraphStyleDialog::displayErrorDialog(int errCode)
{
    ErrorDialog* Error_dlg=new ErrorDialog(errCode, this);
    Error_dlg->exec();
    delete Error_dlg;
}

std::optional<QString> GraphStyleDialog::rangeChecker(const QString &leftRange, const QString &rightRange, QVector<double> &Range)
{
    if (leftRange.isEmpty() || rightRange.isEmpty()) {
        return "One or both range values are empty.";
    }

    // check digital
    bool leftIsNumber, rightIsNumber;
    double leftValue = leftRange.toDouble(&leftIsNumber);
    double rightValue = rightRange.toDouble(&rightIsNumber);

    if (!leftIsNumber || !rightIsNumber) {
        return "Both range values must be valid numbers.";
    }

    // check order of range
    if (rightValue <= leftValue) {
        return "The right range value must be greater than the left range value.";
    }

    Range = QVector<double>{leftValue, rightValue};
    // pass all check return null
    return std::nullopt;
}
