#ifndef STUREGISTERDIALOG_H
#define STUREGISTERDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class StuRegisterDialog;
}

class StuRegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StuRegisterDialog(QWidget *parent = nullptr);
    ~StuRegisterDialog();

    void inputInformation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StuRegisterDialog *ui;
};

#endif // STUREGISTERDIALOG_H
