#include "musicsstreaming.h"
#include "ui_musicsstreaming.h"
//#include "mediaplayer.h"
#include <QMessageBox>
#include <QXmlStreamReader>
#include <QProcess>
#include <stdlib.h>
#include <unistd.h>



MusicsStreaming::MusicsStreaming(QWidget *parent) : QMainWindow(parent)
    //ui(new Ui::MusicsStreaming)
{
    ui.setupUi(this);
    ui.btnDownload->setText("Download");
    //fileString="MusicDownloader";
    player = new MusicPlayer(true);
    strStatus = "Connect";
    ui.btnDownload->setEnabled(false);
    SongID=ui.txtServer->text();
    
    di = new QSystemDeviceInfo(this);
    ni = new QSystemNetworkInfo(this);
    
    this->imsi = getIMSI();
    this->imei = getIMEI();
    
    //encryptData("hh");
 
    //url = new QUrl() ;
    connect(&manager, SIGNAL(finished(QNetworkReply*)), SLOT(downloadFinished(QNetworkReply*)));
    connect(ui.btnDownload, SIGNAL(clicked()), SLOT(doDownload()));
    //connect(ui.btnMusicStreaming, SIGNAL(clicked()), SLOT(streamMusic()));
    connect(&XmlManager, SIGNAL(finished(QNetworkReply*)), SLOT(downloadXMLFinished(QNetworkReply*)));
    connect(ui.btnConnect,SIGNAL(clicked()),SLOT(doDownload()));
    connect(ui.mp3List,SIGNAL(currentRowChanged(int)),this,SLOT(playSelectedSong(int)));
    connect(ui.btnMusicStreaming, SIGNAL(clicked()), this, SLOT(streamMusic()));
    
    QTimer::singleShot(0, this, SLOT(setupBearer()));
    
}

MusicsStreaming::~MusicsStreaming()
{
	delete player;
    delete m_session;
}

void MusicsStreaming::encryptData(QString data)
{
	char* key;
	char* Data;
	Data = "Hello World...";
	key ="123456790";
	setkey(key);
	encrypt(Data,0);
	ui.btnMusicStreaming->setText(Data);
}

void MusicsStreaming::decryptData(QString data)
{
	
}

void MusicsStreaming::playSelectedSong(int row)
{
    QString song;
    ui.mp3List->setCurrentRow(row);
    song = "E:\\Data\\"+ui.mp3List->currentItem()->text()+".mp3";
    player->setFile(song);
    player->showMaximized();
    //"E:\\Data\\"+QFileInfo(saveFileName(url)).baseName()+".mp3";
    //ui->pushButton->setText(song);

}

void MusicsStreaming::addSongToList(QString song)
{
	ui.mp3List->insertItem(0,song);
}

QString MusicsStreaming::getIMSI()
{
		    
	return di->imsi();
}

QString MusicsStreaming::getIMEI()
{
	return di->imei();
}

QString MusicsStreaming::parseXML(QString &data)
{

    //qDebug("Parse XML");
    /*QFile* file = new QFile("gettrack.xml");

    if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,
                              "QXSRExample::parseXML",
                              "Couldn't open gettrack.xml",
                              QMessageBox::Ok);
        return;
    }*/

    //QXmlStreamReader xml(file);
    QXmlStreamReader xml(data);

    while(!xml.atEnd() &&
            !xml.hasError()) {

        QXmlStreamReader::TokenType token = xml.readNext();

        if(token == QXmlStreamReader::StartDocument) {

            continue;
        }

        if(token == QXmlStreamReader::StartElement) {

            if(xml.name() == "reply") {

                 continue;

            }


            if(xml.name() == "status") {

                if(xml.tokenType() != QXmlStreamReader::StartElement) {
                    return"";
                }

                xml.readNext();
                //ui.btnMusicStreaming->setText(xml.text().toString());
            }

            if(xml.name() == "desc") {

                if(xml.tokenType() != QXmlStreamReader::StartElement) {
                    return"";
                }

                xml.readNext();
                //ui.lineEdit->setText(xml.text().toString());
                hostDownload = xml.text().toString();
            }
        }
    }

    xml.clear();
    return hostDownload;
}

void MusicsStreaming::updateDataTransferProgress(qint64 readBytes, qint64 totalBytes)
{
    ui.downloadProgressBar->setMaximum(totalBytes);
    ui.downloadProgressBar->setValue(readBytes);
}

void MusicsStreaming::setupBearer()
{
    // Set Internet Access Point
    QNetworkConfigurationManager manager;
    const bool canStartIAP = (manager.capabilities()
        & QNetworkConfigurationManager::CanStartAndStopInterfaces);
    // Is there default access point, use it
    QNetworkConfiguration cfg = manager.defaultConfiguration();
    if (!cfg.isValid() || !canStartIAP) {
        QMessageBox::information(this, "MoBEE", "Available Access Points not found");
        return;
    }
    m_session = new QNetworkSession(cfg);
    m_session->open();
    m_session->waitForOpened();
}

void MusicsStreaming::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui.retranslateUi(this);
        break;
    default:
        break;
    }
}

void MusicsStreaming::doDownload()
{
    if(strStatus=="Play Music")
    {
        //MediaPlayer player(MusicFileName, true);
        //player = new MediaPlayer(MusicFileName, true);
        //player.setFile("Godfather.mp3");
        //player->showMaximized();
        fileInfo.setFile(MusicFileName);
        musicFile =  "E:\\data\\"+fileInfo.baseName()+".mp3";
        if(QFile::rename(MusicFileName,musicFile))
        {
				player->setFile(musicFile);
				//player->setMusicFile(MusicFileName);
				player->showMaximized();
        }
       // this->hide();
        ui.btnDownload->setText("Download");
        ui.downloadProgressBar->setValue(0);
        ui.txtServer->setText("DM01FTD0007");
        strStatus="Connect";

    }
    else if(strStatus=="Download")
    {
        //url = QUrl:: fromEncoded(ui.txtServer->text());
        url.setUrl(ui.txtServer->text());
        QNetworkRequest request(url);
        QNetworkReply *reply = manager.get(request);
        connect(reply, SIGNAL(downloadProgress(qint64,qint64)), SLOT(updateDataTransferProgress(qint64, qint64)));
        currentDownloads.append(reply);
        
    }
    else if(strStatus=="Connect")
    {
           //url = QUrl:: fromEncoded(ui.txtServer->text());
           //QString urlHost;
           QString urlHost("http://souniq.3trust.com/gettrack.php?RINGID="+ui.txtServer->text()+"&MSISDN=+6281809564968&IMEI="+imei);
           
           //url.setUrl(ui.txtServer->text());
           url.setUrl(urlHost);
           QNetworkRequest request(url);
           QNetworkReply *reply = XmlManager.get(request);
           //currentDownloads.append(reply);
           connect(reply, SIGNAL(downloadProgress(qint64,qint64)), SLOT(updateDataTransferProgress(qint64, qint64)));
    }
}

void MusicsStreaming::downloadXMLFinished(QNetworkReply *reply)
{
    QString data = reply->readAll();
    ui.txtServer->setText(parseXML(data));
    ui.btnDownload->setEnabled(true);
    strStatus="Download";
    //currentDownloads.removeAll(reply);
    reply->deleteLater();

}

QString MusicsStreaming::saveFileName(const QUrl &url)
{
    QString path = url.path();
    QString basename = QFileInfo(path).fileName();

    if (basename.isEmpty())
        basename = "download";

    if (QFile::exists(basename)) {
        // already exists, don't overwrite
        int i = 0;
        basename += '.';
        while (QFile::exists(basename + QString::number(i)))
            ++i;

        basename += QString::number(i);
    }

    return basename;
}

QString MusicsStreaming::getFileName(const QUrl &url)
{
    QString path = url.path();
    QString basename = QFileInfo(path).fileName();

    if (basename.isEmpty())
        basename = "download";

    if (QFile::exists(basename)) {
        // already exists, don't overwrite
        int i = 0;
        basename += '.';
        while (QFile::exists(basename + QString::number(i)))
            ++i;

        basename += QString::number(i);
    }

    return basename;
}

bool MusicsStreaming::saveToDisk(const QString &filename, QIODevice *data)
{
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly)) 
    {
        
        QMessageBox::information(this, "Information", "Could not open "+filename+" for writing"+file.errorString());
        return false;
    }

    file.write(data->readAll());
    file.close();

    return true;
}

void MusicsStreaming::downloadFinished(QNetworkReply *reply)
{
    QUrl url = reply->url();
    QString song;
    if (reply->error()) 
    {
		QMessageBox::information(this, "Information", "Download of mp3 failed");
    } 
    else 
    {
        //QString filename = saveFileName(url);
        //MusicFileName = "C:\\Data\\" + saveFileName(url);
         MusicFileName = "E:\\Data\\"+QFileInfo(saveFileName(url)).baseName()+".dm";
        //song = QFileInfo(saveFileName(url)).baseName();
		//MusicFileName = "E:\\Data\\Download\\"+saveFileName(url);
        //ui.mp3List->insertItem(0,QFileInfo(saveFileName(url)).baseName());

        if (saveToDisk(MusicFileName, reply))
        {
			QMessageBox::information(this, "Information", " MP3 file was downloaded successfully");
        }
        

    }

    currentDownloads.removeAll(reply);
    reply->deleteLater();
    ui.btnDownload->setText("Play Music");
    strStatus="Play Music";
    ui.txtServer->setText("DM01FTD0007");

    //if (currentDownloads.isEmpty())
        // all downloads finished
      //  QCoreApplication::instance()->quit();
}

void MusicsStreaming::streamMusic()
{
		close();
	
}

