#include "Shape.h"

using namespace std;

Shape::Shape(double sideA) {
    setSideA(sideA);
}
void Shape::draw() {
    std::cout << "Drawing a Shape." << endl;
}

void Shape::setSideA(double sideA) {
    if (sideA < 0 ){
        std::cout << "Invalid number!" << std::endl;
        std::cin >> sideA;
    }
    this->sideA = sideA;
}

double Shape::getSideA() {
    return this ->sideA;
}
