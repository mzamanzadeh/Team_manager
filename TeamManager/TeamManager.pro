#-------------------------------------------------
#
# Project created by QtCreator 2014-07-11T19:32:56
#
#-------------------------------------------------

QT       += core gui network
QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

LIBS += -lprotobuf

release: DESTDIR = $$PWD/../../release_cyrus/team_manager
release: MOC_DIR = $$PWD/../../release_cyrus/team_manager/mocs
release: OBJECTS_DIR = $$PWD/../../release_cyrus/team_manager/objs
release: UI_DIR = $$PWD/../../release_cyrus/team_manager/ui

debug: DESTDIR = $$PWD/../../debug_cyrus/team_manager
debug: MOC_DIR = $$PWD/../../debug_cyrus/team_manager/mocs
debug: OBJECTS_DIR = $$PWD/../../debug_cyrus/team_manager/objs
debug: UI_DIR = $$PWD/../../debug_cyrus/team_manager/ui


TARGET = TeamManager
TEMPLATE = app

INCLUDEPATH += ../shared \
            ../shared/protoc \

SOURCES += main.cpp\
        mainwindow.cpp \
    fieldgraphicsview.cpp \
    watchfieldgraphics.cpp \
    udpsocket.cpp \
    cyrusserverpackethandler.cpp \
    ../shared/utility/vector3d.cpp \
    ../shared/utility/vector2d.cpp \
    ../shared/utility/generalmath.cpp \
    ../shared/proto/vision/cpp/messages_robocup_ssl_wrapper.pb.cc \
    ../shared/proto/vision/cpp/messages_robocup_ssl_refbox_log.pb.cc \
    ../shared/proto/vision/cpp/messages_robocup_ssl_geometry.pb.cc \
    ../shared/proto/vision/cpp/messages_robocup_ssl_detection.pb.cc \
    plot-manager/plotmanagerwidget.cpp \
    plot-manager/plotwidget.cpp \
    plot-manager/qcustomplot.cpp \
    plot-manager/scatterplotwidget.cpp \
    graphics/graphic_arc.cpp \
    graphics/graphic_ball.cpp \
    graphics/graphic_bot.cpp \
    graphics/graphic_circle.cpp \
    graphics/graphic_intersect.cpp \
    graphics/graphic_num.cpp \
    graphics/graphic_plan.cpp \
    graphics/graphic_vec.cpp \
    messengerwidget.cpp \
    ../shared/proto/plotter/cpp/message_plotter.pb.cc \
    robotstate.cpp \
    ../shared/proto/vision/cpp/ssl_referee.pb.cc


HEADERS  += mainwindow.h \
    fieldgraphicsview.h \
    watchfieldgraphics.h \
    udpsocket.h \
    cyrusserverpackethandler.h \
    ../shared/utility/vector3d.h \
    ../shared/utility/vector2d.h \
    ../shared/utility/generalmath.h \
    ../shared/proto/vision/cpp/messages_robocup_ssl_wrapper.pb.h \
    ../shared/proto/vision/cpp/messages_robocup_ssl_refbox_log.pb.h \
    ../shared/proto/vision/cpp/messages_robocup_ssl_geometry.pb.h \
    ../shared/proto/vision/cpp/messages_robocup_ssl_detection.pb.h \
    plot-manager/plotmanagerwidget.h \
    plot-manager/plotwidget.h \
    plot-manager/qcustomplot.h \
    plot-manager/scatterplotwidget.h \
    graphics/graphic_arc.h \
    graphics/graphic_ball.h \
    graphics/graphic_bot.h \
    graphics/graphic_circle.h \
    graphics/graphic_intersect.h \
    graphics/graphic_num.h \
    graphics/graphic_plan.h \
    graphics/graphic_vec.h \
    messengerwidget.h \
    ../shared/proto/plotter/cpp/message_plotter.pb.h \
    ../shared/general.h \
    ../../debug_cyrus/team_manager/ui/ui_watchfieldgraphics.h \
    ui_watchfieldgraphics.h \
    ../shared/sslnamespace.h \
    ../../debug_cyrus/team_manager/ui/ui_mainwindow.h \
    ../../debug_cyrus/team_manager/ui/ui_plotmanagerwidget.h \
    ../../debug_cyrus/team_manager/ui/ui_plotwidget.h \
    ../../debug_cyrus/team_manager/ui/ui_scatterplotwidget.h \
    ui_mainwindow.h \
    ui_plotmanagerwidget.h \
    ui_plotwidget.h \
    ui_scatterplotwidget.h \
    robotstate.h \
    ../shared/proto/vision/cpp/ssl_referee.pb.h \
    ../shared/proto/vision/cpp/ssl_referee.pb.h


FORMS    += mainwindow.ui \
    watchfieldgraphics.ui \
    plot-manager/plotmanagerwidget.ui \
    plot-manager/plotwidget.ui \
    plot-manager/scatterplotwidget.ui

RESOURCES += \
    icons.qrc
