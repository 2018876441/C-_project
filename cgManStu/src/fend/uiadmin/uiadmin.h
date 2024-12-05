#ifndef UIADMIN_H
#define UIADMIN_H

#include <QWidget>

namespace Ui {
class uiadmin;
}

class uiadmin : public QWidget
{
    Q_OBJECT

public:
    explicit uiadmin(QWidget *parent = nullptr);
    ~uiadmin();

signals:
    void toLoginUi();

private:
    Ui::uiadmin *ui;
};

#endif // UIADMIN_H
