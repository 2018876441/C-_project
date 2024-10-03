QT       += core gui
QT +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    databaseconnectionmanager.cpp \
    logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    registerdialog.cpp \
    stumodfiy.cpp \
    sturegisterdialog.cpp \
    stuscoreui.cpp \
    stuui.cpp \
    teacoursemanagement.cpp \
    teamanagescore.cpp \
    teaui.cpp

HEADERS += \
    databaseconnectionmanager.h \
    logindialog.h \
    mainwindow.h \
    registerdialog.h \
    stumodfiy.h \
    sturegisterdialog.h \
    stuscoreui.h \
    stuui.h \
    teacoursemanagement.h \
    teamanagescore.h \
    teaui.h

FORMS += \
    logindialog.ui \
    mainwindow.ui \
    registerdialog.ui \
    stumodfiy.ui \
    sturegisterdialog.ui \
    stuscoreui.ui \
    stuui.ui \
    teacoursemanagement.ui \
    teamanagescore.ui \
    teaui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

DISTFILES +=
