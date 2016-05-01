#ifndef SIMULATOR_H
#define SIMULATOR_H

//#include <QString>
#include <QTextEdit>

class Simulator
{
public:
    Simulator();
public slots:
    //void simit(QString& textBoxText);
    void simit(QTextEdit& textBox);
};

#endif // SIMULATOR_H
