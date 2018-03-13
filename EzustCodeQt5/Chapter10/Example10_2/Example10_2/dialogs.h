#ifndef APPWINDEMO_H
#define APPWINDEMO_H

#include <QMainWindow>

/**
  Example QMainWindow application with dialogs
  */
class Dialogs : public QMainWindow {
    Q_OBJECT
public:
    Dialogs();

public slots:
    void askQuestion();
    void askDumbQuestion();
private:
    QString answer;

};
#endif 

