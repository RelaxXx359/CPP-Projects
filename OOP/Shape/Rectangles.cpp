
#include <string>
#include "TwoDShape.h"
#include "Rectangles.h"

Rectangles::Rectangles(int sideA, int position, int size, string shape, char symbol, int sideB)
: TwoShape(sideA), sideB(sideB) {}

int Rectangles::getSideB() {
    return sideB;
}
void Rectangles::setSideB(int sideB) {
    Rectangles::sideB = sideB;
}


void Rectangles::print() {
    cout << "Rectangle" << endl;
    //TwoShape::print();
}

double Rectangles::getArea() {
    cout << "Rectangle area" << endl;
    return getSideB() * Shape::getA();    //!!!!!!!!!!
    //return 0.0;
}




