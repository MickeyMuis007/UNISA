#include <QApplication>
#include <QDebug>
#include "product.h"
#include "productform.h"

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);
  Product p;
  ProductForm pf (&p);
  return pf.exec();
}

