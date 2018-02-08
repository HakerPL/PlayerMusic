/********************************************************************************
** Form generated from reading UI file 'MainWindows.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWS_H
#define UI_MAINWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "MyClass/TopBar/topbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowsClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBoxMain;
    QGroupBox *groupBoxUI;
    QPushButton *btnPlayPause;
    QPushButton *btnStop;
    QSlider *sliderVolume;
    QSlider *sliderProgres;
    QLabel *lblMusicTitle;
    QPushButton *btnAdd;
    QTableView *playlistView;
    TopBar *bar;
    QLabel *lblTitle;
    QPushButton *btnExit;
    QPushButton *btnHide;

    void setupUi(QMainWindow *MainWindowsClass)
    {
        if (MainWindowsClass->objectName().isEmpty())
            MainWindowsClass->setObjectName(QStringLiteral("MainWindowsClass"));
        MainWindowsClass->resize(970, 151);
        centralWidget = new QWidget(MainWindowsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(856, 0));
        groupBoxMain = new QGroupBox(centralWidget);
        groupBoxMain->setObjectName(QStringLiteral("groupBoxMain"));
        groupBoxMain->setGeometry(QRect(0, 30, 970, 121));
        groupBoxMain->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        groupBoxUI = new QGroupBox(groupBoxMain);
        groupBoxUI->setObjectName(QStringLiteral("groupBoxUI"));
        groupBoxUI->setGeometry(QRect(4, 4, 500, 113));
        groupBoxUI->setMinimumSize(QSize(500, 0));
        groupBoxUI->setStyleSheet(QLatin1String("border: 0;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        btnPlayPause = new QPushButton(groupBoxUI);
        btnPlayPause->setObjectName(QStringLiteral("btnPlayPause"));
        btnPlayPause->setGeometry(QRect(120, 80, 41, 23));
        btnPlayPause->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        btnStop = new QPushButton(groupBoxUI);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setGeometry(QRect(70, 80, 21, 23));
        btnStop->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        sliderVolume = new QSlider(groupBoxUI);
        sliderVolume->setObjectName(QStringLiteral("sliderVolume"));
        sliderVolume->setGeometry(QRect(320, 80, 160, 22));
        sliderVolume->setStyleSheet(QStringLiteral("border: 0;"));
        sliderVolume->setMaximum(100);
        sliderVolume->setOrientation(Qt::Horizontal);
        sliderProgres = new QSlider(groupBoxUI);
        sliderProgres->setObjectName(QStringLiteral("sliderProgres"));
        sliderProgres->setGeometry(QRect(20, 50, 461, 22));
        sliderProgres->setStyleSheet(QStringLiteral("border: 0;"));
        sliderProgres->setOrientation(Qt::Horizontal);
        lblMusicTitle = new QLabel(groupBoxUI);
        lblMusicTitle->setObjectName(QStringLiteral("lblMusicTitle"));
        lblMusicTitle->setGeometry(QRect(20, 10, 461, 31));
        lblMusicTitle->setStyleSheet(QStringLiteral("border: 0;"));
        btnAdd = new QPushButton(groupBoxUI);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setGeometry(QRect(200, 80, 21, 23));
        btnAdd->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        playlistView = new QTableView(groupBoxMain);
        playlistView->setObjectName(QStringLiteral("playlistView"));
        playlistView->setGeometry(QRect(500, 0, 470, 121));
        bar = new TopBar(centralWidget);
        bar->setObjectName(QStringLiteral("bar"));
        bar->setGeometry(QRect(0, 0, 970, 31));
        bar->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        lblTitle = new QLabel(bar);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(10, 5, 81, 16));
        lblTitle->setStyleSheet(QStringLiteral("border: 0;"));
        btnExit = new QPushButton(bar);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(920, 5, 41, 23));
        btnExit->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        btnHide = new QPushButton(bar);
        btnHide->setObjectName(QStringLiteral("btnHide"));
        btnHide->setGeometry(QRect(870, 5, 41, 23));
        btnHide->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        MainWindowsClass->setCentralWidget(centralWidget);

        retranslateUi(MainWindowsClass);

        QMetaObject::connectSlotsByName(MainWindowsClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowsClass)
    {
        MainWindowsClass->setWindowTitle(QApplication::translate("MainWindowsClass", "MainWindows", Q_NULLPTR));
        groupBoxUI->setTitle(QString());
        btnPlayPause->setText(QApplication::translate("MainWindowsClass", "Play", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindowsClass", "[ ]", Q_NULLPTR));
        lblMusicTitle->setText(QApplication::translate("MainWindowsClass", "TextLabel", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("MainWindowsClass", "+", Q_NULLPTR));
        bar->setTitle(QString());
        lblTitle->setText(QApplication::translate("MainWindowsClass", "Player Music", Q_NULLPTR));
        btnExit->setText(QApplication::translate("MainWindowsClass", "X", Q_NULLPTR));
        btnHide->setText(QApplication::translate("MainWindowsClass", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowsClass: public Ui_MainWindowsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
