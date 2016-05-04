#include <QApplication>
#include <QPushButton>
//#include <QIcon>
#include "window2.h"

//this is all from the chrome HTML file in helpfulAnswers:
//Qt for Beginners - Qt Wiki

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

 /*QPushButton button;
 button.setText("tdasdsa");
 button.setToolTip("a too ti");
 //QIcon icon("C:/archives/pics_jamiePhone_20151126/IMG_14896013675339.jpg");
 //button.setIcon(icon);
 button.show();*/

    //////////////////////////////////////
    //comment this out and it should work:
    //nothing, see other files
    //////////////////////////////////////
    //////////////////////////////////////

    Window2 winodw;
    winodw.show();

   return app.exec();
}
