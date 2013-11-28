#-------------------------------------------------
#
# Project created by QtCreator 2013-11-28T19:41:47
#
#-------------------------------------------------

QT       -= gui

TARGET = cryxor
TEMPLATE = lib

DEFINES += CRYXOR_LIBRARY

SOURCES += \
    genkey.cpp

HEADERS +=\
        cryxor_global.hpp \
    genkey.hpp

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
