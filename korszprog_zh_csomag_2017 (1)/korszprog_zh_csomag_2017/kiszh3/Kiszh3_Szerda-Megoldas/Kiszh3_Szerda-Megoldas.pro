TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    toy.cpp \
    lego.cpp \
    duplo.cpp \
    toyfactory.cpp

HEADERS += \
    toy.h \
    lego.h \
    duplo.h \
    toyfactory.h
