#include "sturegisterdialog.h"
#include "ui_sturegisterdialog.h"

StuRegisterDialog::StuRegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StuRegisterDialog)
{
    ui->setupUi(this);
    connect(ui->regBtn,&QPushButton::clicked,this,&StuRegisterDialog::inputInformation);
    connect(ui->returnBtn,&QPushButton::clicked,this,&StuRegisterDialog::returnToLoginSignal);
}

StuRegisterDialog::~StuRegisterDialog()
{
    delete ui;
}

void StuRegisterDialog::inputInformation()
{

    // 假设你已经建立了数据库连接，并且已经打开了数据库
    QString userId1 = ui->userEdit->text();
    QString name = ui->nameEdit->text();
    QString sex = ui->sexEdit->text();
    QString college = ui->collegeEdit->text();
    QString major = ui->majorEdit->text();
    QString classId1 = ui->classEdit->text();
    QString pwd1 = ui->pwdEdit->text();

    // 检查是否所有字段都有输入
    if (userId1.isEmpty() || name.isEmpty() || sex.isEmpty() || college.isEmpty() || major.isEmpty() || classId1.isEmpty() || pwd1.isEmpty()) {
        QMessageBox::critical(this, "提示", "所有字段都必须输入内容。");
        return;
    }

    // 检查学号是否为有效的整数
    bool conversionOk;
    int userId = userId1.toInt(&conversionOk);
    if (!conversionOk) {
        QMessageBox::critical(this, "提示", "学号必须是整数。");
        return;
    }
    // 检查密码是否为有效的整数
    conversionOk=false;
    int pwd = pwd1.toInt(&conversionOk);
    if (!conversionOk) {
        QMessageBox::critical(this, "提示", "密码必须是整数。");
        return;
    }
    // 检查班级是否为有效的整数
    conversionOk=false;
    int classId = classId1.toInt(&conversionOk);
    if (!conversionOk) {
        QMessageBox::critical(this, "提示", "班级必须是整数。");
        return;
    }

    if (sex!="男" && sex!="女") {
        QMessageBox::critical(this, "提示", "性别只能是男或女");
        return;
    }


    // 创建一个QSqlQuery对象
    QSqlQuery query;

    // 准备插入语句
    query.prepare("INSERT INTO userstu (StuId, name, password, sex, college, major, classId) "
                  "VALUES (:userId, :name, :pwd, :sex, :college, :major, :classId)");

    // 绑定参数
    query.bindValue(":userId", userId);
    query.bindValue(":name", name);
    query.bindValue(":pwd", pwd);
    query.bindValue(":sex", sex);
    query.bindValue(":college", college);
    query.bindValue(":major", major);
    query.bindValue(":classId", classId);


    // 执行查询并检查结果
    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "该学号已注册");
    } else {
        QMessageBox::information(this, "Success", "成功注册");
    }


}

