#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //scaleButton = new QPushButton("Scale", this);
    //scaleButton->setGeometry(QRect(QPoint(100, 100),QSize(200, 50)));
    //QObject::connect(scaleButton, SIGNAL (released()), this, SLOT (scale()));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::scale()
{
    // change the text
    scaleButton->setText("Example");
    // resize button
    scaleButton->resize(100,100);
}*/
