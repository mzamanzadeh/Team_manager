#-------------------------------------------------
#
# Project created by QtCreator 2015-07-07T00:03:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = readLogPlayGrapphic
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    protobuf/ssl_detection.pb.cc \
    protobuf/ssl_geometry.pb.cc \
    protobuf/ssl_referee.pb.cc \
    protobuf/ssl_wrapper.pb.cc

HEADERS  += mainwindow.h \
    protobuf/ssl_detection.pb.h \
    protobuf/ssl_geometry.pb.h \
    protobuf/ssl_referee.pb.h \
    protobuf/ssl_wrapper.pb.h

FORMS    += mainwindow.ui

LIBS += -lprotobuf

OTHER_FILES += \
    land.png
