#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string brand, string model, string type, string color, string chassisNumber,
         string numberCar, double consumptione, int tax) {
    setBrand(brand);
    setModel(model);
    setType(type);
    setColor(color);
    setChassisN(chassisNumber);
    setNumberC(numberCar);
    setConsumption(consumptione);
    setTax(tax);
}

double Car::calculatePrice() {
    std::cout << "Price is: ";
    return 0.0;
}


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




