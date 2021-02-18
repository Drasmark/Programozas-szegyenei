TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pair.cpp

LIBS += -pthread

HEADERS += \
    pair.h
