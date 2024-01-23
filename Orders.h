#ifndef ONLINESHOP_ORDERS_H
#define ONLINESHOP_ORDERS_H

#include <string>
#include "Alcoholic.h"
#include "NoAlcoholic.h"

using namespace std;

class Orders {
public:
    Orders(string drinks, string date, double totalprice);


    void printOrder();

    string getDrinks();
    void setDrinks(string drinks);

    string getDate();
    void setDate(string date);

    double getTotalprice();
    void setTotalprice(double totalprice);

private:
    string drinks;
    string date;
    double totalprice;

};


#endif //ONLINESHOP_ORDERS_H
