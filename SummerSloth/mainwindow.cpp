#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    simButton = new QPushButton(this);
    connect(simButton,SIGNAL(clicked()),this,SLOT(simulate()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
