TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    progresstask.cpp \
    progressobserver.cpp

HEADERS += \
    progresstask.h \
    progressobserver.h

LIBS += -pthread
