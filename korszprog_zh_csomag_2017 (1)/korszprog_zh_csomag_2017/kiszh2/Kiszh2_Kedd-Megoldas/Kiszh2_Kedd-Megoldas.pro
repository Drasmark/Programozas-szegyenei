TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    transaction.cpp \
    account.cpp

HEADERS += \
    transaction.h \
    account.h
