TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    coefficients.cpp

LIBS += -pthread

HEADERS += \
    coefficients.h
