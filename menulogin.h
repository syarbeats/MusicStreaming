#ifndef MENULOGIN_H
#define MENULOGIN_H

#include <QtGui/QWidget>
#include "ui_menulogin.h"
#include "mainmenu.h"

class MenuLogin : public QWidget
{
    Q_OBJECT

public:
    MenuLogin(QWidget *parent = 0);
    ~MenuLogin();
    
public slots:
	void showMainMenu();

private:
    Ui::MenuLoginClass ui;
    MainMenu mainMenu;
};

#endif // MENULOGIN_H
