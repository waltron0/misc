#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::simulate() {
    //cout << "funk" << endl;
  //  return;
//}

/*void MainWindow::sim2014and2015() {

    //simulate 2014 with summer sloth
    Year year2014;
    simulateData(year2014, true);
    outputAnalysis(year2014);

    //simulate 2015 with some kind of program that prevents summer sloth:
    Year year2015;
    simulateData(year2015, false);
    outputAnalysis(year2015);

    return;
}*/
