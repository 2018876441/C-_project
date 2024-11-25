#ifndef MANSTU_H
#define MANSTU_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/dao/daoStu/daostu.h"
#include "src/bend/man/mandb.h"
#include "src/bend/model/model.h"

#define MS ManStu::instance()

class ManStu : public QObject
{
    Q_OBJECT
public:
    explicit ManStu(QObject *parent = nullptr);
    ~ManStu();
    static ManStu* instance();

    QStandardItemModel *model() const;
    void setTableView();
    void selectScore();
    stuMessage selectStuMessage();
    bool updatePwd();
    bool findLesson(const QString& name);

private:
    QStandardItemModel* m_model=nullptr;
    daoStu m_daostu;
};

#endif // MANSTU_H
