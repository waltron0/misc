#include "mainwindow.h"
//#include "scalebutton.h"
#include <QApplication>
#include <QFile>
#include <iostream>
#include <QTextEdit>
#include <QtGui>
#include <QPushButton>
#include <QVBoxLayout>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    //textbox
    //QTextEdit te;
    //te.show();

    //doesn't work:
    //QLineEdit *textEditScale = new QLineEdit("0");
    //textEditScale->setText("texxxt");
    //QLineEdit *textDisplayScale = new QLineEdit("0");
    //textDisplayScale->setText(textEditScale->toPlainText());

    QTextEdit *textEditScale = new QTextEdit;
    //i don't know why this doesn't work, namespace?
    /*stringstream ss;
    int intag=5;
    ss << intag;
    textEditScale->setText(ss.str());*/
    //then you can also get the integer out of the stringstream by doing ss >> [integer]
    //textEditScale->setText("asdjaspodfsdiasd");

    //HERERERERE:
    //the following makes it crash:
    //ScaleButton *s=new ScaleButton(QWidget *parent);
    //and also yout function def in ScaleButton probably makes no sense.
    //this is probably a better thing to look at:   https://wiki.qt.io/How_to_Use_QPushButton

    QTextEdit *textDisplayScale = new QTextEdit;
    //textDisplayScale->setText(textEditScale->toPlainText());
    //textEdit->setText(textEdit->currentFont().rawName());
    //tryin to make a button that sets a value to begin with:  QPushButton *scaleButton = new QPushButton()
    // look at this example, I bet it's very inclusive:  http://doc.qt.io/qt-5/qtwidgets-widgets-calculator-example.html
    QPushButton *quitButton = new QPushButton("&Quit");

    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    QPushButton *scaleButton = new QPushButton("Scale");//, this);
    //QObject::connect(scaleButton, SIGNAL(released()), textEditScale, SLOT(clear())); //for some reason i can't call setText as the slot
    connect(scaleButton, SIGNAL(clicked()), [=]{ textEditScale->setText(QString("set the text")); });
    //connect(pushButton1, &QPushButton::clicked, [=]{ lineEdit->setText(QString("1"); });
    //from    https://forum.qt.io/topic/57845/solved-settext-not-working/3

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEditScale);
    //layout->addWidget(MainWindow::scaleButton);
    layout->addWidget(scaleButton);
    layout->addWidget(textDisplayScale);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);

    window.show();//Maximized

    /*QFile file("C:/Walton/data/20160311/exp298_1.SPE");
    file.open(QIODevice::ReadOnly);
    QDataStream in(&file);
    int n=0;
    while(!in.atEnd()) {
        qint64 a;
        in >> a;
        //cout << n << " " << a << endl;
        n++;
    }*/
    //system("PAUSE");

    return a.exec();
}
