#include "View/MainWindows/MainWindows.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindows w;
    //Hide windows border

    w.setWindowFlags(Qt::MSWindowsFixedSizeDialogHint); //Set window to fixed size
    w.setWindowFlags(Qt::CustomizeWindowHint); //Set window with no title bar
    w.setWindowFlags(Qt::FramelessWindowHint); //Set a frameless window

                                               //w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
