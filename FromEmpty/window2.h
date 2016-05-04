#ifndef WINDOW2_H
#define WINDOW2_H

#include <QWidget>

class QPushButton; //comment this out and it should work  (I don't understand this ..... I mean, this class is already defined, and why not just do #include <QPushButton> ?
class Window2 : public QWidget
{
    Q_OBJECT
public:
    explicit Window2(QWidget *parent = 0);
private://comment this out and it should work
    QPushButton *baton;//comment this out and it should work
    QPushButton *quitButton;//comment this out and it should work
signals:

public slots:
};

#endif // WINDOW2_H
