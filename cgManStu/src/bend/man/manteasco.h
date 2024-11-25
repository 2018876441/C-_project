#ifndef MANTEASCO_H
#define MANTEASCO_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/dao/daoTea/daotea.h"
#include "src/bend/man/mandb.h"
#include "src/bend/model/model.h"
#include <QMap>

#define MTS ManTeaSco::instance()

class ManTeaSco : public QObject
{
    Q_OBJECT
public:
    explicit ManTeaSco(QObject *parent = nullptr);
    ~ManTeaSco();
    static ManTeaSco* instance();

    void setTableView();
    void selectClassStuMessage(const QString& classId);
    QStandardItemModel *teaModel() const;
    void update();

signals:

private:
    QStandardItemModel* m_teaModel=nullptr;
    DaoTea m_daotea;
    QMap<int,QString> m_score;

};

#endif // MANTEASCO_H
