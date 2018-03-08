#include "videoplayer.h"
#include "ui_videoplayer.h"

VideoPlayer::VideoPlayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VideoPlayer)
{
    ui->setupUi(this);
    setPlayer();

    connect(player, &QMediaPlayer::durationChanged, slider, &QSlider::setMaximum);
    connect(player, &QMediaPlayer::positionChanged, slider, &QSlider::setValue);
    connect(slider, &QSlider::sliderMoved, player, &QMediaPlayer::setPosition);

    connect(pauseButton, SIGNAL(clicked()), player, SLOT(pause()) );
    connect(playButton, SIGNAL(clicked()), player, SLOT(play()) );


}


VideoPlayer::~VideoPlayer()
{
    delete ui;
}

void VideoPlayer::setPlayer()
{

    player = new QMediaPlayer(this);
    video  = new QVideoWidget(this);
    this->setCentralWidget(video);
    playlist = new QMediaPlaylist(this);

    playButton = new QPushButton("Play");
    ui->statusBar->addWidget(playButton);

    pauseButton = new QPushButton("Pause");
    ui->statusBar->addWidget(pauseButton);

    slider = new QSlider(this);
    slider->setOrientation(Qt::Horizontal);

//    ui->statusBar->addPermanentWidget(slider);
    ui->statusBar->addWidget(slider);

//    ui->statusBar->adjustSize();

//    playlist->addMedia(QUrl::fromLocalFile("/home/nafis/Videos/Qt_VideoPlayer.mp4") );


    video->setGeometry(100,100,800,800);
    player->setVideoOutput(video);
    video->show();

}

void VideoPlayer::play()
{
    player->play();
}

void VideoPlayer::pause()
{ 
    player->stop();
}

void VideoPlayer::playFile(QString file)
{
    playlist->clear();
    playlist->addMedia(QUrl::fromLocalFile(file) );
    player->setPlaylist(playlist);
    player->setVideoOutput(video);
    player->play();
}

void VideoPlayer::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(
                    this,
                    tr("Open File"),
                    "/home/nafis/Videos/",
                    "All files (*.*) ;; Music file(*.mp4)"
                );
    playFile(file);
}

void VideoPlayer::on_actionExit_triggered()
{
    this->close();
}
