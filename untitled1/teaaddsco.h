#ifndef TEAADDSCO_H
#define TEAADDSCO_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class teaAddSco;
}

class teaAddSco : public QDialog
{
    Q_OBJECT

public:
    explicit teaAddSco(QWidget *parent = nullptr);
    ~teaAddSco();
    void setClassId(QString id);

private:
    Ui::teaAddSco *ui;
    QString classId;
};

#endif // TEAADDSCO_H
