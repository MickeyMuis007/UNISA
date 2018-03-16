
#include <QApplication>
#include <QPushButton>

int main(int args, char **argv){
    /*Properties*/
    QApplication app (args, argv);
    QFont font ("Courier");
    QIcon icon ("image/goals.jpg");
    QWidget window;
    QPushButton *button  = new QPushButton("test", &window);

    /*Property calls*/
    window.setFixedSize(100, 50);
    button->setText("Hi There");
    button->setToolTip("A tooltip");
    button->setFont(font);
    button->setIcon(icon);
    button->setGeometry(10,10,80,30);



    window.show();
    //button2.show();

    return app.exec();

}
