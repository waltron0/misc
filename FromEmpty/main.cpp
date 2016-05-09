#include <QApplication>
#include <QPushButton>
//#include <QIcon>
#include "window2.h"
//#include "lcddisplayscale.h"
#include "testclass.h"

//this began from the chrome HTML file in helpfulAnswers:
//Qt for Beginners - Qt Wiki

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    //TestClass *wer=new TestClass;
    //TestClass wer; why the FUCK can't I declare one of these

    Window2 winodw;
    winodw.show();

   return app.exec();
}








/*QPushButton button;
button.setText("tdasdsa");
button.setToolTip("a too ti");
//QIcon icon("C:/archives/pics_jamiePhone_20151126/IMG_14896013675339.jpg");
//button.setIcon(icon);
button.show();*/
