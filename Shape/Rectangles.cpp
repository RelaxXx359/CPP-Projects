
#include <string>
#include "TwoDShape.h"
#include "Rectangles.h"

Rectangles::Rectangles(int a, int position, int size, const std::__cxx11::basic_string<char> &shape, char symbol, int sideB)
                                                        // std::string shape
        : TwoShape(a), sideB(sideB){}

int Rectangles::getSideB() const {
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




