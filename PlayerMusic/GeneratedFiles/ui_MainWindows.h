/********************************************************************************
** Form generated from reading UI file 'MainWindows.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWS_H
#define UI_MAINWINDOWS_H

#include <MyClass/TopBar/topbar.h>
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

QT_BEGIN_NAMESPACE

class Ui_MainWindowsClass
{
public:
    QWidget *centralWidget;
    TopBar *Topbar;
    QPushButton *btnExit;
    QPushButton *btnHide;
    QLabel *lblTitle;
    QLabel *lblIcon;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox;
    QGroupBox *groupBox1;
    QPushButton *btn;
    QPushButton *btnPlayPause;
    QPushButton *btnStop;
    QSlider *sliderVolume;
    QSlider *sliderProgres;
    QLabel *lblMusicTitle;
    QPushButton *btnAdd;
    QTableView *playlistView;

    void setupUi(QMainWindow *MainWindowsClass)
    {
        if (MainWindowsClass->objectName().isEmpty())
            MainWindowsClass->setObjectName(QStringLiteral("MainWindowsClass"));
        MainWindowsClass->resize(970, 171);
        centralWidget = new QWidget(MainWindowsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(856, 0));
        Topbar = new TopBar(centralWidget);
        Topbar->setObjectName(QStringLiteral("Topbar"));
        Topbar->setGeometry(QRect(0, 0, 970, 21));
        Topbar->setLayoutDirection(Qt::LeftToRight);
        Topbar->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        Topbar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnExit = new QPushButton(Topbar);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(950, 0, 21, 23));
        btnExit->setLayoutDirection(Qt::LeftToRight);
        btnHide = new QPushButton(Topbar);
        btnHide->setObjectName(QStringLiteral("btnHide"));
        btnHide->setGeometry(QRect(920, 0, 21, 23));
        btnHide->setLayoutDirection(Qt::LeftToRight);
        btnHide->setFlat(false);
        lblTitle = new QLabel(Topbar);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(30, 0, 141, 21));
        lblIcon = new QLabel(Topbar);
        lblIcon->setObjectName(QStringLiteral("lblIcon"));
        lblIcon->setGeometry(QRect(0, 0, 24, 21));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 20, 970, 31));
        groupBox_2->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 50, 970, 121));
        groupBox->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        groupBox1 = new QGroupBox(groupBox);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        groupBox1->setGeometry(QRect(4, 4, 500, 113));
        groupBox1->setMinimumSize(QSize(500, 0));
        groupBox1->setStyleSheet(QLatin1String("border: 0;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        btn = new QPushButton(groupBox1);
        btn->setObjectName(QStringLiteral("btn"));
        btn->setGeometry(QRect(20, 80, 41, 23));
        btn->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        btnPlayPause = new QPushButton(groupBox1);
        btnPlayPause->setObjectName(QStringLiteral("btnPlayPause"));
        btnPlayPause->setGeometry(QRect(70, 80, 41, 23));
        btnPlayPause->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        btnStop = new QPushButton(groupBox1);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setGeometry(QRect(120, 80, 21, 23));
        btnStop->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        sliderVolume = new QSlider(groupBox1);
        sliderVolume->setObjectName(QStringLiteral("sliderVolume"));
        sliderVolume->setGeometry(QRect(320, 80, 160, 22));
        sliderVolume->setStyleSheet(QStringLiteral("border: 0;"));
        sliderVolume->setMaximum(100);
        sliderVolume->setOrientation(Qt::Horizontal);
        sliderProgres = new QSlider(groupBox1);
        sliderProgres->setObjectName(QStringLiteral("sliderProgres"));
        sliderProgres->setGeometry(QRect(20, 50, 461, 22));
        sliderProgres->setStyleSheet(QStringLiteral("border: 0;"));
        sliderProgres->setOrientation(Qt::Horizontal);
        lblMusicTitle = new QLabel(groupBox1);
        lblMusicTitle->setObjectName(QStringLiteral("lblMusicTitle"));
        lblMusicTitle->setGeometry(QRect(20, 10, 461, 31));
        lblMusicTitle->setStyleSheet(QStringLiteral("border: 0;"));
        btnAdd = new QPushButton(groupBox1);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setGeometry(QRect(200, 80, 21, 23));
        btnAdd->setStyleSheet(QLatin1String("border-top: 3px solid;\n"
"border-bottom: 3px solid;\n"
"border-left: 3px solid;\n"
"border-right: 3px solid;\n"
"border-color: rgb(0, 150, 0);"));
        playlistView = new QTableView(groupBox);
        playlistView->setObjectName(QStringLiteral("playlistView"));
        playlistView->setGeometry(QRect(500, 0, 470, 121));
        MainWindowsClass->setCentralWidget(centralWidget);

        retranslateUi(MainWindowsClass);

        QMetaObject::connectSlotsByName(MainWindowsClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowsClass)
    {
        MainWindowsClass->setWindowTitle(QApplication::translate("MainWindowsClass", "MainWindows", Q_NULLPTR));
        Topbar->setTitle(QString());
        btnExit->setText(QApplication::translate("MainWindowsClass", "X", Q_NULLPTR));
        btnHide->setText(QApplication::translate("MainWindowsClass", "-", Q_NULLPTR));
        lblTitle->setText(QApplication::translate("MainWindowsClass", "Music Player", Q_NULLPTR));
        lblIcon->setText(QApplication::translate("MainWindowsClass", "AR", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        groupBox1->setTitle(QString());
        btn->setText(QApplication::translate("MainWindowsClass", "PushButton", Q_NULLPTR));
        btnPlayPause->setText(QApplication::translate("MainWindowsClass", "Play", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindowsClass", "[ ]", Q_NULLPTR));
        lblMusicTitle->setText(QApplication::translate("MainWindowsClass", "TextLabel", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("MainWindowsClass", "+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowsClass: public Ui_MainWindowsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
