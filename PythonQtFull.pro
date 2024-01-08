TARGET=trikPythonQt_QtAll-Qt$${QT_MAJOR_VERSION}$${QT_MINOR_VERSION}-PythonXY
TEMPLATE = lib

TARGET = $$replace(TARGET, PythonXY, Python$${PYTHON_VERSION})
CONFIG += dll qt
CONFIG -= flat
mingw:QMAKE_CXXFLAGS+=-Wa,-mbig-obj

DEFINES += PYTHONQT_CATCH_ALL_EXCEPTIONS

contains(QT_MAJOR_VERSION, 5) {
  QT += widgets core-private
}

# Qt 5.4 adds this option, but this is not compatible with the Python API
QMAKE_CXXFLAGS_RELEASE -= -Zc:strictStrings

INCLUDEPATH += $$PWD

include ( build/common.prf )  
include ( build/PythonQt.prf )  
include ( build/python.prf )

include(src/src.pri):export(HEADERS):export(SOURCES):export(DEFINES)
include(extensions/PythonQt_QtAll/PythonQt_QtAll.pri):export(HEADERS):export(SOURCES):export(DEFINES)

unix {
  CONFIG += create_pc create_prl no_install_prl
  QMAKE_PKGCONFIG_NAME = trikPythonQt_QtAll-Qt$${QT_MAJOR_VERSION}-Python$${PYTHON_VERSION}
  QMAKE_PKGCONFIG_DESCRIPTION = Dynamic Python binding for the Qt framework
  QMAKE_PKGCONFIG_PREFIX = $$INSTALLBASE
  QMAKE_PKGCONFIG_LIBDIR = $$target.path
  QMAKE_PKGCONFIG_INCDIR = $$headers.path
  QMAKE_PKGCONFIG_INCDIR += $$PREFIX/include/trikPythonQt
  QMAKE_PKGCONFIG_VERSION = $$VERSION
}

unix: target.path = /lib
win32: target.path = /

headers.files = $${HEADERS} $$PWD/PythonQtPythonInclude.h
headers.path = /include

INSTALLS += target headers
