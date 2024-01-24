#ifndef ONLINESHOP_DRINKS_H
#define ONLINESHOP_DRINKS_H

#include <iostream>
#include <string>

using namespace std;

class Drinks {
public:
    Drinks(string name, double price, int quantity, string type);

    virtual void print();
    virtual double calculatePrice();

    void setName(string name);
    void setPrice(double price);
    void setQuantity(int quantity);
    void setType(string type);

    string getName();
    double getPrice();
    int getQuantity() ;
    string getType();



private:
    string name;
    double price;
    int quantity;
    string type;

};


#endif //ONLINESHOP_DRINKS_H
