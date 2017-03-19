#include "topbar.h"

TopBar::TopBar(QWidget *parent)
    : QGroupBox(parent)
{

}

TopBar::~TopBar()
{

}

void TopBar::mousePressEvent(QMouseEvent * event)
{
    //Map position mouse to parent of that TopBar
    offset = mapToParent(event->pos());
}

void TopBar::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
        //Get parent of parent and cast QObject to QWidget, then move that object by mouse position - offset mapToGlobal
        reinterpret_cast<QWidget*>(parent()->parent())
                        ->move(mapToGlobal(event->pos() - offset));
}