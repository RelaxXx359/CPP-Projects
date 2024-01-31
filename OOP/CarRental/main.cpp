#include <iostream>
#include <string>
#include <vector>
#include "FamilyCar.h"
#include "LuxuryCar.h"
#include "Car.h"

using namespace std;

#include "Car.h"


int main() {

    Car Car1 ("Toyota", "Camry", "Family", "Blue", "4569ASD565", "A1568SF", 15);
    Car Car2("VW", "Passat", "Family", "Red", "1536ARS546", "CB5754KH", 10);
    Car Car3 ("Mercedes", "S-Class", "Luxury ", "Black", "213HYG598", "KH1525AA", 20.0, 50.0);
    Car Car4 ("BMW", "7 series", "Luxury", "Silver", "1526QSD968", "BP6958SA", 20.0, 50.0);




    FamilyCar familyCar("Opel", "Corsa", "hatchback", "red", "123456789", "B5614AH", 10.0);
    std::cout << familyCar.calculatePrice() << std::endl;

    LuxuryCar luxuryCar("Mercedes", "S500", "limo", "black", "WDBJK254", "CA0007PK", 23.8);
    std::cout << luxuryCar.calculatePrice() << std::endl;

    return 0;
}


