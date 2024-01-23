#ifndef ONLINESHOP_NOALCOHOLIC_H
#define ONLINESHOP_NOALCOHOLIC_H
#include "Drinks.h"

class NoAlcoholic: public Drinks{
public:
    NoAlcoholic(string name, double price, double quantity, string type, double litres, double cityTax);

    double calculatePrice();


    double getLitres();

    void setLitres(double litres);

    double getCityTax();

    void setCityTax(double cityTax);

private:
    double litres;
    double cityTax;


};


#endif //ONLINESHOP_NOALCOHOLIC_H
