
HEADERS       = imageviewer.h \
    networkconfigdialog.h
SOURCES       = imageviewer.cpp \
                main.cpp \
    networkconfigdialog.cpp
QT            += network

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/imageviewer
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS imageviewer.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/widgets/imageviewer
INSTALLS += target sources

symbian: include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)

wince*: {
   DEPLOYMENT_PLUGIN += qjpeg qmng qgif
}

FORMS += \
    networkconfigdialog.ui
