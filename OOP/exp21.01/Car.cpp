#include "Car.h"





Car::Car(const string &brand, const string &model, const string &type, const string &color, const string &nShassi,
         const string &numCar, double consumption, double fee, double distance) : brand(brand), model(model),
                                                                                  type(type), color(color),
                                                                                  nShassi(nShassi), numCar(numCar),
                                                                                  consumption(consumption), fee(fee),
                                                                                  distance(distance) {}

void calculate2(){
    cout << " dasdad";
}


const string &Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string &brand) {
    Car::brand = brand;
}

const string &Car::getModel() const {
    return model;
}

void Car::setModel(const string &model) {
    Car::model = model;
}

const string &Car::getType() const {
    return type;
}

void Car::setType(const string &type) {
    Car::type = type;
}

const string &Car::getColor() const {
    return color;
}

void Car::setColor(const string &color) {
    Car::color = color;
}

const string &Car::getNShassi() const {
    return nShassi;
}

void Car::setNShassi(const string &nShassi) {
    Car::nShassi = nShassi;
}

const string &Car::getNumCar() const {
    return numCar;
}

void Car::setNumCar(const string &numCar) {
    Car::numCar = numCar;
}

double Car::getConsumption() const {
    return consumption;
}

void Car::setConsumption(double consumption) {
    Car::consumption = consumption;
}

double Car::getFee() const {
    return fee;
}

void Car::setFee(double fee) {
    Car::fee = fee;
}

double Car::getDistance() const {
    return distance;
}

void Car::setDistance(double distance) {
    Car::distance = distance;
}
