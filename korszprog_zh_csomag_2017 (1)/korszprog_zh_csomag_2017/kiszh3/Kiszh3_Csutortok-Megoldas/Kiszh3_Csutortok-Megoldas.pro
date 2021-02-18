TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    longtermcompany.cpp \
    shorttermcompany.cpp \
    pricecalculatorinterface.cpp \
    shorttermpricecalculator.cpp \
    longtermpricecalculator.cpp

HEADERS += \
    longtermcompany.h \
    shorttermcompany.h \
    pricecalculatorinterface.h \
    shorttermpricecalculator.h \
    longtermpricecalculator.h
