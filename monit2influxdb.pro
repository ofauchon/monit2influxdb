SOURCES += main.cpp \
    fetchthread.cpp
QT += core xml network

CONFIG += qt debug

INCLUDEPATH += ./GeneratedFiles
TEMPLATE = app
HEADERS += \
    fetchthread.h \
    common.h

