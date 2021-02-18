TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    car.cpp \
    sportcar.cpp \
    familycar.cpp

HEADERS += \
    car.h \
    sportcar.h \
    familycar.h
