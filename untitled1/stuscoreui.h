#ifndef STUSCOREUI_H
#define STUSCOREUI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>
namespace Ui {
class StuScoreUi;
}

class StuScoreUi : public QWidget
{
    Q_OBJECT

public:
    explicit StuScoreUi(QWidget *parent = nullptr);
    ~StuScoreUi();

    void initTableWidgetList();//初始化表格
    void initTableWidgetData();//初始化表格数据
    void initTableTitle();//加载窗体标题
    void setUser(QString user);

signals:
    void returnToStuUiSiganls();

private slots:
    void on_returnBtn_clicked();

private:
    Ui::StuScoreUi *ui;
    QString user;
};

#endif // STUSCOREUI_H
