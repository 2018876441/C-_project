#ifndef UISTUMAIN_H
#define UISTUMAIN_H

#include <QWidget>

namespace Ui {
class UiStuMain;
}

class UiStuMain : public QWidget
{
    Q_OBJECT

public:
    explicit UiStuMain(QWidget *parent = nullptr);
    ~UiStuMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

signals:
    void toUiStuMessage();
    void toUiStuScore();
    void toUiStuModfiy();
    void toUilogin();

private:
    Ui::UiStuMain *ui;


};

#endif // UISTUMAIN_H
