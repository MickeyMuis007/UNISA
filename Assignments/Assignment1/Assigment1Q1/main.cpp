#include <QApplication>
#include <QProgressBar>
#include <QSlider>

#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    //Create a container window
    QWidget window1;
    Window window;
    window1.setFixedSize(200, 80);

    //Create a progress bar
    //with the range between 0 and 100, and a starting value of 0
    QProgressBar *progressBar = new QProgressBar(&window1);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 180, 30);

    //Create a horizontal slider
    //with the range between 0 and 100, and a starting value of 0
    QSlider *slider = new QSlider(&window1);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);

    window1.show();

    //Connection
    //This connection set the value of the progress bar
    //while the slider's value change
    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT(setValue(int)));

    //window.show();


    return app.exec();
}
