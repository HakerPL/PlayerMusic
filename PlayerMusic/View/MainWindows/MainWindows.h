#ifndef PLAYERMUSIC_H
#define PLAYERMUSIC_H

//#include <QtWidgets/QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QStandardItemModel>
#include "ui_MainWindows.h"

class MainWindows : public QMainWindow
{
    Q_OBJECT

public:
    MainWindows(QWidget *parent = 0);
    ~MainWindows();

private:
    Ui::MainWindowsClass* ui;

    QStandardItemModel* m_playListModel;   // Data Model for Playlist
    QMediaPlayer* m_player;
    QMediaPlaylist* m_playlist;

private slots:
    /**
     * \brief 
     */
    void Exit();
    void Hide();
    void PlaySelected(QModelIndex index);
    void PlayPause();
    void Stop();
    void Play();
    void Pause();
    void StatusChanged(QMediaPlayer::MediaStatus status);

    void on_sliderProgres();
    void on_sliderVolume(int position);
    void on_btnAdd_clicked();

    void on_positionChanged(qint64 position);
    void on_durationChanged(qint64 position);
};

#endif // PLAYERMUSIC_H
