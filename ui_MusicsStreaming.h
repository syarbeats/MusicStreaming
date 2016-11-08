/********************************************************************************
** Form generated from reading UI file 'MusicsStreaming.ui'
**
** Created: Fri Dec 24 00:08:20 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICSSTREAMING_H
#define UI_MUSICSSTREAMING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicsStreamingClass
{
public:
    QAction *actionSet_Server;
    QAction *actionConnect;
    QWidget *centralwidget;
    QPushButton *btnDownload;
    QProgressBar *downloadProgressBar;
    QPushButton *btnMusicStreaming;
    QGroupBox *groupBox;
    QLineEdit *txtServer;
    QLabel *label;
    QPushButton *btnConnect;
    QListWidget *mp3List;
    QMenuBar *menuBar;
    QMenu *menuSetting;

    void setupUi(QMainWindow *MusicsStreamingClass)
    {
        if (MusicsStreamingClass->objectName().isEmpty())
            MusicsStreamingClass->setObjectName(QString::fromUtf8("MusicsStreamingClass"));
        MusicsStreamingClass->resize(370, 509);
        actionSet_Server = new QAction(MusicsStreamingClass);
        actionSet_Server->setObjectName(QString::fromUtf8("actionSet_Server"));
        actionConnect = new QAction(MusicsStreamingClass);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        centralwidget = new QWidget(MusicsStreamingClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnDownload = new QPushButton(centralwidget);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));
        btnDownload->setGeometry(QRect(10, 410, 171, 71));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        btnDownload->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/dap_premium.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDownload->setIcon(icon);
        downloadProgressBar = new QProgressBar(centralwidget);
        downloadProgressBar->setObjectName(QString::fromUtf8("downloadProgressBar"));
        downloadProgressBar->setGeometry(QRect(10, 370, 361, 31));
        downloadProgressBar->setValue(0);
        btnMusicStreaming = new QPushButton(centralwidget);
        btnMusicStreaming->setObjectName(QString::fromUtf8("btnMusicStreaming"));
        btnMusicStreaming->setEnabled(true);
        btnMusicStreaming->setGeometry(QRect(190, 410, 171, 71));
        btnMusicStreaming->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/ico_tutorial.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMusicStreaming->setIcon(icon1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 351, 121));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        groupBox->setFont(font1);
        txtServer = new QLineEdit(groupBox);
        txtServer->setObjectName(QString::fromUtf8("txtServer"));
        txtServer->setGeometry(QRect(0, 30, 351, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
        label->setFont(font);
        btnConnect = new QPushButton(groupBox);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setGeometry(QRect(0, 70, 181, 41));
        btnConnect->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Satellite.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnConnect->setIcon(icon2);
        mp3List = new QListWidget(centralwidget);
        mp3List->setObjectName(QString::fromUtf8("mp3List"));
        mp3List->setGeometry(QRect(10, 150, 351, 201));
        MusicsStreamingClass->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MusicsStreamingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 370, 21));
        menuSetting = new QMenu(menuBar);
        menuSetting->setObjectName(QString::fromUtf8("menuSetting"));
        MusicsStreamingClass->setMenuBar(menuBar);

        menuBar->addAction(menuSetting->menuAction());
        menuSetting->addAction(actionSet_Server);
        menuSetting->addSeparator();
        menuSetting->addAction(actionConnect);

        retranslateUi(MusicsStreamingClass);

        QMetaObject::connectSlotsByName(MusicsStreamingClass);
    } // setupUi

    void retranslateUi(QMainWindow *MusicsStreamingClass)
    {
        MusicsStreamingClass->setWindowTitle(QApplication::translate("MusicsStreamingClass", "MusicsStreaming", 0, QApplication::UnicodeUTF8));
        actionSet_Server->setText(QApplication::translate("MusicsStreamingClass", "Set Server", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("MusicsStreamingClass", "Connect", 0, QApplication::UnicodeUTF8));
        btnDownload->setText(QApplication::translate("MusicsStreamingClass", "MP3 Download", 0, QApplication::UnicodeUTF8));
        btnMusicStreaming->setText(QApplication::translate("MusicsStreamingClass", "Close", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        txtServer->setText(QApplication::translate("MusicsStreamingClass", "DM01FTD0007", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MusicsStreamingClass", "SongID", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("MusicsStreamingClass", "Connect", 0, QApplication::UnicodeUTF8));
        menuSetting->setTitle(QApplication::translate("MusicsStreamingClass", "Setting", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MusicsStreamingClass: public Ui_MusicsStreamingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICSSTREAMING_H
