#include "manteamessage.h"

Q_GLOBAL_STATIC(manTeaMessage,ins)

manTeaMessage::manTeaMessage(QObject *parent)
    : QObject{parent}
{
    m_model=new QStandardItemModel(this);
    setTableView();

}

manTeaMessage *manTeaMessage::instance()
{
    return ins();
}

void manTeaMessage::setTableView()
{
    m_model->setColumnCount(4);
    m_model->setHorizontalHeaderLabels(QStringList()<<"教师编号"
                                                     <<"教师姓名"
                                                     <<"性别"
                                                     <<"入职状态");
}

void manTeaMessage::selectTeaMessage(const QString &college)
{
    m_model->clear();
    setTableView();

    QSqlQuery sql= m_daoadmin.selectShowTeaMessage(college);
    m_model->setRowCount(sql.size());
    int i=0;
    while(sql.next()){
        QString id=sql.value(0).toString();
        QString name=sql.value(1).toString();
        QString sex=sql.value(2).toString();
        QString state=sql.value(3).toString();

        QModelIndex i0=m_model->index(i,0);
        QModelIndex i1=m_model->index(i,1);
        QModelIndex i2=m_model->index(i,2);
        QModelIndex i3=m_model->index(i,3);

        m_model->setData(i0,id);
        m_model->setData(i1,name);
        m_model->setData(i2,sex);
        m_model->setData(i3,state);
        i++;
    }
}

QStandardItemModel *manTeaMessage::model() const
{
    return m_model;
}
