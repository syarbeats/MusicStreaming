TEMPLATE = app
TARGET = MusicsStreaming
QT += core \
    gui \
    xml \
    network \
    phonon
INCLUDEPATH += ../../src/multimedia \
    ../../src/systeminfo
CONFIG += mobility
MOBILITY = bearer \
    multimedia \
    systeminfo
HEADERS += splashwindow.h \
    menulogin.h \
    mainmenu.h \
    musicplayer.h \
    MusicsStreaming.loc \
    MusicsStreaming.h
SOURCES += splashwindow.cpp \
    menulogin.cpp \
    mainmenu.cpp \
    musicplayer.cpp \
    MusicsStreaming.rss \
    MusicsStreaming_reg.rss \
    main.cpp \
    MusicsStreaming.cpp
FORMS += splashwindow.ui \
    menulogin.ui \
    mainmenu.ui \
    MusicsStreaming.ui
RESOURCES += mediaplayer.qrc
symbian { 
    LIBS += -llibcrypt
    TARGET.UID3 = 0xED758BFB
    TARGET.CAPABILITY = NetworkServices \
        ReadUserData \
        WriteUserData \
        LocalServices \
        UserEnvironment \
        ReadDeviceData \
        WriteDeviceData \
        TrustedUI
}
