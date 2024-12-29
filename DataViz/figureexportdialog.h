#ifndef FIGUREEXPORTDIALOG_H
#define FIGUREEXPORTDIALOG_H

#include <QDialog>
#include "dataset.h"


namespace Ui {
class figureExportDialog;
}

class figureExportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit figureExportDialog(DataSet& slectedDatasets, QWidget *parent = nullptr);
    ~figureExportDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::figureExportDialog *ui;
    int length, width;
    QString format;

signals:
    void exportFigure(int* width, int* length, QString* format);
};

#endif // FIGUREEXPORTDIALOG_H
