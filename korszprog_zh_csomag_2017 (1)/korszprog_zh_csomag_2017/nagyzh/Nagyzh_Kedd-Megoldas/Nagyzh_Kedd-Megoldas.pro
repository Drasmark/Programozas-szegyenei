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
    executivesalarycalculatoradapter.cpp \
    managersalarycalculatoradapter.cpp \
    workersalarycalculatoradapter.cpp

HEADERS += \
    employee.h \
    company.h \
    salarycalculatorinterface.h \
    basicsalarycalculator.h \
    executivesalarycalculatoradapter.h \
    managersalarycalculatoradapter.h \
    workersalarycalculatoradapter.h
