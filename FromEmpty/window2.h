#ifndef WINDOW2_H
#define WINDOW2_H

#include <QWidget>

class QPushButton; // DONT UNDERSATDN ... I mean, this class is already defined, and why not just do #include <QPushButton> ?
class QLCDNumber; // same, trying manually
class QTextEdit; // same, trying manually
class TestClass;
class Window2 : public QWidget
{
    Q_OBJECT
public:
    explicit Window2(QWidget *parent = 0);
private:
    QPushButton *baton;
    QPushButton *quitButton;
    QLCDNumber *numbLCD;
    QTextEdit *textEditScale;
    TestClass *tezt;
signals:

public slots:
};

#endif // WINDOW2_H
