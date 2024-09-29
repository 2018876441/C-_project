#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

signals:
    void registerLoingSignal();
    void loginSignal();
    void sendUserNameSignal();

public:
    QString getUser();
    QString getPwd();
    QString getIdn();

private:
    Ui::LoginDialog *ui;
    QString user;
    QString pwd;
    QString identity;
};

#endif // LOGINDIALOG_H
