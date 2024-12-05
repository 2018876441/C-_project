#include "manteasco.h"

Q_GLOBAL_STATIC(ManTeaSco,ins)

ManTeaSco::ManTeaSco(QObject *parent)
    : QObject{parent}
{
    m_teaModel=new QStandardItemModel(this);
    setTableView();

    m_score[2]="_score";
    m_score[6]="term";

    connect(m_teaModel,&QStandardItemModel::dataChanged,this,[this](const QModelIndex &topLeft){
        int row=topLeft.row();
        int col=topLeft.column();
        QString fieldName=m_score[col];
        QString newValue=topLeft.data().toString();
        QString stuId=m_teaModel->index(row,0).data().toString();
        QString lessonId=m_teaModel->index(row,7).data().toString();

        QStringList strList;
        if(!fieldName.isNull()) strList<<fieldName;
        if(!newValue.isNull()) strList<<newValue;
        if(!stuId.isNull()) strList<<stuId;
        if(!lessonId.isNull()) strList<<lessonId;
        if(strList.size()!=4) return;
        m_daotea.selectExistsSco(strList);
    });
}

ManTeaSco::~ManTeaSco()
{
    if(m_teaModel){
        delete m_teaModel;
        m_teaModel=nullptr;
    }
}

ManTeaSco *ManTeaSco::instance()
{
    return ins();
}

QStandardItemModel *ManTeaSco::teaModel() const
{
    return m_teaModel;
}

void ManTeaSco::setTableView()
{
    m_teaModel->setHorizontalHeaderLabels(QStringList()<<"学号"<<"姓名"<<"分数"<<"班级"<<"学院"<<"专业"<<"学期"<<"课程编号");
    m_teaModel->setColumnCount(8);
}

void ManTeaSco::selectClassStuMessage(const QString& classId)
{
    m_teaModel->clear();
    setTableView();

    teaManStu tea;
    QSqlQuery sql=m_daotea.selectClassStuMessage(MDB->user(),classId);

    m_teaModel->setRowCount(sql.size());
    int i=0;
    while(sql.next())
    {
        tea.stuId=sql.value(0).toString();
        tea.name=sql.value(1).toString();
        tea.score=sql.value(2).toString();
        tea.classId=sql.value(3).toString();
        tea.college=sql.value(4).toString();
        tea.major=sql.value(5).toString();
        tea.term=sql.value(6).toString();
        tea.lessonId=sql.value(7).toString();

        QModelIndex i1=m_teaModel->index(i,0);
        QModelIndex i2=m_teaModel->index(i,1);
        QModelIndex i3=m_teaModel->index(i,2);
        QModelIndex i4=m_teaModel->index(i,3);
        QModelIndex i5=m_teaModel->index(i,4);
        QModelIndex i6=m_teaModel->index(i,5);
        QModelIndex i7=m_teaModel->index(i,6);
        QModelIndex i8=m_teaModel->index(i,7);

        m_teaModel->setData(i1,tea.stuId);
        m_teaModel->setData(i2,tea.name);
        m_teaModel->setData(i3,tea.score);
        m_teaModel->setData(i4,tea.classId);
        m_teaModel->setData(i5,tea.college);
        m_teaModel->setData(i6,tea.major);
        m_teaModel->setData(i7,tea.term);
        m_teaModel->setData(i8,tea.lessonId);

        i++;
    }
}
