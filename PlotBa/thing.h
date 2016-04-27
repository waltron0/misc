#ifndef THING_H
#define THING_H

#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class Thing // : public QTextEdit
{
    Q_OBJECT

public:
    Thing();
    int thingValue;

private slots:
    void copyEditBox();
};

#endif // THING_H
