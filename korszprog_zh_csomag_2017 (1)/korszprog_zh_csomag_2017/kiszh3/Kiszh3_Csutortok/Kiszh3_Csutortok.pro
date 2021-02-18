TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    longtermcompany.cpp \
    shorttermcompany.cpp \
    pricecalculatorinterface.cpp \
    longtermpricecalculator.cpp \
    shorttermpricecalculator.cpp

HEADERS += \
    longtermcompany.h \
    shorttermcompany.h \
    pricecalculatorinterface.h \
    longtermpricecalculator.h \
    shorttermpricecalculator.h
