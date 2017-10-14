#-------------------------------------------------
#
# Project created by QtCreator 2017-10-13T07:56:25
#
#-------------------------------------------------

QT       += core gui network sql serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = aacs_packtool
TEMPLATE = app
MOC_DIR  = tmp/moc
RCC_DIR  = tmp/rcc
UI_DIR   = tmp/ui
OBJECTS_DIR = tmp/obj
DESTDIR     = bin
win32:RC_FILE = main.rc

INCLUDEPATH     += $$PWD
INCLUDEPATH     += $$PWD/source/inc

SOURCES +=  source/src/main.cpp\
            source/src/mainwindow.cpp\
            source/src/frmmessagebox.cpp\
            source/src/frminputbox.cpp\
            source/src/excelhelper.cpp\
            source/src/myapp.cpp \
            source/src/switchbutton.cpp \
            source/src/frmselectscanport.cpp \
            source/src/privatedata.cpp\
            source/src/quiwidget.cpp\
            source/src/appinit.cpp

HEADERS  += source/inc/mainwindow.h\
            source/inc/myhelper.h \
            source/inc/frmmessagebox.h\
            source/inc/frminputbox.h\
            source/inc/excelhelper.h\
            source/inc/myapp.h \
            source/inc/switchbutton.h \
            source/inc/frmselectscanport.h \
            source/inc/header.h \
            source/inc/privatedata.h \
            source/inc/quiwidget.h \
            source/inc/appinit.h

FORMS    += source/form/mainwindow.ui \
            source/form/frmmessagebox.ui\
            source/form/frminputbox.ui \
            source/form/frmselectscanport.ui


RESOURCES += qss.qrc \
             rc.qrc
