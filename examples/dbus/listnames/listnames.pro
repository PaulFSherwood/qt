TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .
QT -= gui
CONFIG += qdbus
win32:CONFIG += console

# Input
SOURCES += listnames.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/dbus/listnames
sources.files = $$SOURCES $$HEADERS $$RESOURCES *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/dbus/listnames
INSTALLS += target sources

