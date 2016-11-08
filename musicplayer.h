
#ifndef MEDIALAYER_H
#define MEDIAPLAYER_H

#include <QtGui/QWidget>
#include <QtGui/QApplication>
#include <QtCore/QTimerEvent>
#include <QtGui/QShowEvent>
#include <QtGui/QIcon>
#include <QtCore/QBasicTimer>
#include <QtGui/QAction>

#include <phonon/audiooutput.h>
#include <phonon/backendcapabilities.h>
#include <phonon/effect.h>
#include <phonon/effectparameter.h>
#include <phonon/effectwidget.h>
#include <phonon/mediaobject.h>
#include <phonon/seekslider.h>
#include <phonon/videowidget.h>
#include <phonon/volumeslider.h>
#include <QFileInfo>
//#include "MusicsStreaming.h"
         

QT_BEGIN_NAMESPACE
class QPushButton;
class QLabel;
class QSlider;
class QTextEdit;
class QMenu;
class Ui_settings;
QT_END_NAMESPACE

class MusicPlayer;

class MediaVideoWidget : public Phonon::VideoWidget
{
    Q_OBJECT

public:
    MediaVideoWidget(MusicPlayer *player, QWidget *parent = 0);

public slots:
    // Over-riding non-virtual Phonon::VideoWidget slot
    void setFullScreen(bool);

signals:
    void fullScreenChanged(bool);

protected:
    void mouseDoubleClickEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
    bool event(QEvent *e);
    void timerEvent(QTimerEvent *e);
    void dropEvent(QDropEvent *e);
    void dragEnterEvent(QDragEnterEvent *e);

private:
    MusicPlayer *m_player;
    QBasicTimer m_timer;
    QAction m_action;
};

class MusicPlayer :
            public QWidget
{
    Q_OBJECT
public:
    //MusicPlayer(const QString &fileString, const bool hasSmallScreen=false);
	MusicPlayer(const bool hasSmallScreen);
	void setMusicFile(const QString &fileString);
    void dragEnterEvent(QDragEnterEvent *e);
    void dragMoveEvent(QDragMoveEvent *e);
    void dropEvent(QDropEvent *e);
    void handleDrop(QDropEvent *e);
    void setFile(const QString &text);
    void setLocation(const QString &location);
    void initVideoWindow();
    void initSettingsDialog();
    void initGUI();

public slots:
    void openFile();
    void rewind();
    void forward();
    void updateInfo();
    void updateTime();
    void finished();
    void playPause();
    void scaleChanged(QAction *);
    void aspectChanged(QAction *);
    void closeWindow();

private slots:
    void setAspect(int);
    void setScale(int);
    void setSaturation(int);
    void setContrast(int);
    void setHue(int);
    void setBrightness(int);
    void stateChanged(Phonon::State newstate, Phonon::State oldstate);
    void effectChanged();
    void showSettingsDialog();
    void showContextMenu(const QPoint& point);
    void bufferStatus(int percent);
    void openUrl();
    void openRamFile();
    void configureEffect();
    void hasVideoChanged(bool);
    

private:
    bool playPauseForDialog();

    QIcon playIcon;
    QIcon pauseIcon;
    QIcon closeIcon;
    QMenu *fileMenu;
    QPushButton *playButton;
    QPushButton *rewindButton;
    QPushButton *forwardButton;
    QPushButton *closeButton;
    Phonon::SeekSlider *slider;
    QLabel *timeLabel;
    QLabel *progressLabel;
    Phonon::VolumeSlider *volume;
    QSlider *m_hueSlider;
    QSlider *m_satSlider;
    QSlider *m_contSlider;
    QLabel *info;
    Phonon::Effect *nextEffect;
    QDialog *settingsDialog;
    Ui_settings *ui;
    QAction *m_fullScreenAction;

    QWidget m_videoWindow;
    Phonon::MediaObject m_MediaObject;
    Phonon::AudioOutput m_AudioOutput;
    MediaVideoWidget *m_videoWidget;
    Phonon::Path m_audioOutputPath;
    const bool m_hasSmallScreen;
    //MusicsStreaming mainMenu;
    QFileInfo fileInfo;
    QString defaultFilename;
    QString originalFilename;
    QString filePath;
    QString state;
    

};

#endif //MEDIAPLAYER_H
