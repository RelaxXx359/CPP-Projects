#ifndef ONLINESHOP_NONALCOHOLIC_H
#define ONLINESHOP_NONALCOHOLIC_H
#include "Drinks.h"

class NonAlcoholic: public Drinks{
public:
    NonAlcoholic(string name, double price, int quantity, string type, double litres, int cityTax);

    double getLitres();
    void setLitres(double litres);

    int getCityTax();
    void setCityTax(int cityTax);

    void print();
    double calculatePrice();

private:
    double litres;
    int cityTax;


};


#endif //ONLINESHOP_NONALCOHOLIC_H
