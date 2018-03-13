#include <QApplication>
#include "inputform.h"

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);
  InputForm inF;
  inF.show();
  return app.exec();
}

