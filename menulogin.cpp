#include "menulogin.h"

MenuLogin::MenuLogin(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btnLogin, SIGNAL(clicked()), this, SLOT(showMainMenu()));
}

MenuLogin::~MenuLogin()
{

}
void MenuLogin::showMainMenu()
{
	mainMenu.showFullScreen();
	close();
}
