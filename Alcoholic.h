#ifndef ONLINESHOP_ALCOHOLIC_H
#define ONLINESHOP_ALCOHOLIC_H
#include "Drinks.h"

class Alcoholic: public Drinks{
public:
    Alcoholic( string name, double price, double quantity, string type, int volume, double fee);

     double calculatePrice();

    int getVolume();

    void setVolume(int volume);

    double getFee();

    void setFee(double fee);

private:
    int volume;
    double fee;

};


#endif //ONLINESHOP_ALCOHOLIC_H
