#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QWidget>

class TestClass : public QWidget
{
    Q_OBJECT // SOLVED:  this was causing this error: undefined reference to 'vtable for TestClass', which is
             // an error that happens when a (virtual?) function is declared but not defined (in this case, the Q_OBJECT macro)
    //a guy said this could (and he was right) because:
    // Another possibility is that the class in question once didn't belong to Qt meta object system (that is,
    // it had no Q_OBJECT or maybe didn't inherit from QObject at all), so qmake needs to be run again in order
    // to create the necessary rules for MOC. The easiest way to force qmake to be run is to make some insignificant
    // changes to the project file to update its timestamp, like adding and then removing some white space.
    //it may still exist here:    http://stackoverflow.com/questions/4774291/q-object-throwing-undefined-reference-to-vtable-error

public:
    //explicit TestClass(QWidget *parent=0); this works too, idk
    TestClass(QWidget *parent);
public slots:
    void testSim();
};

#endif // TESTCLASS_H
