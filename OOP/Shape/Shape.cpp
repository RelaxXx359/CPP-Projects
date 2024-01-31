#include <iostream>
using namespace std;
#include "Shape.h"

Shape::Shape(int side): sideA(side) {
    this->sideA = side;
}

void Shape::print() {
    cout<< "In shape the side is  "<< this->sideA;
}
double Shape::getArea() {
    cout << "In shape the area is "<<endl;
    return 0.0;
}


void Shape::setA(int sideA) {
    Shape::sideA = sideA;
}
int Shape::getA() {
    return sideA;
}


