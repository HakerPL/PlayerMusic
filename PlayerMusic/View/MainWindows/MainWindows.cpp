#include "MainWindows.h"
#include <QFileDialog>
#include <QDir>
#include <QWidget>
#include <qtoolbutton.h>

MainWindows::MainWindows(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
    m_playListModel = new QStandardItemModel(this);
    ////ui->playlistView->setModel(m_playListModel);
    ////m_playListModel->setHorizontalHeaderLabels(QStringList() << tr("Audio Track")
    ////    << tr("File Path"));
    ////ui->playlistView->hideColumn(1);
    ////ui->playlistView->verticalHeader()->setVisible(false);
    ////ui->playlistView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ////ui->playlistView->setSelectionMode(QAbstractItemView::SingleSelection);
    ////ui->playlistView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ////ui->playlistView->horizontalHeader()->setStretchLastSection(true);

    ////m_player = new QMediaPlayer(this);          // Init player
    ////m_playlist = new QMediaPlaylist(m_player);  // Init playlist
    ////m_player->setPlaylist(m_playlist);
    ////m_playlist->setPlaybackMode(QMediaPlaylist::Loop);  // Set circular play mode playlist


    ////connect(m_player, &QMediaPlayer::positionChanged, this, &MainWindows::on_positionChanged);
    ////connect(m_player, &QMediaPlayer::durationChanged, this, &MainWindows::on_durationChanged);

    ////ui->sliderVolume->setValue(ui->sliderVolume->maximum());

    ////connect(ui->sliderProgres, SIGNAL(sliderReleased()), this, SLOT(on_sliderProgres()));
    ////connect(ui->sliderVolume, SIGNAL(valueChanged(int)), this, SLOT(on_sliderVolume(int)));

    ////connect(ui->playlistView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(playSelected(QModelIndex)));

    //m_player->setMedia(QUrl::fromLocalFile("F:/Mp3/skillet - m.mp3"));
    //qDebug() << m_player->errorString();

    //Name of program visible on Windows bar
    //setWindowTitle(ui->lblTitle->text());

    ///*connect(ui->btnPlayPause, &QToolButton::clicked, m_player, &QMediaPlayer::play);

    //connect(ui->btnAdd, SIGNAL(clicked()), this, SLOT(AddSong()));*/
    //connect(ui->btnStop, &QToolButton::clicked, m_player, &QMediaPlayer::stop); //click button and stop song
}

void MainWindows::Exit()
{
    QApplication::exit();
}

void MainWindows::Hide()
{
    //setWindowState(Qt::WindowMinimized);
}

void MainWindows::on_sliderProgres()
{
    //m_player->setPosition(ui->sliderProgres->value());
}

void MainWindows::on_sliderVolume(int position)
{
    //m_player->setVolume(position);
}

void MainWindows::playSelected(QModelIndex index)
{
    /*this->m_playlist->setCurrentIndex(index.row());

    if (m_player->state() != QMediaPlayer::PlayingState)
        m_player->play();*/
}

void MainWindows::on_btnPlayPause_clicked()
{
    //if (m_player->state() != QMediaPlayer::PlayingState)
    //{
    //    //ui->lblMusicTitle->setText("skillet - monster");
    //    ui->btnPlayPause->setText("Pause");
    //    m_player->play();
    //}
    //else
    //{
    //    ui->btnPlayPause->setText("Play");
    //    m_player->pause();
    //}
}

void MainWindows::on_btnStop_clicked()
{
    /*ui->btnPlayPause->setText("Play");
    m_player->stop();*/
}

void MainWindows::on_btnAdd_clicked()
{
    // Using the file selection dialog to make multiple selections of mp3 files
    ////QStringList files = QFileDialog::getOpenFileNames(this,
    ////    tr("Open files"),
    ////    QString(),
    ////    tr("Audio Files (*.mp3)"));

    ////// Next, set the data names and file paths
    ////// into the playlist and table displaying the playlist
    ////foreach(QString filePath, files) {
    ////    QList<QStandardItem *> items;
    ////    items.append(new QStandardItem(QDir(filePath).dirName()));
    ////    items.append(new QStandardItem(filePath));
    ////    m_playListModel->appendRow(items);
    ////    m_playlist->addMedia(QUrl(filePath));
    ////}
}


/*
Update position slider
*/
void MainWindows::on_positionChanged(qint64 position)
{
    //ui->sliderProgres->setValue(position);
}

/*
Set maximum from file
*/
void MainWindows::on_durationChanged(qint64 position)
{
    //ui->sliderProgres->setMaximum(position);
}

MainWindows::~MainWindows()
{
    /*delete m_playListModel;
    delete m_playlist;
    delete m_player;
    delete ui;*/
}










//void MusicPlayer::statusChanged(QMediaPlayer::MediaStatus status)
//{
//    switch (status)
//    {
//    case QMediaPlayer::NoMedia:
//        QMessageBox::information(this, "No media available", "Playlist is empty");
//        stop();
//        break;
//
//
//    case QMediaPlayer::EndOfMedia:
//        stop();
//        break;
//
//
//    case QMediaPlayer::InvalidMedia:
//        QMessageBox::warning(this, "Invalid media", "Format used in current media is not supported");
//        break;
//
//    default:
//        break;
//    }
//}
