TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    carengine.cpp \
    engineobserver.cpp

HEADERS += \
    carengine.h \
    engineobserver.h
