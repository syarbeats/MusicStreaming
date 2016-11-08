#ifndef MUSICSSTREAMING_H
#define MUSICSSTREAMING_H

#include "ui_MusicsStreaming.h"
#include <QMainWindow>
#include <QtGui/QMainWindow>
#include <QCoreApplication>
#include <QFile>
#include <QFileInfo>
#include <QList>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QStringList>
#include <QTimer>
#include <QUrl>
#include <stdio.h>
#include "musicplayer.h"
#include <qmediaplayer.h>
#include <qmediaplaylist.h>
#include <qnetworkconfigmanager.h>
#include <qnetworksession.h>
#include <qsysteminfo.h>
#include <stdlib.h>
#include <unistd.h>


QTM_USE_NAMESPACE

class MusicsStreaming : public QMainWindow {
    Q_OBJECT
public:
    MusicsStreaming(QWidget *parent = 0);
    ~MusicsStreaming();
    QNetworkAccessManager manager;
    QList<QNetworkReply *> currentDownloads;
    //void doDownload(const QUrl &url);
    QString saveFileName(const QUrl &url);
    QString getFileName(const QUrl &url);
    bool saveToDisk(const QString &filename, QIODevice *data);
    QString parseXML(QString &data);
    QNetworkAccessManager XmlManager;
    QString getIMSI();
    QString getIMEI();
    void addSongToList(QString song);
    void encryptData(QString data);
    void decryptData(QString data);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MusicsStreamingClass ui;
    QUrl url;
    QString fileString;
    MusicPlayer* player;
    QString MusicFileName;
    QNetworkSession* m_session;
    //QMediaPlayer *streamPlayer;
    //QMediaPlaylist *streamPlaylist;
    QString strStatus;
    QSystemDeviceInfo *di;
    QSystemNetworkInfo *ni;
    QString hostDownload;
    QString imsi;
    QString imei;
    QString SongID;
    QFileInfo fileInfo;
    QString musicFile;

public slots:
        void downloadFinished(QNetworkReply *reply);
        void doDownload();
        void setupBearer();
        void updateDataTransferProgress(qint64 readBytes, qint64 totalBytes);
        void streamMusic();
        void downloadXMLFinished(QNetworkReply*);
        void playSelectedSong(int row);
};

#endif // MUSICSSTREAMING_H
