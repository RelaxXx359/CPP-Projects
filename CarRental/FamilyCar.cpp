#include <iostream>
#include "FamilyCar.h"
#include "Car.h"

using namespace std;


FamilyCar::FamilyCar(string brand, string model, string type, string color, string chassisNumber, string carNumber,
                     double fuelConsumption, double rent, double coefficient)
        : Car(brand, model, type, color, chassisNumber, carNumber, fuelConsumption), taxRent(rent) {
    setTaxRent(rent);
    setType(type);
}

[[maybe_unused]] double FamilyCar::calculatePrint(double distance) {
    //    double coefficient = (distance < 500) ? 0.7 : 0.4;
    if (distance < 500) {
        distance * 0.7;
    } else {
        distance * 0.4;
    }
    return distance;
}


//
//        } else if (std::equal(Cars.begin(), Cars.end(), "Passat")) {
//
//            cout << "VW\", \"Passat\", \"Family\", \"Red\", \"1536ARS546\", \"CB5754KH\", 10.0, 200.0";
//            std::cout << familyCar2.calculatePrint(distance2) << std::endl;
//
//        } else {
//            cout << "There is no such brand" << endl;
//        }
//    }



double FamilyCar::getTaxRent() {
    return taxRent;
}

void FamilyCar::setTaxRent(double taxRent) {
    FamilyCar::taxRent = taxRent;
}

void FamilyCar::setCoefficient(double coefficient) {
    FamilyCar::coefficient;
}

double FamilyCar::getCoefficient() {
    return coefficient;
}

