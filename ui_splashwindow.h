/********************************************************************************
** Form generated from reading UI file 'splashwindow.ui'
**
** Created: Fri Dec 24 08:55:22 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHWINDOW_H
#define UI_SPLASHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplashWindowClass
{
public:
    QProgressBar *progressBar;

    void setupUi(QWidget *SplashWindowClass)
    {
        if (SplashWindowClass->objectName().isEmpty())
            SplashWindowClass->setObjectName(QString::fromUtf8("SplashWindowClass"));
        SplashWindowClass->resize(370, 568);
        progressBar = new QProgressBar(SplashWindowClass);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 260, 361, 41));
        progressBar->setValue(0);

        retranslateUi(SplashWindowClass);

        QMetaObject::connectSlotsByName(SplashWindowClass);
    } // setupUi

    void retranslateUi(QWidget *SplashWindowClass)
    {
        SplashWindowClass->setWindowTitle(QApplication::translate("SplashWindowClass", "SplashWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SplashWindowClass: public Ui_SplashWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHWINDOW_H
