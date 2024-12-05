#ifndef UIMANTEACOURSE_H
#define UIMANTEACOURSE_H

#include <QWidget>
#include <QTableView>
#include <QHeaderView>
#include "src/bend/man/manadmin/manTeaCourse/manteacourse.h"
namespace Ui {
class UiManTeaCourse;
}

class UiManTeaCourse : public QWidget
{
    Q_OBJECT

public:
    explicit UiManTeaCourse(QWidget *parent = nullptr);
    ~UiManTeaCourse();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void toMainUi();

private:
    Ui::UiManTeaCourse *ui;
    QTableView* tv0=nullptr;
    QTableView* tv1=nullptr;
};

#endif // UIMANTEACOURSE_H
