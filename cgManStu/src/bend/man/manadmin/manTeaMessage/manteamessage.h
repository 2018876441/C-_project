#ifndef MANTEAMESSAGE_H
#define MANTEAMESSAGE_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/dao/daoAdmin/daoadmin.h"
#include "src/bend/man/mandb.h"
#include "src/bend/model/model.h"

#define MTM manTeaMessage::instance()

class manTeaMessage : public QObject
{
    Q_OBJECT
public:
    explicit manTeaMessage(QObject *parent = nullptr);

    static manTeaMessage* instance();
    void setTableView();
    void selectTeaMessage(const QString& college);

    QStandardItemModel *model() const;

signals:

private:
    QStandardItemModel* m_model=nullptr;
    daoadmin m_daoadmin;
};

#endif // MANTEAMESSAGE_H
