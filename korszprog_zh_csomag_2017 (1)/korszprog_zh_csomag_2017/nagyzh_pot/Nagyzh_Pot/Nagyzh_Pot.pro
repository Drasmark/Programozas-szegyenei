TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -pthread

SOURCES += main.cpp \
    shape.cpp \
    rectangle.cpp \
    circle.cpp \
    triangle.cpp \
    order.cpp

HEADERS += \
    shape.h \
    rectangle.h \
    circle.h \
    triangle.h \
    order.h
