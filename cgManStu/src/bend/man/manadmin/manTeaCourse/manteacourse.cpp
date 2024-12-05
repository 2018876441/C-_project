#include "manteacourse.h"

Q_GLOBAL_STATIC(manTeaCourse,ins)

manTeaCourse::manTeaCourse(QObject *parent)
    : QObject{parent}
{
    m_model=new QStandardItemModel(this);
    setTableView();
}

manTeaCourse::~manTeaCourse()
{
    if(m_model){
        delete m_model;
        m_model=nullptr;
    }
}

manTeaCourse *manTeaCourse::instance()
{
    return ins();
}

void manTeaCourse::setTableView()
{
    m_model->setHorizontalHeaderLabels(QStringList()<<"教师编号"<<"教师姓名");
    m_model->setColumnCount(2);
}

void manTeaCourse::setTableView1()
{
    m_model->setHorizontalHeaderLabels(QStringList()<<"课程编号"<<"课程名称"<<"成绩提交状态");
    m_model->setColumnCount(3);
}

void manTeaCourse::selectTeaMessage()
{
    m_model->clear();
    setTableView();

    QSqlQuery sql=m_daoadmin.selectTeaMessage(MDB->college());
    m_model->setRowCount(sql.size());
    int i=0;
    while(sql.next()){
        QString id=sql.value(0).toString();
        QString name=sql.value(1).toString();

        QModelIndex i0=m_model->index(i,0);
        QModelIndex i1=m_model->index(i,1);

        m_model->setData(i0,id);
        m_model->setData(i1,name);
        i++;
    }
}

void manTeaCourse::selectTeaCourse(const QString &userId)
{
    m_model->clear();
    setTableView1();

    QSqlQuery sql=m_daoadmin.selectTeaCoure(userId,MDB->college());
    m_model->setRowCount(sql.size());
    int i=0;
    while(sql.next()){
        QString id=sql.value(0).toString();
        QString name=sql.value(1).toString();
        QString state=sql.value(2).toInt()==1?"提交":"修改";

        QModelIndex i0=m_model->index(i,0);
        QModelIndex i1=m_model->index(i,1);
        QModelIndex i2=m_model->index(i,2);


        m_model->setData(i0,id);
        m_model->setData(i1,name);
        m_model->setData(i2,state);
        i++;
    }
}

QStandardItemModel *manTeaCourse::model() const
{
    return m_model;
}
