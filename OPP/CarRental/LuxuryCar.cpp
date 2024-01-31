#include <iostream>
#include <string>
#include "LuxuryCar.h"

using namespace std;

LuxuryCar::LuxuryCar(const string &string, const std::string &string1, const std::string &string2, const std::string &string3,
                     const std::string &string4, const std::string &string5, double d, int i)
                     : Car(string, string1, string2,string3, string4, string5, d,i) {}

double calculateLuxTax() {
    int luxTax = 0;

    std::cout << " MENU " << std::endl;
    std::cout << "Champagne - 100lv. - press 1" << std::endl;
    std::cout << "Wine - 50lv. - press 2" << std::endl;
    std::cout << "Chocolate - 40lv. - press 3" << std::endl;
    std::cin >> luxTax;

    if (luxTax == 1) {
        luxTax = 100;
    } else if (luxTax == 2) {
        luxTax = 50;
    } else if (luxTax == 3) {
        luxTax = 40;
    } else {
        std::cout << "Invalid choise. " << std::endl;
    }

    return luxTax;
}


double calculateKmTax(int dayTax) {


    double distance;
    cin >> distance;

    double tax = (distance < 200) ? 0.6 : 0.4;

//    if (distance < 200) {
//        cout << "Rental cost for LuxuryCar (300 km): $";
//        tax = 0.6;
//    } else {
//        cout << "Rental cost for LuxuryCar (600 km): $";
//        tax = 0.4;
//    }
    return tax;
}

double LuxuryCar::calculatePrice() {
    std::cout << "For car " << this->getBrand() << ". ";
    int dayTax = this->getTax();
    int luxTax = calculateLuxTax();
    double kmTax = calculateKmTax(dayTax);

    return dayTax * kmTax * luxTax;
}





