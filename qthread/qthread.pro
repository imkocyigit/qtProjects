TEMPLATE = app
TARGET = mythread

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets

HEADERS += \
    mythread.h

SOURCES += \
    mythread.cpp \
    main.cpp
