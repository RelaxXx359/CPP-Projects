#include <iostream>
#include <string>
#include "Car.h"
#include "FamilyCar.h"
#include <vector>

using namespace std;

int main() {

    Car *familyCar1 = new FamilyCar("Toyota", "Camry", "Family", "Blue", "4569ASD565", "A1568SF", 15, 150.0, 300);
    Car *familyCar2 = new FamilyCar("VW", "Passat", "Family", "Red", "1536ARS546", "CB5754KH", 10, 200.0, 100);

    vector<Car> cars;
    cars.push_back(*familyCar1);
    cars.push_back(*familyCar2);


    for (int i = 0; i < cars.size(); ++i) {
        cars[i]->
    }

    return 0;
}
