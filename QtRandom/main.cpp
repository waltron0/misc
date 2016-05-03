#include "mainwindow.h"
#include "thing.h"
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextEdit *textEditScale = new QTextEdit;
    QTextEdit *textDisplayScale = new QTextEdit;

    QPushButton *clearButton = new QPushButton("Clear");
    QPushButton *coutButton = new QPushButton("cout");
    QPushButton *quitButton = new QPushButton("Quit");//not sure that the difference is if you put a & in front of Quit

    //Thing *t=new Thing();
    //Thing t;
    QObject::connect(clearButton, SIGNAL(released()), textEditScale, SLOT(clear())); //for some reason i can't call setText as the slot
    //QObject::connect(coutButton, SIGNAL(clicked()), t, SLOT(saySomething()));
    //read this, you stupid beginner:
    //https://wiki.qt.io/Qt_for_Beginners
    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEditScale);
    //layout->addWidget(MainWindow::scaleButton);
    layout->addWidget(clearButton);
    layout->addWidget(coutButton);
    //layout->addWidget(textDisplayScale);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);

    window.show();

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //this is using the editor thing basically -- if you want to add classes with slots that can be used in this way,
    //see the Chrome HTML file in helpfulAnswers called:
    // Qt creator I can't make my class become the recevier(slot) - Stack Overflow
    /*MainWindow w;
    QPushButton *b=new QPushButton("&um");
    //w.Add

    QVBoxLayout *layout = new QVBoxLayout;
    //layout->addWidget(textBox);
    layout->addWidget(b);
    //layout->addWidget(textEditScale); //this works but then has that horrible error when you close the window
    //layout->addWidget(simButton);
    //layout->addWidget(quitButton);

    //s->simit(textEditScale);

    //QWidget window;

    //already has a layout:
    //w.setLayout(layout);

    //w.centralWidget()->layout()->addWidget(b);

    w.show();*/
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return a.exec();
}
