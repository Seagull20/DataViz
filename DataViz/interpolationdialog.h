#ifndef INTERPOLATIONDIALOG_H
#define INTERPOLATIONDIALOG_H

#include <QDialog>
#include "dataset.h"
namespace Ui {
class interpolationDialog;
}

class interpolationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit interpolationDialog(QList<std::shared_ptr<DataSet>> datasets,QWidget *parent = nullptr);
    ~interpolationDialog();


    gsl_matrix *getInterpolatedMatrix() const;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::interpolationDialog *ui;

    QList<std::shared_ptr<DataSet>> availableDatasets;
    gsl_matrix *interpolatedMatrix;
};

#endif // INTERPOLATIONDIALOG_H
