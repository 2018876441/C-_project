#include "src/fend/uilogin/uidialog.h"
#include "src/helper/filehelper.h"
#include "src/fend/uimain/uimain.h"
#include "src/bend/man/mandb.h"
#include <QApplication>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString qss=FileHelper::readAllTxt(":/qss/static/qss/default.qss");
    a.setStyleSheet(qss);

    MDB->init();
    UiMain w;
    w.showLoginUi();

    return a.exec();
}
