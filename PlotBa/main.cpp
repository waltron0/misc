#include "mainwindow.h"
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

    QTextEdit *textEdit = new QTextEdit;
    //textEdit->setText(textEdit->currentFont().rawName());
    //tryin to make a button that sets a value to begin with:  QPushButton *scaleButton = new QPushButton()
    QPushButton *quitButton = new QPushButton("&Quit");

    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);

    window.show();

    QFile file("C:/Walton/data/20160311/exp298_1.SPE");
    file.open(QIODevice::ReadOnly);
    QDataStream in(&file);
    int n=0;
    while(!in.atEnd()) {
        qint64 a;
        in >> a;
        //cout << n << " " << a << endl;
        n++;
    }
    //system("PAUSE");

    return a.exec();
}
