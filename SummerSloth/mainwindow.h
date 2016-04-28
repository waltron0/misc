#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *simButton;

private:
    Ui::MainWindow *ui;
    void simulate(); //HERERERERERE .......... not tested
};

#endif // MAINWINDOW_H
