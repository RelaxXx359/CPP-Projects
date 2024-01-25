#include "CarService.h"

Car inputData() {
    string model;
    int year;
    string color;
    string fuel;
    string vin;
    string transmission;
    string plate;

    cout << "enter model " << endl;
    cin >> model;
    cout << "enter year " << endl;
    cin >> year;
    cout << "enter color " << endl;
    cin >> color;
    cout << "enter fuel " << endl;
    cin >> fuel;
    cout << "enter vin " << endl;
    cin >> vin;
    cout << "enter transmission " << endl;
    cin >> transmission;
    cout << "enter plate " << endl;
    cin >> plate;

    Car myCar(model, year, color, fuel, vin, transmission, plate);
    return myCar;
}