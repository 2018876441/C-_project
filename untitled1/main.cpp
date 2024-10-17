#include "mainwindow.h"

#include <QApplication>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonValue>
#include <QFile>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    QScreen *screen = QGuiApplication::primaryScreen();
    if (screen) {
        QRect screenGeometry = screen->geometry();
        QPoint centerPoint = screenGeometry.center();
        QPoint wCenter(w.width() / 2, w.height() / 2);
        w.move(centerPoint - wCenter);
    }
    return a.exec();
}
