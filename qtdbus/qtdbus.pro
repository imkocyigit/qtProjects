TEMPLATE = app
TARGET = qtdbus

QT += core dbus
QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp
