#include "window2.h"
#include <QPushButton>
#include <QApplication>
#include <QLCDNumber>

Window2::Window2(QWidget *parent) : QWidget(parent)
{
    //Set window size:
    setFixedSize(500,250);

    //create and position the button
    //I guess you don't even need a layout... it just puts the button in there
    baton = new QPushButton("baton",this); // is it making itself (the button) the parent, or does it refer to the Window2?
    baton->setGeometry(10,10,80,30);

    quitButton = new QPushButton("Quit",this);
    quitButton->setGeometry(420,220,80,30);
    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    numbLCD = new QLCDNumber();
    numbLCD->setGeometry(30,30,40,40);
    numbLCD->display(4);
    //statusBar->addWidget(numbLCD);
}
