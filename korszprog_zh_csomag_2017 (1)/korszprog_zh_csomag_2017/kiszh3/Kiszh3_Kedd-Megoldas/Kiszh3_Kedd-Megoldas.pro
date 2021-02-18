TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    progresstask.cpp \
    progressobserver.cpp \
    textprogressobserver.cpp \
    barprogressobserver.cpp

HEADERS += \
    progresstask.h \
    progressobserver.h \
    textprogressobserver.h \
    barprogressobserver.h
