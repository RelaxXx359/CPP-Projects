#include "Car.h"
#include <iostream>
#include <string>

using namespace std;
Car::Car(string brand, string model, string type, string color, string chassisNumber,
         string numberCar, double consumptione)
        : brand(brand),
          model(model),
          type(type),
          color(color),
          chassisNumber(chassisNumber),
          numberCar(numberCar),
          consumption(consumptione)
          {}

void Car::printCar() {
    cout << getBrand() << " " << getModel() << " " << getType() << " " << getColor()
    << " " << getChassisN() << " " << getNumberC() << " " << getConsumption() << " " << endl;

    cout << this->brand << " " << this->type;
}


//void Car::printCar() {
//    cout << getBrand();
//    cout << getModel();
//    cout << getType();
//    cout << getColor();
//    cout << getChassisN();
//    cout << getNumberC();
//    cout << getConsumption();
//}


string Car::getBrand() {
    return brand;
}

string Car::getModel() {
    return model;
}

string Car::getType() {
    return type;
}

string Car::getColor() {
    return color;
}

string Car::getChassisN() {
    return chassisNumber;
}

string Car::getNumberC() {
    return numberCar;
}

double Car::getConsumption() {
    return consumption;
}


void Car::setBrand(std::string brand) {
    this->brand = brand;
}

void Car::setModel(std::string model) {
    this->model = model;
}

void Car::setType(std::string type) {
    this->type = type;
}

void Car::setColor(std::string color) {
    this->color = color;
}

void Car::setChassisN(std::string chassisN) {
    this->chassisNumber = chassisN;
}

void Car::setNumberC(std::string numCar) {
    this->numberCar = numCar;
}

void Car::setConsumption(double consum) {
    this->consumption = consum;
}




