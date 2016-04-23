#ifndef THING_H
#define THING_H

#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class Thing : public QTextEdit
{
    Q_OBJECT

private slots:
    void copyIt();
};

#endif // THING_H
