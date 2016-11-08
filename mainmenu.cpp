#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btnDownload, SIGNAL(clicked()), this, SLOT(openMenuDownload()));
	connect(ui.btnExit, SIGNAL(clicked()), this, SLOT(exitApplication()));
}

MainMenu::~MainMenu()
{

}

void MainMenu::openMenuDownload()
{
	menuDownload.showFullScreen();
	
}

void MainMenu::exitApplication()
{
	qApp->exit(0);
}
