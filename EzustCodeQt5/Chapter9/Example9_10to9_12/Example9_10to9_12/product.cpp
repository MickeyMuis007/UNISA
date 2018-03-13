#include "product.h"

Product::Product(){
    name = "no-name";
    description = "unknown";
    price = 0.0;
    dateValid = QDate::currentDate();
}

void Product::setName(QString n){
    name = n;
}

void Product::setDescription(QString d){
    description = d;
}

void Product::setDateAdded(QDate d){
    dateValid = d;
}

void Product::setPrice(double p){
    price = p;
}

QString Product::getName() const{
    return name;
}

QString Product::getDescription() const{
    return description;
}

double Product::getPrice()const{
    return price;
}

QDate Product::getDateAdded()const{
    return dateValid;
}
