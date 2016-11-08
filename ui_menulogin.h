/********************************************************************************
** Form generated from reading UI file 'menulogin.ui'
**
** Created: Fri Dec 24 09:14:16 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENULOGIN_H
#define UI_MENULOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuLoginClass
{
public:
    QLineEdit *txtMsisdn;
    QLineEdit *txtPassword;
    QLabel *label;
    QLabel *label_2;
    QToolButton *btnLogin;

    void setupUi(QWidget *MenuLoginClass)
    {
        if (MenuLoginClass->objectName().isEmpty())
            MenuLoginClass->setObjectName(QString::fromUtf8("MenuLoginClass"));
        MenuLoginClass->resize(370, 568);
        txtMsisdn = new QLineEdit(MenuLoginClass);
        txtMsisdn->setObjectName(QString::fromUtf8("txtMsisdn"));
        txtMsisdn->setGeometry(QRect(10, 180, 341, 41));
        QFont font;
        font.setPointSize(10);
        txtMsisdn->setFont(font);
        txtPassword = new QLineEdit(MenuLoginClass);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(10, 270, 341, 41));
        label = new QLabel(MenuLoginClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 140, 331, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(MenuLoginClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 235, 341, 31));
        label_2->setFont(font1);
        btnLogin = new QToolButton(MenuLoginClass);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(60, 340, 231, 71));
        btnLogin->setFont(font1);

        retranslateUi(MenuLoginClass);

        QMetaObject::connectSlotsByName(MenuLoginClass);
    } // setupUi

    void retranslateUi(QWidget *MenuLoginClass)
    {
        MenuLoginClass->setWindowTitle(QApplication::translate("MenuLoginClass", "MenuLogin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MenuLoginClass", "MSISDN", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MenuLoginClass", "PASSWORD", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("MenuLoginClass", "LOGIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MenuLoginClass: public Ui_MenuLoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENULOGIN_H
