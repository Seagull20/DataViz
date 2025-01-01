#include "interpolationdialog.h"
#include "ui_interpolationdialog.h"
#include <gsl/gsl_interp.h>
#include <gsl/gsl_spline.h>
#include <QMessageBox>

interpolationDialog::interpolationDialog(QList<std::shared_ptr<DataSet>> datasets,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::interpolationDialog)
{
    ui->setupUi(this);
    setWindowTitle("Interpolation");
    availableDatasets = datasets;

    for (auto dataset : datasets) {
        ui->X_comboBox->addItem(dataset->getName());
        ui->Y_comboBox->addItem(dataset->getName());
    }

    ui->Interpolation_comboBox->addItem("Linear Interpolation", QVariant::fromValue(gsl_interp_linear));
    ui->Interpolation_comboBox->addItem("Polynomial Interpolation", QVariant::fromValue(gsl_interp_polynomial));
    ui->Interpolation_comboBox->addItem("Cubic Spline", QVariant::fromValue(gsl_interp_cspline));
    ui->Interpolation_comboBox->addItem("Cubic Spline Periodic", QVariant::fromValue(gsl_interp_cspline_periodic));
    ui->Interpolation_comboBox->addItem("Akima Spline", QVariant::fromValue(gsl_interp_akima));
    ui->Interpolation_comboBox->addItem("Akima Spline Periodic", QVariant::fromValue(gsl_interp_akima_periodic));
    ui->Interpolation_comboBox->addItem("Steffen's Method", QVariant::fromValue(gsl_interp_steffen));

    ui->Interpolation_comboBox->setCurrentIndex(0); // defual setting, Index 0 corresponds to "Linear Interpolation"

}

interpolationDialog::~interpolationDialog()
{
    //gsl_matrix_free(interpolatedMatrix);
    delete ui;
}

void interpolationDialog::on_buttonBox_accepted()
{
    int xIndex = ui->X_comboBox->currentIndex();
    int yIndex = ui->Y_comboBox->currentIndex();

    if (xIndex < 0 || yIndex < 0 || xIndex == yIndex) {
        qDebug() << "Invalid dataset selection!";
        return;
    }

    auto xDataset = availableDatasets[xIndex];
    auto yDataset = availableDatasets[yIndex];

    gsl_vector_view xValues = gsl_matrix_column(xDataset->getMatrix(), 0);
    gsl_vector_view yValues = gsl_matrix_column(xDataset->getMatrix(), 1);
    gsl_vector_view newXValues = gsl_matrix_column(yDataset->getMatrix(),0);

    for (size_t i = 1; i < xValues.vector.size; ++i) {
        if (gsl_vector_get(&xValues.vector, i) <= gsl_vector_get(&xValues.vector, i - 1)) {
            QMessageBox::critical(this, "Interpolation Error", "X values must be monotonically increasing.");
            return;
        }
    }

    //TO DO:check if the points is enough

    gsl_interp *interp = gsl_interp_alloc(gsl_interp_linear, xValues.vector.size);
    gsl_interp_accel *acc = gsl_interp_accel_alloc();
    double* array = new double[xDataset->getMatrix()->size1];

    for (size_t i = 0; i < xDataset->getMatrix()->size1; ++i) {
        array[i] = gsl_matrix_get(xDataset->getMatrix(), i, 0);
    }
    gsl_interp_init(interp, xValues.vector.data, yValues.vector.data, xValues.vector.size);

    interpolatedMatrix = gsl_matrix_alloc(newXValues.vector.size, 2);

    for (size_t i = 0; i < newXValues.vector.size; ++i) {
        double x = gsl_vector_get(&newXValues.vector,i);
        double y = gsl_interp_eval(interp, xValues.vector.data, yValues.vector.data, x, acc);

        gsl_matrix_set(interpolatedMatrix, i, 0, x);
        gsl_matrix_set(interpolatedMatrix, i, 1, y);
    }


    gsl_interp_free(interp);
    gsl_interp_accel_free(acc);
    delete[] array;

}

gsl_matrix *interpolationDialog::getInterpolatedMatrix() const
{
    return interpolatedMatrix;
}

