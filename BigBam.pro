#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T22:56:26
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BigBam
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainlooper.cpp \
    elements/simpleelement.cpp \
    nepopacanski.cpp

HEADERS  += mainwindow.h \
    elements/baseelement.h \
    mainlooper.h \
    elements/simpleelement.h \
    nepopacanski.h

FORMS    += mainwindow.ui

