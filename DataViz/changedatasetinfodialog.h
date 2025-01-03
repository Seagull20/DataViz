#ifndef CHANGEDATASETINFODIALOG_H
#define CHANGEDATASETINFODIALOG_H

/********************************
 *
 *  This class is defined to show the user a dialog to add information to the dataset
 *  an object of this class is the window in which the user can change the name of the dataset and adds
 *  a description to what this data represents
 *
 *
**********************************/


#include <QDialog>
#include "errordialog.h"

namespace Ui {
class ChangeDataSetInfoDialog;
}

class ChangeDataSetInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeDataSetInfoDialog(QWidget *parent = nullptr);
    ~ChangeDataSetInfoDialog();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ChangeDataSetInfoDialog *ui;
    void displayErrorDialog(int errCode);

signals:
signals:
    void sendNewDataSetName_SIGNAL(std::shared_ptr<QString> inputName);
    void sendNewDataSetDescription_SIGNAL(std::shared_ptr<QString> inputDescription);

};

#endif // CHANGEDATASETINFODIALOG_H
