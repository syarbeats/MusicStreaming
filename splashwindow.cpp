#include "splashwindow.h"

SplashWindow::SplashWindow(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	counter=0;
	updateProgressBar();
}

SplashWindow::~SplashWindow()
{

}

void SplashWindow::updateProgressBar()
{

    
    connect(&timer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
    timer.start(1000);
     if(counter <= 100)
     {
         counter++;
         ui.progressBar->setValue(counter);
     }
     else
     {
         timer.stop();
           //END CODE SNIPPET HERE
         menuLogin.showFullScreen();
         close();
     }
}

