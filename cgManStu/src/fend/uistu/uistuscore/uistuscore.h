#ifndef UISTUSCORE_H
#define UISTUSCORE_H

#include <QWidget>

namespace Ui {
class UiStuScore;
}

class UiStuScore : public QWidget
{
    Q_OBJECT

public:
    explicit UiStuScore(QWidget *parent = nullptr);
    ~UiStuScore();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void termSort(const QString& name);

    void termYearSort(const QString &name);
signals:
    void toUiStuMain();

private:
    Ui::UiStuScore *ui;

};

#endif // UISTUSCORE_H
