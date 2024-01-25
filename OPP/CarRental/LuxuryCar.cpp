#include <iostream>
#include <string>
#include "LuxuryCar.h"

using namespace std;

LuxuryCar::LuxuryCar(string brand, string model, string type, string color, string chassisNumber, string numberCar, double consumption,double tax, double extras)
: Car(brand, model, type, color, chassisNumber, numberCar, consumption), taxLuxCar(tax), extras(extras){
    setTaxLuxCar(tax);
    setExtras(extras);
}

[[maybe_unused]]double LuxuryCar::calculatePrintLux(double distance) const {

//    double coefficentLux = (distance< 200) ? 0.6 : 0.4;


    if (distance < 200) {
        cout << "Rental cost for LuxuryCar (300 km): $";
        distance = 0.6;
    } else {
        cout << "Rental cost for LuxuryCar (600 km): $";
        distance = 0.4;
    }


//    double extraCoefficient = 1.0;
//    if ("champagne") {
//        extraCoefficient = 1.0;
//    } else if ("wine") {
//        extraCoefficient = 1.05;
//    } else if ("chocolate") {
//        extraCoefficient = 1.02;
//    }

    return taxLuxCar * distance * extras;
}



void LuxuryCar::setTaxLuxCar(double taxLux) {
    this->setTaxLuxCar(taxLux);
}

void LuxuryCar::setExtras(double extras) {
    this->setExtras(extras);
}

double LuxuryCar::getTaxLuxCar() {
    return taxLuxCar;
}

double LuxuryCar::getExtras() {
    return extras;
}


