#include "stuscoreui.h"
#include "ui_stuscoreui.h"

StuScoreUi::StuScoreUi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StuScoreUi)
{
    ui->setupUi(this);
    initTableWidgetList();
    //筛选学期
    connect(ui->timeComBox,&QComboBox::currentTextChanged,this,[this](){
        initTableTitle();
        QString semester=ui->timeComBox->currentText();
        QSqlQuery sql;
        if(semester=="学期") initTableWidgetData();
        else{
            QString str="SELECT c.courseId, c.name , sc._score,sc.term, c.credit, t.name FROM course c LEFT JOIN score sc ON c.courseId = sc.scoreId LEFT JOIN course_teacher ct ON c.courseId = ct.course_id LEFT JOIN usertea t ON ct.teacher_id = t.TeaId join userstu s on sc.Stuid=s.StuId and s.StuId=? where sc.term=?";
            sql.prepare(str);
            sql.addBindValue(this->user.toInt());
            sql.addBindValue(semester);
            if(sql.exec()){
                int i=0;
                while(sql.next())
                {
                    QString strId=sql.value(0).toString();
                    QString strName=sql.value(1).toString();
                    QString strSco=sql.value(2).toString();
                    QString strTerm=sql.value(3).toString();
                    QString strCredit=sql.value(4).toString();
                    QString strTeacher=sql.value(5).toString();

                    ui->table->setItem(i,0,new QTableWidgetItem(strId));
                    ui->table->setItem(i,1,new QTableWidgetItem(strName));
                    ui->table->setItem(i,2,new QTableWidgetItem(strSco));
                    ui->table->setItem(i,3,new QTableWidgetItem(strTerm));
                    ui->table->setItem(i,4,new QTableWidgetItem(strCredit));
                    ui->table->setItem(i,5,new QTableWidgetItem(strTeacher));
                    i++;
                }
            }
            else{
                qDebug()<<"数据获取失败";
            }
        }
    });

    //筛选学年
    connect(ui->schoolYearComBox,&QComboBox::currentTextChanged,this,[this](){
        initTableTitle();
        QStringList strList;
        strList<<"大一上"<<"大一下"<<"大二上"<<"大二下"<<"大三上"<<"大三下"<<"大四上"<<"大四下";
        QString semester=ui->schoolYearComBox->currentText();
        QSqlQuery sql;
        if(semester=="学年") initTableWidgetData();
        else{
            QString str="SELECT c.courseId, c.name , sc._score,sc.term, c.credit, t.name FROM course c LEFT JOIN score sc ON c.courseId = sc.scoreId LEFT JOIN course_teacher ct ON c.courseId = ct.course_id LEFT JOIN usertea t ON ct.teacher_id = t.TeaId join userstu s on sc.Stuid=s.StuId and s.StuId=? where sc.term in (?,?)";
            sql.prepare(str);
            sql.addBindValue(this->user.toInt());
            QString s1,s2;
            if(semester=="大一"){
                s1=strList.at(0);
                s2=strList.at(1);
            }
            else if(semester=="大二"){
                s1=strList.at(2);
                s2=strList.at(3);
            }
            else if(semester=="大三"){
                s1=strList.at(4);
                s2=strList.at(5);
            }
            else if(semester=="大四"){
                s1=strList.at(6);
                s2=strList.at(7);
            }
            sql.addBindValue(s1);
            sql.addBindValue(s2);

            if(sql.exec()){
                int i=0;
                while(sql.next())
                {
                    QString strId=sql.value(0).toString();
                    QString strName=sql.value(1).toString();
                    QString strSco=sql.value(2).toString();
                    QString strTerm=sql.value(3).toString();
                    QString strCredit=sql.value(4).toString();
                    QString strTeacher=sql.value(5).toString();

                    ui->table->setItem(i,0,new QTableWidgetItem(strId));
                    ui->table->setItem(i,1,new QTableWidgetItem(strName));
                    ui->table->setItem(i,2,new QTableWidgetItem(strSco));
                    ui->table->setItem(i,3,new QTableWidgetItem(strTerm));
                    ui->table->setItem(i,4,new QTableWidgetItem(strCredit));
                    ui->table->setItem(i,5,new QTableWidgetItem(strTeacher));
                    i++;
                }
            }
            else{
                qDebug()<<"数据获取失败";
            }
        }
    });

    //成绩排序
    connect(ui->scoreComBox,&QComboBox::currentTextChanged,this,[this](){
        initTableTitle();
        QString fs=ui->scoreComBox->currentText();
        if(fs=="分数") initTableWidgetData();
        else{
            QSqlQuery sql;
            QString str;
            if(fs=="升序") str="SELECT c.courseId, c.name , sc._score,sc.term,c.credit, t.name FROM course c LEFT JOIN score sc ON c.courseId = sc.scoreId LEFT JOIN course_teacher ct ON c.courseId = ct.course_id LEFT JOIN usertea t ON ct.teacher_id = t.TeaId join userstu s on sc.Stuid=s.StuId and s.StuId=? order by sc._score asc";
            else str="SELECT c.courseId, c.name , sc._score,sc.term,c.credit, t.name FROM course c LEFT JOIN score sc ON c.courseId = sc.scoreId LEFT JOIN course_teacher ct ON c.courseId = ct.course_id LEFT JOIN usertea t ON ct.teacher_id = t.TeaId join userstu s on sc.Stuid=s.StuId and s.StuId=? order by sc._score desc";
            sql.prepare(str);
            sql.addBindValue(this->user.toInt());


            if(sql.exec()){
                int i=0;
                while(sql.next())
                {
                    QString strId=sql.value(0).toString();
                    QString strName=sql.value(1).toString();
                    QString strSco=sql.value(2).toString();
                    QString strTerm=sql.value(3).toString();
                    QString strCredit=sql.value(4).toString();
                    QString strTeacher=sql.value(5).toString();

                    ui->table->setItem(i,0,new QTableWidgetItem(strId));
                    ui->table->setItem(i,1,new QTableWidgetItem(strName));
                    ui->table->setItem(i,2,new QTableWidgetItem(strSco));
                    ui->table->setItem(i,3,new QTableWidgetItem(strTerm));
                    ui->table->setItem(i,4,new QTableWidgetItem(strCredit));
                    ui->table->setItem(i,5,new QTableWidgetItem(strTeacher));
                    i++;
                }
            }
            else{
                QMessageBox::information(this,"提示","查询失败");
                return;
            }
        }
    });

    //查询按钮
    connect(ui->checkBtn,&QPushButton::clicked,this,[this](){
        QString className=ui->checkEdit->text();
        if(className.isEmpty()) {
            QMessageBox::information(this,"提示","查询内容不能为空");
            return;
        }


        initTableTitle();
        QSqlQuery sql;
        QString str="SELECT c.courseId, c.name , sc._score,sc.term,c.credit, t.name FROM course c LEFT JOIN score sc ON c.courseId = sc.scoreId LEFT JOIN course_teacher ct ON c.courseId = ct.course_id LEFT JOIN usertea t ON ct.teacher_id = t.TeaId join userstu s on sc.Stuid=s.StuId and s.StuId=? where c.name=?";
        sql.prepare(str);
        sql.addBindValue(this->user.toInt());
        sql.addBindValue(className);
        if(sql.exec()){
            int i=0;
            while(sql.next())
            {
                QString strId=sql.value(0).toString();
                QString strName=sql.value(1).toString();
                QString strSco=sql.value(2).toString();
                QString strTerm=sql.value(3).toString();
                QString strCredit=sql.value(4).toString();
                QString strTeacher=sql.value(5).toString();

                ui->table->setItem(i,0,new QTableWidgetItem(strId));
                ui->table->setItem(i,1,new QTableWidgetItem(strName));
                ui->table->setItem(i,2,new QTableWidgetItem(strSco));
                ui->table->setItem(i,3,new QTableWidgetItem(strTerm));
                ui->table->setItem(i,4,new QTableWidgetItem(strCredit));
                ui->table->setItem(i,5,new QTableWidgetItem(strTeacher));
                i++;
            }
        }
        else{
            QMessageBox::information(this,"提示","查询失败");
            return;
        }

        ui->checkEdit->clear();
    });
}

StuScoreUi::~StuScoreUi()
{
    delete ui;
}

void StuScoreUi::initTableWidgetList()
{

    //设置表格控件100行6列
    ui->table->setColumnCount(6);
    ui->table->setRowCount(100);
    //设置表格控件字体大小
    ui->table->setFont(QFont("宋体",13));


    //设置表格列宽度
    ui->table->setColumnWidth(1,200);

}

void StuScoreUi::initTableWidgetData()
{
    initTableTitle();
    QSqlQuery sql;
    QString str="SELECT c.courseId, c.name , sc._score,sc.term, c.credit, t.name FROM course c LEFT JOIN score sc ON c.courseId = sc.scoreId LEFT JOIN course_teacher ct ON c.courseId = ct.course_id LEFT JOIN usertea t ON ct.teacher_id = t.TeaId join userstu s on sc.Stuid=s.StuId and s.StuId=?";
    sql.prepare(str);
    sql.addBindValue(this->user.toInt());

    if(sql.exec()){
        int i=0;
        while(sql.next())
        {
            QString strId=sql.value(0).toString();
            QString strName=sql.value(1).toString();
            QString strSco=sql.value(2).toString();
            QString strTerm=sql.value(3).toString();
            QString strCredit=sql.value(4).toString();
            QString strTeacher=sql.value(5).toString();

            ui->table->setItem(i,0,new QTableWidgetItem(strId));
            ui->table->setItem(i,1,new QTableWidgetItem(strName));
            ui->table->setItem(i,2,new QTableWidgetItem(strSco));
            ui->table->setItem(i,3,new QTableWidgetItem(strTerm));
            ui->table->setItem(i,4,new QTableWidgetItem(strCredit));
            ui->table->setItem(i,5,new QTableWidgetItem(strTeacher));
            i++;
        }
    }
    else{
        qDebug()<<"数据获取失败";
    }
}

void StuScoreUi::initTableTitle()
{
    //设置表格控件标题
    ui->table->clear();
    ui->table->setHorizontalHeaderLabels(QStringList()<<"课程编号"<<"课程名称"<<"课程分数"<<"学期"<<"学分"<<"课程老师");
}

void StuScoreUi::setUser(QString user)
{
    this->user=user;
}

void StuScoreUi::on_returnBtn_clicked()
{
    emit returnToStuUiSiganls();
}


void StuScoreUi::on_recover_clicked()
{
    initTableWidgetData();
}

