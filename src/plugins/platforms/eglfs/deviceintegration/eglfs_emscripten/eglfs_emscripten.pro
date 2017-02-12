TARGET = qeglfs-emscripten-integration

QT += core-private gui-private eglfsdeviceintegration-private

# Avoid X11 header collision, use generic EGL native types
DEFINES += QT_EGL_NO_X11

INCLUDEPATH += $$PWD/../../api

CONFIG += egl
QMAKE_LFLAGS += $$QMAKE_LFLAGS_NOUNDEF

SOURCES += $$PWD/qeglfsemscriptenmain.cpp \
           $$PWD/qeglfsemscriptenintegration.cpp

HEADERS += $$PWD/qeglfsemscriptenintegration.h

OTHER_FILES += $$PWD/eglfs_emscripten.json

PLUGIN_TYPE = egldeviceintegrations
PLUGIN_CLASS_NAME = QEglFSEmscriptenIntegrationPlugin
load(qt_plugin)
