#ifndef TEAADDSCO_H
#define TEAADDSCO_H

#include <QDialog>

namespace Ui {
class teaAddSco;
}

class teaAddSco : public QDialog
{
    Q_OBJECT

public:
    explicit teaAddSco(QWidget *parent = nullptr);
    ~teaAddSco();

private:
    Ui::teaAddSco *ui;
};

#endif // TEAADDSCO_H
