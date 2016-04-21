#ifndef SCALEBUTTON_H
#define SCALEBUTTON_H

#include <QPushButton>

namespace Ui {
class ScaleButton;
}

class ScaleButton : public QPushButton
{
    Q_OBJECT

private:
    double scale(double orig, double scaleBy);
};

#endif // SCALEBUTTON_H
