#include "src/bend/man/manstu.h"

Q_GLOBAL_STATIC(ManStu,ins)

ManStu::ManStu(QObject *parent)
    : QObject{parent}
{
    m_model=new QStandardItemModel(this);
    setTableView();
}

ManStu::~ManStu()
{
    if(m_model){
        delete m_model;
        m_model=nullptr;
    }
}

ManStu *ManStu::instance()
{
    return ins();
}

QStandardItemModel *ManStu::model() const
{
    return m_model;
}

void ManStu::setTableView()
{
    m_model->setHorizontalHeaderLabels(QStringList()<<"课程编号"<<"课程名称"<<"成绩"<<"授课老师"<<"开课学期");
    m_model->setColumnCount(5);
}

void ManStu::selectScore()
{
    m_model->clear();
    setTableView();

    stuScore stu;
    QSqlQuery sql= m_daostu.selectScore(MDB->user());
    m_model->setRowCount(sql.size());
    int i=0;
    while(sql.next())
    {
        stu.lessonId=sql.value(0).toString();
        stu.lessonName=sql.value(1).toString();
        stu.score=sql.value(2).toString();
        stu.tea=sql.value(3).toString();
        stu.term=sql.value(4).toString();

        QModelIndex i1=m_model->index(i,0);
        QModelIndex i2=m_model->index(i,1);
        QModelIndex i3=m_model->index(i,2);
        QModelIndex i4=m_model->index(i,3);
        QModelIndex i5=m_model->index(i,4);

        m_model->setData(i1,stu.lessonId);
        m_model->setData(i2,stu.lessonName);
        m_model->setData(i3,stu.score);
        m_model->setData(i4,stu.tea);
        m_model->setData(i5,stu.term);
        i++;
    }
}

stuMessage ManStu::selectStuMessage()
{
    stuMessage stu;
    QSqlQuery sql=m_daostu.selectStuMess(MDB->user());
    sql.next();
    stu.StuId=sql.value(0).toString();
    stu.name=sql.value(1).toString();
    stu.password=sql.value(2).toString();
    stu.sex=sql.value(3).toString();
    stu.college=sql.value(4).toString();
    stu.major=sql.value(5).toString();
    stu.classId=sql.value(6).toString();
    return stu;
}

bool ManStu::updatePwd()
{
    return m_daostu.updatePassWord(MDB->user(),MDB->pwd());

}

bool ManStu::findLesson(const QString &name)
{
    QSqlQuery sql= m_daostu.findLesson(MDB->user(),name);
    if(!sql.next()) return false;

    m_model->clear();
    setTableView();
    m_model->setRowCount(sql.size());

    stuScore stu;
    stu.lessonId=sql.value(0).toString();
    stu.lessonName=sql.value(1).toString();
    stu.score=sql.value(2).toString();
    stu.tea=sql.value(3).toString();
    stu.term=sql.value(4).toString();

    QModelIndex i1=m_model->index(0,0);
    QModelIndex i2=m_model->index(0,1);
    QModelIndex i3=m_model->index(0,2);
    QModelIndex i4=m_model->index(0,3);
    QModelIndex i5=m_model->index(0,4);

    m_model->setData(i1,stu.lessonId);
    m_model->setData(i2,stu.lessonName);
    m_model->setData(i3,stu.score);
    m_model->setData(i4,stu.tea);
    m_model->setData(i5,stu.term);

    return true;
}

void ManStu::selectSortTerm(const QString &name)
{
    m_model->clear();
    setTableView();

    stuScore stu;
    QSqlQuery sql= m_daostu.selectSortTerm(MDB->user(),name);
    m_model->setRowCount(sql.size());
    int i=0;
    while(sql.next())
    {
        stu.lessonId=sql.value(0).toString();
        stu.lessonName=sql.value(1).toString();
        stu.score=sql.value(2).toString();
        stu.tea=sql.value(3).toString();
        stu.term=sql.value(4).toString();

        QModelIndex i1=m_model->index(i,0);
        QModelIndex i2=m_model->index(i,1);
        QModelIndex i3=m_model->index(i,2);
        QModelIndex i4=m_model->index(i,3);
        QModelIndex i5=m_model->index(i,4);

        m_model->setData(i1,stu.lessonId);
        m_model->setData(i2,stu.lessonName);
        m_model->setData(i3,stu.score);
        m_model->setData(i4,stu.tea);
        m_model->setData(i5,stu.term);
        i++;
    }
}

void ManStu::selectSortTermYear(const QString &name1,const QString& name2)
{
    m_model->clear();
    setTableView();

    stuScore stu;
    QSqlQuery sql= m_daostu.selectSortTerm(MDB->user(),name1);
    QSqlQuery sql1= m_daostu.selectSortTerm(MDB->user(),name2);
    m_model->setRowCount(sql.size()+sql1.size());
    int i=0;
    while(sql.next())
    {
        stu.lessonId=sql.value(0).toString();
        stu.lessonName=sql.value(1).toString();
        stu.score=sql.value(2).toString();
        stu.tea=sql.value(3).toString();
        stu.term=sql.value(4).toString();

        QModelIndex i1=m_model->index(i,0);
        QModelIndex i2=m_model->index(i,1);
        QModelIndex i3=m_model->index(i,2);
        QModelIndex i4=m_model->index(i,3);
        QModelIndex i5=m_model->index(i,4);

        m_model->setData(i1,stu.lessonId);
        m_model->setData(i2,stu.lessonName);
        m_model->setData(i3,stu.score);
        m_model->setData(i4,stu.tea);
        m_model->setData(i5,stu.term);
        i++;
    }
    while(sql1.next())
    {
        stu.lessonId=sql1.value(0).toString();
        stu.lessonName=sql1.value(1).toString();
        stu.score=sql1.value(2).toString();
        stu.tea=sql1.value(3).toString();
        stu.term=sql1.value(4).toString();

        QModelIndex i1=m_model->index(i,0);
        QModelIndex i2=m_model->index(i,1);
        QModelIndex i3=m_model->index(i,2);
        QModelIndex i4=m_model->index(i,3);
        QModelIndex i5=m_model->index(i,4);

        m_model->setData(i1,stu.lessonId);
        m_model->setData(i2,stu.lessonName);
        m_model->setData(i3,stu.score);
        m_model->setData(i4,stu.tea);
        m_model->setData(i5,stu.term);
        i++;
    }
}
