#ifndef CARRENTAL_FAMILYCAR_H
#define CARRENTAL_FAMILYCAR_H

#include <iostream>
#include <string>
#include "Car.h"
using namespace std;
class FamilyCar: public Car{
public:
    FamilyCar(string, string, string, string, string , string, double = 0.0, int = 0);

    double calculatePrice() override;

private:

};


#endif //CARRENTAL_FAMILYCAR_H
