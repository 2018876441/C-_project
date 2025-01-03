QT       += core gui
QT +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminteaman.cpp \
    adminui.cpp \
    databaseconnectionmanager.cpp \
    logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    registerdialog.cpp \
    stumodfiy.cpp \
    sturegisterdialog.cpp \
    stuscoreui.cpp \
    stuui.cpp \
    teaaddsco.cpp \
    teacoursemanagement.cpp \
    teamanagescore.cpp \
    teamodfiysco.cpp \
    teaui.cpp

HEADERS += \
    adminteaman.h \
    adminui.h \
    databaseconnectionmanager.h \
    logindialog.h \
    mainwindow.h \
    registerdialog.h \
    stumodfiy.h \
    sturegisterdialog.h \
    stuscoreui.h \
    stuui.h \
    teaaddsco.h \
    teacoursemanagement.h \
    teamanagescore.h \
    teamodfiysco.h \
    teaui.h

FORMS += \
    adminteaman.ui \
    adminui.ui \
    logindialog.ui \
    mainwindow.ui \
    registerdialog.ui \
    stumodfiy.ui \
    sturegisterdialog.ui \
    stuscoreui.ui \
    stuui.ui \
    teaaddsco.ui \
    teacoursemanagement.ui \
    teamanagescore.ui \
    teamodfiysco.ui \
    teaui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

DISTFILES +=
