#include "window2.h"
#include <QPushButton>
#include <QApplication>

Window2::Window2(QWidget *parent) : QWidget(parent)
{
    //Set window size:
    setFixedSize(500,250);//comment this out and it should work

    //create and position the button
    //I guess you don't even need a layout... it just puts the button in there
    baton = new QPushButton("baton",this);//comment this out and it should work
    baton->setGeometry(10,10,80,30);//comment this out and it should work

    quitButton = new QPushButton("Quit",this);//comment this out and it should work
    quitButton->setGeometry(420,220,80,30);//comment this out and it should work
    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));//comment this out and it should work

    //now just try to make baton do something...
}
