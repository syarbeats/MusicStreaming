/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created: Fri Dec 24 00:46:13 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenuClass
{
public:
    QToolButton *btnDownload;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *btnExit;

    void setupUi(QWidget *MainMenuClass)
    {
        if (MainMenuClass->objectName().isEmpty())
            MainMenuClass->setObjectName(QString::fromUtf8("MainMenuClass"));
        MainMenuClass->resize(370, 568);
        btnDownload = new QToolButton(MainMenuClass);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));
        btnDownload->setGeometry(QRect(30, 30, 151, 161));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/mouseman.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDownload->setIcon(icon);
        btnDownload->setIconSize(QSize(256, 256));
        toolButton_2 = new QToolButton(MainMenuClass);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(200, 30, 141, 161));
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(256, 256));
        toolButton_3 = new QToolButton(MainMenuClass);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(30, 210, 151, 161));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon1);
        toolButton_3->setIconSize(QSize(256, 256));
        toolButton_4 = new QToolButton(MainMenuClass);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(200, 210, 141, 161));
        toolButton_4->setIcon(icon1);
        toolButton_4->setIconSize(QSize(256, 256));
        toolButton_5 = new QToolButton(MainMenuClass);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setGeometry(QRect(30, 390, 151, 161));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/windows_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon2);
        toolButton_5->setIconSize(QSize(256, 256));
        btnExit = new QToolButton(MainMenuClass);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(200, 390, 141, 161));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Satellite.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon3);
        btnExit->setIconSize(QSize(256, 256));

        retranslateUi(MainMenuClass);

        QMetaObject::connectSlotsByName(MainMenuClass);
    } // setupUi

    void retranslateUi(QWidget *MainMenuClass)
    {
        MainMenuClass->setWindowTitle(QApplication::translate("MainMenuClass", "MainMenu", 0, QApplication::UnicodeUTF8));
        btnDownload->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        toolButton_5->setText(QString());
        btnExit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainMenuClass: public Ui_MainMenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
