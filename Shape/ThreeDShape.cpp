#include "ThreeDShape.h"
#include <iostream>

using namespace std;

ThreeDShape::ThreeDShape(int a, int h) : Shape(a) {
    this->h = h;
}

void ThreeDShape::print() {
    cout<< "We are in 3D print " << this->h;
    cout << endl;
}

double ThreeDShape::getArea() {
    cout << "3D shape area " << endl;
    return 0.0;
}
double ThreeDShape::getVolume() {
    cout<< "3D shape volume" << endl;
    return 0.0;
}