#include "FamilyCar.h"


FamilyCar::FamilyCar(const string &brand, const string &model, const string &type, const string &color,
                     const string &nShassi, const string &numCar, double consumption, double fee, double distance)
        : Car(brand, model, type, color, nShassi, numCar, consumption, fee, distance) {}


void calculate(double dis) {
    int coefficient = 0;
    if (dis < 500) {
        coefficient = 0.7;
    } else {
        coefficient = 0.4;
    }
}