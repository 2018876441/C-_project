#ifndef UITEA_H
#define UITEA_H

#include <QWidget>
#include <QTableView>

namespace Ui {
class UiTea;
}

class UiTea : public QWidget
{
    Q_OBJECT

public:
    explicit UiTea(QWidget *parent = nullptr);
    ~UiTea();
    void init();

signals:
    void toLoginUi();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UiTea *ui;
    QTableView* m_tableView0=nullptr;
    QTableView* m_tableView1=nullptr;

};

#endif // UITEA_H
