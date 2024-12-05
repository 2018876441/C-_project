#ifndef MANTEACOURSE_H
#define MANTEACOURSE_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/dao/daoAdmin/daoadmin.h"
#include "src/bend/man/mandb.h"
#include "src/bend/model/model.h"

#define MTC manTeaCourse::instance()

class manTeaCourse : public QObject
{
    Q_OBJECT
public:
    explicit manTeaCourse(QObject *parent = nullptr);
    ~manTeaCourse();
    static manTeaCourse* instance();

    void setTableView();
    void setTableView1();
    void selectTeaMessage();
    void selectTeaCourse(const QString& userId);
    QStandardItemModel *model() const;

signals:
private:
    QStandardItemModel* m_model=nullptr;
    daoadmin m_daoadmin;

};

#endif // MANTEACOURSE_H
