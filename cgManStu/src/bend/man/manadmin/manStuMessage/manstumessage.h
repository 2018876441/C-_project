#ifndef MANSTUMESSAGE_H
#define MANSTUMESSAGE_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/dao/daoAdmin/daoadmin.h"
#include "src/bend/man/mandb.h"
#include "src/bend/model/model.h"

#define MSM manStuMessage::instance()

class manStuMessage : public QObject
{
    Q_OBJECT
public:
    explicit manStuMessage(QObject *parent = nullptr);

    static manStuMessage* instance();
    QStandardItemModel *model() const;
    void selectClassCount(const QString& college);
    void selectShowStuMessage(const QString& college,const QString& classId);

    void setTableView();
    void setTableView1();

signals:

private:
    QStandardItemModel* m_model=nullptr;
    daoadmin m_daoadmin;
};

#endif // MANSTUMESSAGE_H
