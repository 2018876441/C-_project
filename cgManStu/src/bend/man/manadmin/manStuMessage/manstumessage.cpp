#include "manstumessage.h"

Q_GLOBAL_STATIC(manStuMessage,ins)

manStuMessage::manStuMessage(QObject *parent)
    : QObject{parent}
{
    m_model=new QStandardItemModel(this);
    setTableView();
}

manStuMessage *manStuMessage::instance()
{
    return ins();
}

QStandardItemModel *manStuMessage::model() const
{
    return m_model;
}

void manStuMessage::selectClassCount(const QString &college)
{
    m_model->clear();
    setTableView();

    QSqlQuery sql=m_daoadmin.selectClassCount(college);
    m_model->setRowCount(sql.size());
    int i=0;
    while(sql.next()){
        QString classId=sql.value(0).toString();
        QString number=sql.value(1).toString();

        QModelIndex i1=m_model->index(i,0);
        QModelIndex i2=m_model->index(i,1);

        m_model->setData(i1,classId);
        m_model->setData(i2,number);
        i++;
    }

}

void manStuMessage::selectShowStuMessage(const QString &college, const QString &classId)
{
    m_model->clear();
    setTableView1();

    QSqlQuery sql=m_daoadmin.selectShowStuMessage(college,classId);
    m_model->setRowCount(sql.size());
    int i=0;
    while(sql.next()){
        QString stuId=sql.value(0).toString();
        QString name=sql.value(1).toString();
        QString sex=sql.value(2).toString();
        QString classId=sql.value(3).toString();
        QString major=sql.value(4).toString();

        QModelIndex i1=m_model->index(i,0);
        QModelIndex i2=m_model->index(i,1);
        QModelIndex i3=m_model->index(i,2);
        QModelIndex i4=m_model->index(i,3);
        QModelIndex i5=m_model->index(i,4);

        m_model->setData(i1,stuId);
        m_model->setData(i2,name);
        m_model->setData(i3,sex);
        m_model->setData(i4,classId);
        m_model->setData(i5,major);
        i++;
    }

}

void manStuMessage::setTableView()
{
    m_model->setHorizontalHeaderLabels(QStringList()<<"班级号"<<"班级人数");
    m_model->setColumnCount(2);
}

void manStuMessage::setTableView1()
{
    m_model->setHorizontalHeaderLabels(QStringList()
                                       <<"学号"
                                       <<"姓名"
                                       <<"性别"
                                       <<"班级"
                                       <<"专业");
    m_model->setColumnCount(5);
}
