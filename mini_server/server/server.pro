TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    server.c

HEADERS += \
    kernel_list.h \
    head.h

LIBS += -pthread
