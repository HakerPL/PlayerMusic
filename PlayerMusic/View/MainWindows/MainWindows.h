#ifndef PLAYERMUSIC_H
#define PLAYERMUSIC_H

#include <QtWidgets/QMainWindow>
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
    void Exit();
    void Hide();
    void playSelected(QModelIndex index);

    void on_sliderProgres();
    void on_sliderVolume(int position);
    void on_btnPlayPause_clicked();
    void on_btnStop_clicked();
    void on_btnAdd_clicked();

    void on_positionChanged(qint64 position);
    void on_durationChanged(qint64 position);
};

#endif // PLAYERMUSIC_H
