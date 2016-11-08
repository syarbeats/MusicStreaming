#include <QtGui/QApplication>
//#include "musicsstreaming.h"
//#include "mainmenu.h"
#include "splashwindow.h"


int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(mediaplayer);
    QApplication a(argc, argv);
    //MusicsStreaming w;
    //MainMenu w;
    SplashWindow w;
    w.showFullScreen();
    
    return a.exec();
}
