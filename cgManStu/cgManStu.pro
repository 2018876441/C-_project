QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/bend/dao/daoStu/daostu.cpp \
    src/bend/dao/daoTea/daotea.cpp \
    src/bend/man/mandb.cpp \
    src/bend/man/manstu.cpp \
    src/bend/man/mantea.cpp \
    src/bend/man/manteasco.cpp \
    src/fend/uilogin/uidialog.cpp \
    src/fend/uimain/uimain.cpp \
    src/fend/uistu/uistu.cpp \
    src/fend/uistu/uistumain/uistumain.cpp \
    src/fend/uistu/uistumessage/uistumessage.cpp \
    src/fend/uistu/uistumodfiy/uistumodfiy.cpp \
    src/fend/uistu/uistuscore/uistuscore.cpp \
    src/fend/uitea/uitea.cpp \
    src/helper/dbmysql.cpp \
    src/helper/filehelper.cpp


HEADERS += \
    src/bend/dao/daoStu/daostu.h \
    src/bend/dao/daoTea/daotea.h \
    src/bend/man/mandb.h \
    src/bend/man/manstu.h \
    src/bend/man/mantea.h \
    src/bend/man/manteasco.h \
    src/bend/model/model.h \
    src/fend/uilogin/uidialog.h \
    src/fend/uimain/uimain.h \
    src/fend/uistu/uistu.h \
    src/fend/uistu/uistumain/uistumain.h \
    src/fend/uistu/uistumessage/uistumessage.h \
    src/fend/uistu/uistumodfiy/uistumodfiy.h \
    src/fend/uistu/uistuscore/uistuscore.h \
    src/fend/uitea/uitea.h \
    src/helper/dbmysql.h \
    src/helper/filehelper.h


FORMS += \
    src/fend/uilogin/uidialog.ui \
    src/fend/uimain/uimain.ui \
    src/fend/uistu/uistu.ui \
    src/fend/uistu/uistumain/uistumain.ui \
    src/fend/uistu/uistumessage/uistumessage.ui \
    src/fend/uistu/uistumodfiy/uistumodfiy.ui \
    src/fend/uistu/uistuscore/uistuscore.ui \
    src/fend/uitea/uitea.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    static.qrc
