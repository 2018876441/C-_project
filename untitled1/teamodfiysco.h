#ifndef TEAMODFIYSCO_H
#define TEAMODFIYSCO_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
namespace Ui {
class teaModfiySco;
}

class teaModfiySco : public QDialog
{
    Q_OBJECT

public:
    explicit teaModfiySco(QWidget *parent = nullptr);
    ~teaModfiySco();
    void setClassId(QString id);

private:
    Ui::teaModfiySco *ui;
    QString classId;
};

#endif // TEAMODFIYSCO_H
