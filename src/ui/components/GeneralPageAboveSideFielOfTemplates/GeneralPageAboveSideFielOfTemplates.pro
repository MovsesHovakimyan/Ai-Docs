QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    brochure.cpp \
    generalpageabovesidefieloftemplates.cpp \
    letter.cpp \
    main.cpp \
    mainwindow.cpp \
    newfile.cpp \
    projectproposal.cpp \
    resume.cpp \
    resumecoral.cpp

HEADERS += \
    brochure.h \
    generalpageabovesidefieloftemplates.h \
    letter.h \
    mainwindow.h \
    newfile.h \
    projectproposal.h \
    resume.h \
    resumecoral.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
