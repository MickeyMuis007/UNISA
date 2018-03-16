TEMPLATE = app
TARGET = QTFromEmptyProject

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    window.cpp \
    main.cpp

RESOURCES += \
    icons.qrc

HEADERS += \
    window.h
