#ifndef SPLASHWINDOW_H
#define SPLASHWINDOW_H

#include <QtGui/QWidget>
#include "ui_splashwindow.h"
#include <QTimer>
#include "menulogin.h"

class SplashWindow : public QWidget
{
    Q_OBJECT

public:
    SplashWindow(QWidget *parent = 0);
    ~SplashWindow();
    
public slots:
    void updateProgressBar();

private:
    Ui::SplashWindowClass ui;
    QTimer timer;
    int counter;
    MenuLogin menuLogin;
};

#endif // SPLASHWINDOW_H
