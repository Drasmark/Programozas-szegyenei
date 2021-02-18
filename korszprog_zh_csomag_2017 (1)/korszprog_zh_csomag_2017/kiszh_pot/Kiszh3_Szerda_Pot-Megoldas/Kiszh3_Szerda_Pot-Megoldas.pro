TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    carengine.cpp \
    speedometer.cpp \
    indicator.cpp \
    engineobserver.cpp

HEADERS += \
    carengine.h \
    speedometer.h \
    indicator.h \
    engineobserver.h
