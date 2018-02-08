#ifndef TOPBAR_H
#define TOPBAR_H

#include <QObject>
#include <QtWidgets/QGroupBox>
#include <QMouseEvent>
//#include <QEvent>

/*
    Class pretending window top bar
*/
class TopBar : public QGroupBox
{
    Q_OBJECT

public:
    TopBar(QWidget *parent = 0);
    ~TopBar();

    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void Mouse_Pressed();

private:
    QPoint offset;
};

#endif // TOPBAR_H
