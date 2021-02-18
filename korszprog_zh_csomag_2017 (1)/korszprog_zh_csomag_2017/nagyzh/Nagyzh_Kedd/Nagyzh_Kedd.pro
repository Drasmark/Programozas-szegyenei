TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -pthread

SOURCES += main.cpp \
    employee.cpp \
    company.cpp \
    salarycalculatorinterface.cpp \
    basicsalarycalculator.cpp \

HEADERS += \
    employee.h \
    company.h \
    salarycalculatorinterface.h \
    basicsalarycalculator.h \
