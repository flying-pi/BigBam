#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T22:56:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BigBam
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainlooper.cpp \
    elements/simpleelement.cpp

HEADERS  += mainwindow.h \
    elements/baseelement.h \
    mainlooper.h \
    elements/simpleelement.h

FORMS    += mainwindow.ui
