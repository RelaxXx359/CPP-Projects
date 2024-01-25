#include <vector>
using namespace std;

#include "../ClassAndObject/Car.h"





int main() {

    vector<Car> cars;

    CarService cs;

    for(int i = 0; i < 2; i++){
        Car myCar = inputData();
        cars.push_back(myCar);
    }

    for(int i = 0; i < cars.size(); i++){
        cars.at(i).displayMessage();
    }
    return 0;
}