#include "mantea.h"

Q_GLOBAL_STATIC(ManTea,ins)

ManTea::ManTea(QObject *parent)
    : QObject{parent}
{
    m_teaModel=new QStandardItemModel(this);
    setTableView();



}

ManTea::~ManTea()
{
    if(m_teaModel){
        delete m_teaModel;
        m_teaModel=nullptr;
    }
}

ManTea *ManTea::instance()
{
    return ins();
}

QStandardItemModel *ManTea::teaModel() const
{
    return m_teaModel;
}

void ManTea::setTableView()
{
    m_teaModel->setHorizontalHeaderLabels(QStringList()<<"课程编号"<<"课程名称"<<"课程人数");
    m_teaModel->setColumnCount(3);
}



void ManTea::selectClass()
{
    m_teaModel->clear();
    setTableView();

    teaClass tea;
    QSqlQuery sql=m_daotea.selectClass(MDB->user());
    m_teaModel->setRowCount(sql.size());
    int i=0;
    while(sql.next())
    {
        tea.classId=sql.value(0).toString();
        tea.name=sql.value(1).toString();
        QSqlQuery count=m_daotea.selectNumber(MDB->user(),tea.classId);
        count.next();
        tea.number=count.value(0).toString();

        QModelIndex i1=m_teaModel->index(i,0);
        QModelIndex i2=m_teaModel->index(i,1);
        QModelIndex i3=m_teaModel->index(i,2);

        m_teaModel->setData(i1,tea.classId);
        m_teaModel->setData(i2,tea.name);
        m_teaModel->setData(i3,tea.number);

        i++;
    }



}

QString ManTea::selectTeaName()
{
    QSqlQuery sql=m_daotea.selectTeaMessage(MDB->user());
    sql.next();
    return sql.value(0).toString();
}






