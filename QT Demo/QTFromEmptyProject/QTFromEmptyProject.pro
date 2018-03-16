TEMPLATE = app
TARGET = QTFromEmptyProject

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    buttonDemo.cpp

RESOURCES += \
    icons.qrc
