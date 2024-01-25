#ifndef CARRENTAL_LUXURYCAR_H
#define CARRENTAL_LUXURYCAR_H

#include <string>
#include "Car.h"

using namespace std;

class LuxuryCar : public Car {
public:
    LuxuryCar(string, string, string, string, string, string, double = 0.0, double = 0.0, double = 0.0);

    void setTaxLuxCar(double taxLux);

    double getTaxLuxCar();

    void setExtras(double extras);

    double getExtras();



    [[maybe_unused]]double calculatePrintLux(double distance) const;

private:
    double taxLuxCar;
    double extras;

};


#endif //CARRENTAL_LUXURYCAR_H
