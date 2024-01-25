#ifndef CARRENTAL_FAMILYCAR_H
#define CARRENTAL_FAMILYCAR_H

#include <iostream>
#include <string>
#include "Car.h"
using namespace std;
class FamilyCar: public Car{
public:
    FamilyCar(string, string, string, string, string , string, double = 0.0, double = 0.0, double = 0.0);

    double getTaxRent();
    void setTaxRent(double taxRent);
    void setCoefficient(double coefficient);
    double getCoefficient();

    [[maybe_unused]] double calculatePrint(double distance);


private:
    double taxRent;
    double coefficient;
};


#endif //CARRENTAL_FAMILYCAR_H
