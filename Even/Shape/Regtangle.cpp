#include "Regtangle.h"

Regtangle::Regtangle(double sideA, double sideB): Shape(sideA) {
    setSideA(sideA);
    setSideB(sideB);
}

void Regtangle::draw() {
    std::cout << "Drawing a Regtangle." << std::endl;
}

double Regtangle::setSideB(double sideB) {
    if (sideB < 0){
        std::cout << "Invalid number" << std::endl;
        std::cin >> sideB;
    }
    return Shape::getSideA() * sideB;
}
double Regtangle::getSideB() {
    return sideB;
}
