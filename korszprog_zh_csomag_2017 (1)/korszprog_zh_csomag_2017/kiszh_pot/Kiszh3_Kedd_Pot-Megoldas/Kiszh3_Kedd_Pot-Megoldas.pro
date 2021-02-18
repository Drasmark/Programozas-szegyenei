TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    carfactory.cpp \
    car.cpp \
    familycar.cpp \
    sportcar.cpp

HEADERS += \
    carfactory.h \
    car.h \
    sportcar.h \
    familycar.h
