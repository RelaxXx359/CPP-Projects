
#include <string>
#include "TwoDShape.h"
#include "Square.h"

Square::Square(int a, int position, int size, const std::__cxx11::basic_string<char> &shape, char symbol, int sideC)
: TwoShape(a), sideC(sideC){}


void Square::print() {
    cout << "Square" << endl;
}
double Square::getArea() {
    cout << "Square area" << endl;
    return getSideC() * Square::getA();
}


int Square::getSideC() {
    return sideC;
}


