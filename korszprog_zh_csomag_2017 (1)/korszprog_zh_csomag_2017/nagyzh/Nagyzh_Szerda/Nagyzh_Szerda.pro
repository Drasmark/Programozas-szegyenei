TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -pthread

SOURCES += main.cpp \
    order.cpp \
    item.cpp \
    ordermanager.cpp \
    orderobserver.cpp

HEADERS += \
    order.h \
    item.h \
    ordermanager.h \
    orderobserver.h
