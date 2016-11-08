#ifndef MAINMENU_H
#define MAINMENU_H

#include <QtGui/QWidget>
#include "ui_mainmenu.h"
#include "musicsstreaming.h"

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = 0);
    ~MainMenu();

public slots:
	void openMenuDownload();
	void exitApplication();

private:
    Ui::MainMenuClass ui;
    MusicsStreaming menuDownload;
};

#endif // MAINMENU_H
