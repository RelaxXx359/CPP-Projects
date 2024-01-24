#ifndef ONLINESHOP_ALCOHOLIC_H
#define ONLINESHOP_ALCOHOLIC_H

#include "Drinks.h"

class Alcoholic : public Drinks {
public:
    Alcoholic(string name, double price, int quantity, string type, int volume, double fee);


    int getVolume();

    void setVolume(int volume);

    double getFee();

    void setFee(double fee);

    double calculatePrice();

    void print();

private:
    int volume;
    double fee;

};


#endif //ONLINESHOP_ALCOHOLIC_H
