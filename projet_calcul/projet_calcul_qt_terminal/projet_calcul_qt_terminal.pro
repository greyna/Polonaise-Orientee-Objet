#-------------------------------------------------
#
# Project created by QtCreator 2012-06-09T23:42:59
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = projet_calcul_qt_terminal
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    pileExpression.cpp \
    operation.cpp \
    nombre.cpp \
    main_calcul.cpp \
    expression.cpp

HEADERS += \
    pileExpression.h \
    operation.h \
    nombre.h \
    moteurCalcul.h \
    expression.h
