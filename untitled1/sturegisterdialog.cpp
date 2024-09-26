#include "sturegisterdialog.h"
#include "ui_sturegisterdialog.h"

StuRegisterDialog::StuRegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StuRegisterDialog)
{
    ui->setupUi(this);
}

StuRegisterDialog::~StuRegisterDialog()
{
    delete ui;
}

void StuRegisterDialog::inputInformation()
{

    // 假设你已经建立了数据库连接，并且已经打开了数据库
    QString userId = ui->userEdit->text();
    QString name = ui->nameEdit->text();
    QString sex = ui->sexEdit->text();
    QString college = ui->collegeEdit->text();
    QString major = ui->majorEdit->text();
    QString classId = ui->classEdit->text();
    QString pwd = ui->pwdEdit->text();

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

void StuRegisterDialog::on_pushButton_clicked()
{
    inputInformation();
}

