#ifndef CARRENTAL_LUXURYCAR_H
#define CARRENTAL_LUXURYCAR_H
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class LuxuryCar : public Car {
public:
    LuxuryCar(string, string, string, string, string, string, double = 0.0, int = 0);

    LuxuryCar(const string &string, const std::string &string1, const std::string &string2, const std::string &string3,
              const std::string &string4, const std::string &string5, double d, int i);

    double calculatePrice() override;

private:

};


#endif //CARRENTAL_LUXURYCAR_H
