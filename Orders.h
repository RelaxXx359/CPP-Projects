#ifndef ONLINESHOP_ORDERS_H
#define ONLINESHOP_ORDERS_H

#include <string>
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include <vector>
using namespace std;

class Orders {
public:
    Orders(const string &date);

    void setNumber(int);
    void setDate(string);
    double setTotalPrice(double);


    int getNumbers();
    string getDate();
    double getTotalPrice();

    void printOrder();
    double calculateTotalPrice();


private:
    vector<Drinks*> drinks;
    string date;
    double totalprice;
};


#endif //ONLINESHOP_ORDERS_H
