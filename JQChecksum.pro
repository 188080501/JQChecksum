QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

CONFIG += c++11
#CONFIG += c++14

include($$PWD/Library/JQLibrary/JQLibrary.pri)

SOURCES += \
    $$PWD/cpp/main.cpp
