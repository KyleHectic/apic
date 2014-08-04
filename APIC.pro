#-------------------------------------------------
#
# Project created by QtCreator 2014-07-31T10:15:22
#
#-------------------------------------------------

QT       -= gui
QT       += core

TARGET = APIC
TEMPLATE = lib

DEFINES += APIC_LIBRARY

SOURCES += apic.cpp \
    worker.cpp \
    appthread.cpp

HEADERS +=\
    worker.h \
    appthread.h \
    apic.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
