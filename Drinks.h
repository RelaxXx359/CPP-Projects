#ifndef ONLINESHOP_DRINKS_H
#define ONLINESHOP_DRINKS_H

#include <iostream>
#include <string>

using namespace std;

class Drinks {
public:
    Drinks(string name, double price, double quantity, string type);

    virtual void print();

    string getName();

    void setName(string name);

    double getPrice();

    void setPrice(double price);

    double getQuantity() ;

    void setQuantity(double quantity);

    string getType();

    void setType(string type);

private:
    string name;
    double price;
    double quantity;
    string type;

};


#endif //ONLINESHOP_DRINKS_H
