#ifndef ONLINESHOP_ORDERS_H
#define ONLINESHOP_ORDERS_H

#include <string>
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include <vector>
using namespace std;

class Orders {
public:

    static int number;
    Orders(const char *drinks, string date);

    void setNumber(int);
    void setDate(string);
    double setTotalPrice(double);


    int getNumbers();
    string getDate();
    vector<Drinks*> getDrinks();
    double getTotalPrice();

    void printOrder();
    double calculateTotalPrice();


private:
    int numbers;
    vector<Drinks*> drinks;
    string date;
    double totalprice;
};


#endif //ONLINESHOP_ORDERS_H
