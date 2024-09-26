#ifndef STUSCOREUI_H
#define STUSCOREUI_H

#include <QWidget>

namespace Ui {
class StuScoreUi;
}

class StuScoreUi : public QWidget
{
    Q_OBJECT

public:
    explicit StuScoreUi(QWidget *parent = nullptr);
    ~StuScoreUi();

private:
    Ui::StuScoreUi *ui;
};

#endif // STUSCOREUI_H
