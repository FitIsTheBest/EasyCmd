#-------------------------------------------------
#
# Project created by QtCreator 2021-01-24T11:22:21
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EasyCmd
TEMPLATE = app

include($$PWD/CmdEditors/CmdEditors.pri)

DESTDIR = $$PWD/dist

SOURCES += main.cpp\
    CmdProxyModel.cpp \
    CmdTreeModel.cpp \
    ConsoleEditor.cpp \
    ConsoleRwWorker.cpp \
        MainWindow.cpp \
    AboutUsDialog.cpp \
    Utils.cpp \
    ZXmlDomItem.cpp

HEADERS  += MainWindow.h \
    CmdProxyModel.h \
    AboutUsDialog.h \
    CmdTreeModel.h \
    ConsoleEditor.h \
    ConsoleRwWorker.h \
    Utils.h \
    ZXmlDomItem.h

FORMS    += MainWindow.ui \
    AboutUsDialog.ui

TRANSLATIONS += $$PWD/resource/easycmd.ts

RESOURCES += \
    resource/resource.qrc
