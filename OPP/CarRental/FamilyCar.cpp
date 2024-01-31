#include <iostream>
#include "FamilyCar.h"

using namespace std;


FamilyCar::FamilyCar(string brand, string model, string type, string color, string chassisNumber, string carNumber,
                     double fuelConsumption, int taxPerDay)
        : Car(brand, model, type, color, chassisNumber, carNumber, fuelConsumption, taxPerDay){}

static double getKmTax(int dayTax, std::string car) {
    double km;
    double tax;

    std::cout << "Enter the distance: " << car << ". " << std::endl;
    std::cin >> km;

    if (km < 500.0) {
        tax = dayTax * 0.7;
    }
    else {
        tax = dayTax * 0.4;
    }

    return tax;
}

double FamilyCar::calculatePrice() {
    int dayTax = this->getTax();
    double kmTax = getKmTax(dayTax, this->getBrand());
    return dayTax * kmTax;
}



