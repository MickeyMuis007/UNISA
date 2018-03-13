#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QDate>

class Product{
public:
    Product();
    void setName(QString n);
    void setDescription(QString d);
    void setDateAdded(QDate d);
    void setPrice(double p);

    QString getName()const;
    double getPrice()const;
    QDate getDateAdded()const;
    QString getDescription()const;

private:
    QString name;
    QString description;
    double price;
    QDate dateValid;
};

#endif // PRODUCT_H
