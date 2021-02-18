TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -pthread

SOURCES += main.cpp \
    order.cpp \
    item.cpp \
    ordermanager.cpp \
    orderobserver.cpp \
    shippingorderobserver.cpp \
    customerserviceorderobserver.cpp

HEADERS += \
    order.h \
    item.h \
    ordermanager.h \
    orderobserver.h \
    shippingorderobserver.h \
    customerserviceorderobserver.h
