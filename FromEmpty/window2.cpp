#include "window2.h"
//#include "lcddisplayscale.h"
#include <QPushButton>
#include <QApplication>
#include <QLCDNumber>
#include <QTextEdit>

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

    textEditScale = new QTextEdit(this);
    textEditScale->setGeometry(30,40,40,25);

    numbLCD = new QLCDNumber(this);
    //numbLCD->setGeometry(100,15,20,20);
    numbLCD->setGeometry(250,100,50,50);
    //numbLCD->display(4);
    //QObject::connect(textEditScale,SIGNAL(textChanged()),numbLCD,SLOT(display(5)));
}
