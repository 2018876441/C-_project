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
        ui->table->clear();
        initTableTitle();
        QString semester=ui->timeComBox->currentText();
        QSqlQuery sql;
        if(semester=="全部") initTableWidgetData();
        else{
            QString str="select lessonId,lessonName,_score,credit,semester,usertea.name from score left join usertea on score.teaId =usertea.TeaId where Stuid = ? and semester = ?";
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
                    QString strCredit=sql.value(3).toString();
                    QString strSemester=sql.value(4).toString();
                    QString strTeacher=sql.value(5).toString();

                    ui->table->setItem(i,0,new QTableWidgetItem(strId));
                    ui->table->setItem(i,1,new QTableWidgetItem(strName));
                    ui->table->setItem(i,2,new QTableWidgetItem(strSco));
                    ui->table->setItem(i,3,new QTableWidgetItem(strCredit));
                    ui->table->setItem(i,4,new QTableWidgetItem(strSemester));
                    ui->table->setItem(i,5,new QTableWidgetItem(strTeacher));
                    i++;
                }
            }
            else{
                qDebug()<<"数据获取失败";
            }
        }
    });

    connect(ui->checkBtn,&QPushButton::clicked,this,[this](){
        QString className=ui->checkEdit->text();
        if(className.isEmpty()) {
            QMessageBox::information(this,"提示","查询内容不能为空");
            return;
        }

        ui->table->clear();
        initTableTitle();
        QSqlQuery sql;
        QString str="select lessonId,lessonName,_score,credit,semester,usertea.name from score left join usertea on score.teaId=usertea.TeaId where Stuid = ? and lessonName = ?";
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
                QString strCredit=sql.value(3).toString();
                QString strSemester=sql.value(4).toString();
                QString strTeacher=sql.value(5).toString();

                ui->table->setItem(i,0,new QTableWidgetItem(strId));
                ui->table->setItem(i,1,new QTableWidgetItem(strName));
                ui->table->setItem(i,2,new QTableWidgetItem(strSco));
                ui->table->setItem(i,3,new QTableWidgetItem(strCredit));
                ui->table->setItem(i,4,new QTableWidgetItem(strSemester));
                ui->table->setItem(i,5,new QTableWidgetItem(strTeacher));
                i++;
            }
        }
        else{
            QMessageBox::information(this,"提示","查询失败");
            return;
        }

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
    ui->table->setColumnWidth(0,80);

}

void StuScoreUi::initTableWidgetData()
{
    ui->table->clear();
    initTableTitle();
    QSqlQuery sql;
    QString str="select lessonId,lessonName,_score,credit,semester,usertea.name from score left join usertea on score.teaId=usertea.TeaId where Stuid = ?";
    sql.prepare(str);
    sql.addBindValue(this->user.toInt());

    if(sql.exec()){
        int i=0;
        while(sql.next())
        {
            QString strId=sql.value(0).toString();
            QString strName=sql.value(1).toString();
            QString strSco=sql.value(2).toString();
            QString strCredit=sql.value(3).toString();
            QString strSemester=sql.value(4).toString();
            QString strTeacher=sql.value(5).toString();

            ui->table->setItem(i,0,new QTableWidgetItem(strId));
            ui->table->setItem(i,1,new QTableWidgetItem(strName));
            ui->table->setItem(i,2,new QTableWidgetItem(strSco));
            ui->table->setItem(i,3,new QTableWidgetItem(strCredit));
            ui->table->setItem(i,4,new QTableWidgetItem(strSemester));
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
    ui->table->setHorizontalHeaderLabels(QStringList()<<"课程编号"<<"课程名称"<<"课程分数"<<"学分"<<"学期"<<"课程老师");
}

void StuScoreUi::setUser(QString user)
{
    this->user=user;
}

void StuScoreUi::on_returnBtn_clicked()
{
    emit returnToStuUiSiganls();
}

