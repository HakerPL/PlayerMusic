#include "MainWindows.h"
#include "ui_MainWindows.h"
#include <QFileDialog>
#include <QDir>
#include <QWidget>
#include <QMessageBox>
#include <qtoolbutton.h>
#include <QHeaderView>
#include <QApplication>
#include <QMediaMetaData>

using namespace std;

MainWindows::MainWindows(QWidget *parent)
    : QMainWindow(parent)
{
    ui = new Ui::MainWindowsClass();
    ui->setupUi(this);
    m_playListModel = new QStandardItemModel(this);
    ui->playlistView->setModel(m_playListModel);
    m_playListModel->setHorizontalHeaderLabels(QStringList() //<< tr("Audio Track")
        << tr("File Path"));
    //ui->playlistView->hideColumn(1);
    ui->playlistView->verticalHeader()->setVisible(false);
    ui->playlistView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->playlistView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->playlistView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->playlistView->horizontalHeader()->setStretchLastSection(true);

    m_player = new QMediaPlayer(this);          // Init player
    m_playlist = new QMediaPlaylist();  // Init playlist
    m_playlist->setPlaybackMode(QMediaPlaylist::Loop);  // Set circular play mode playlist


    connect(m_player, &QMediaPlayer::positionChanged, this, &MainWindows::on_positionChanged);
    connect(m_player, &QMediaPlayer::durationChanged, this, &MainWindows::on_durationChanged);

    ui->sliderVolume->setValue(ui->sliderVolume->maximum());

    connect(ui->sliderProgres, SIGNAL(sliderReleased()), this, SLOT(on_sliderProgres()));
    connect(ui->sliderVolume, SIGNAL(valueChanged(int)), this, SLOT(on_sliderVolume(int)));

    //connect(ui->playlistView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(PlaySelected(QModelIndex)));

    //m_player->setMedia(QUrl::fromLocalFile("F:/Mp3/skillet - m.mp3"));
    //qDebug() << m_player->errorString();

    //Name of program visible on Windows bar
    setWindowTitle(ui->lblTitle->text());

    connect(ui->btnHide, SIGNAL(clicked()), this, SLOT(Hide()));
    connect(ui->btnExit, SIGNAL(clicked()), this, SLOT(Exit()));

    //connect(ui->btnPlayPause, &QToolButton::clicked, m_player, &QMediaPlayer::play);

    connect(ui->btnPlayPause, SIGNAL(released()), this, SLOT(PlayPause()));
    connect(ui->btnStop, SIGNAL(released()), this, SLOT(Stop()));

    //Player status change
    //////////connect(m_player, SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)), this, SLOT(StatusChanged(QMediaPlayer::MediaStatus)));
    
    //connect(ui->btnAdd, SIGNAL(clicked()), this, SLOT(AddSong()));
    //connect(ui->btnStop, &QToolButton::clicked, m_player, &QMediaPlayer::stop); //click button and stop song

	//m_player->setPlaylist(m_playlist);
}

void MainWindows::Exit()
{
    QApplication::exit();
}

void MainWindows::Hide()
{
    setWindowState(Qt::WindowMinimized);
}

void MainWindows::on_sliderProgres()
{
    m_player->setPosition(ui->sliderProgres->value());
}

void MainWindows::on_sliderVolume(int position)
{
    m_player->setVolume(position);
}

void MainWindows::PlaySelected(QModelIndex index)
{
    this->m_playlist->setCurrentIndex(index.row());

	if (m_player->state() != QMediaPlayer::PlayingState)
	{
		Stop();
		Play();
	}

    
}

void MainWindows::PlayPause()
{
    if (m_player->state() != QMediaPlayer::PlayingState)
    {
        //ui->lblMusicTitle->setText("skillet - monster");
        Play();
    }
    else
    {
        Pause();
    }
}

void MainWindows::Play()
{
    ui->btnPlayPause->setText("Pause");
    m_player->play();
	QString test = m_player->errorString();

    ui->sliderProgres->setMaximum(m_player->duration());
    ui->sliderProgres->setValue(0);
}

void MainWindows::Pause()
{
    ui->btnPlayPause->setText("Play");
    m_player->pause();
}

void MainWindows::Stop()
{
    ui->btnPlayPause->setText("Play");
    m_player->stop();
	QString test = m_player->errorString();
}

void MainWindows::StatusChanged(QMediaPlayer::MediaStatus status)
{
    switch (status)
    {
        case QMediaPlayer::NoMedia:
            QMessageBox::information(this, "No media available", "Playlist is empty");
            Stop();
            break;


        case QMediaPlayer::EndOfMedia:
            Stop();
            break;


        case QMediaPlayer::InvalidMedia:
            QMessageBox::warning(this, "Invalid media", "Format used in current media is not supported");
            break;

        default:
            break;
    }
}

void MainWindows::on_btnAdd_clicked()
{
  //  // Using the file selection dialog to make multiple selections of mp3 files
  //  QStringList files = QFileDialog::getOpenFileNames(this,
  //      tr("Open files"),
  //      QString(),
  //      tr("Audio Files (*.mp3)"));

  //  // Next, set the data names and file paths
  //  // into the playlist and table displaying the playlist
  //  foreach(QString filePath, files) {
  //      QList<QStandardItem*> items;
  //      //items.append(new QStandardItem(QDir(filePath).dirName()));
  //      items.append(new QStandardItem(filePath));
  //      m_playListModel->appendRow(items);

		//QMediaContent content = QMediaContent(QUrl::fromLocalFile(filePath));

		//QString test = filePath;
  //      m_playlist->addMedia(content);
  //  }


	m_player->setMedia(QUrl::fromLocalFile("D:\Moje Programy\C++\PlayerMusic\01. Adrenaline Mob - Mob Is Back.mp3"));
	QString test = m_player->errorString();
	/*const QStringList files = QFileDialog::getOpenFileNames(this, "Open File", "", "MP3 files (*.mp3)");
	QList<QMediaContent> content;
	foreach(QString const &argument, files)
	{
		QFileInfo fileInfo(argument);
		if (fileInfo.exists()) {
			QUrl url = QUrl::fromLocalFile(fileInfo.absoluteFilePath());
			if (fileInfo.suffix().toLower() == QLatin1String("m3u")) {
				m_playlist->load(url);
			}
			else
				m_playlist->addMedia(url);
		}
		else {
			QUrl url(argument);
			if (url.isValid()) {
				m_playlist->addMedia(url);
			}
		}

	}

	QString title = m_player->metaData(QMediaMetaData::Title).toString();*/
}


/*
Update position slider
*/
void MainWindows::on_positionChanged(qint64 position)
{
    ui->sliderProgres->setValue(position);
}

/*
Set maximum from file
*/
void MainWindows::on_durationChanged(qint64 position)
{
    ui->sliderProgres->setMaximum(position);
}

MainWindows::~MainWindows()
{
    delete m_playListModel;
    delete m_playlist;
    delete m_player;
    delete ui;
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
