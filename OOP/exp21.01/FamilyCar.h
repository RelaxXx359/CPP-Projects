#ifndef EXP21_01_FAMILYCAR_H
#define EXP21_01_FAMILYCAR_H

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class FamilyCar : public Car {
public:
    FamilyCar(const string &brand, const string &model, const string &type, const string &color, const string &nShassi,
              const string &numCar, double consumption, double fee, double distance);


    void calculate(double dis);

};


#endif //EXP21_01_FAMILYCAR_H
