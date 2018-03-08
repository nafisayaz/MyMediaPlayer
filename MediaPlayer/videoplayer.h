

#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>
#include <QSlider>
#include <QPushButton>
#include <QFileDialog>


#include <QDebug>

namespace Ui {
    class VideoPlayer;
}

class VideoPlayer : public QMainWindow
{
    Q_OBJECT

public:

    explicit VideoPlayer(QWidget *parent = 0);
    ~VideoPlayer();

    void setPlayer();
    void playFile(QString file);

private:

    Ui::VideoPlayer *ui;
    QMediaPlayer* player;
    QVideoWidget* video;
    QMediaPlaylist* playlist;
    QSlider* slider;
    QPushButton* playButton;
    QPushButton* pauseButton;

private slots:
    void play();
    void pause();

    void on_actionOpen_triggered();
    void on_actionExit_triggered();
};

#endif // VIDEOPLAYER_H
