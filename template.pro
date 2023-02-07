include(Open-Typer/.qmake.conf)
DEFINES += OPENTYPER_VERSION=\\\"$$VERSION\\\"

# Addon version
VERSION=1.0.0
DEFINES += ADDON_VERSION=\\\"$$VERSION\\\"

# Qt modules for this addon
# NOTE: If you use a module which is not shipped with Open-Typer,
# you'll have to ship it with your addon.
# Do NOT remove the 'quick' and 'widgets' modules as they're used
# by Open-Typer's header files
QT += quick widgets

# Library name
TARGET = opentyper-addon-template
TEMPLATE = lib

CONFIG += c++17

INCLUDEPATH += \
    src \
    Open-Typer/libcore/src

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/Addon.cpp

HEADERS += \
    src/Addon.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
