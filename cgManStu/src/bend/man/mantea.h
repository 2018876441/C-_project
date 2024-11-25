#ifndef MANTEA_H
#define MANTEA_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/dao/daoTea/daotea.h"
#include "src/bend/man/mandb.h"
#include "src/bend/model/model.h"

#define MT ManTea::instance()

class ManTea : public QObject
{
    Q_OBJECT
public:
    explicit ManTea(QObject *parent = nullptr);
    ~ManTea();
    static ManTea* instance();

    QStandardItemModel *teaModel() const;
    void setTableView();


    void selectClass();
    QString selectTeaName();


private:
    QStandardItemModel* m_teaModel=nullptr;
    DaoTea m_daotea;
};

#endif // MANTEA_H
