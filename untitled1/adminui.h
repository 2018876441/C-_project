#ifndef ADMINUI_H
#define ADMINUI_H

#include <QWidget>

namespace Ui {
class adminUi;
}

class adminUi : public QWidget
{
    Q_OBJECT

public:
    explicit adminUi(QWidget *parent = nullptr);
    ~adminUi();
    void setUser(QString user);


private:
    Ui::adminUi *ui;
    QString user;
};

#endif // ADMINUI_H
