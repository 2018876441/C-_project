#ifndef UIADMINMAIN_H
#define UIADMINMAIN_H

#include <QWidget>
#include "src/bend/dao/daoAdmin/daoadmin.h"

namespace Ui {
class uiadminmain;
}

class uiadminmain : public QWidget
{
    Q_OBJECT

public:
    explicit uiadminmain(QWidget *parent = nullptr);
    ~uiadminmain();
    //void setName(const QString& userId);


private slots:
    void on_pushButton_5_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

signals:
    void toLoginUi();
    void toStuMessageUi();
    void toTeaMessageUi();
    void toManStuCourseUi();
    void toManTeaCourseUi();

private:
    Ui::uiadminmain *ui;
    daoadmin m_dao;
};

#endif // UIADMINMAIN_H
