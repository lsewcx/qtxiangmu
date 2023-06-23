#created at 2023-6-16
#@author lse
#本文件是配置文件

QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


DEFINES += QT_DEPRECATED_WARNINGS #过时函数报错

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    globalshortcut.cpp \
    main.cpp \
    mainwindow.cpp \
    screencut.cpp \
    testwidget.cpp

HEADERS += \
    globalshortcut.h \
    mainwindow.h \
    screencut.h \
    testwidget.h

FORMS += \
    mainwindow.ui \
    screencut.ui \
    testwidget.ui

win32{
LIBS+= -luser32
}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

