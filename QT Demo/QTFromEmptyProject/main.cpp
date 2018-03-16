#include "window.h"
#include <QApplication>


int main(int args, char **argv){
    /*Properties*/
    QApplication app (args, argv);

    //Create instance of window and displaying the window
    Window window;
    window.show();

    return app.exec();

}
