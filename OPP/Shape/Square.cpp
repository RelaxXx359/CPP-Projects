
#include <string>
#include "TwoDShape.h"
#include "Square.h"

Square::Square(int sideA, int position, int size, const string &shape, char symbol, int sideC)
: TwoShape(sideA), sideC(sideC) {}


void Square::print() {
    cout <<"Square" << endl;
}
double Square::getArea() {
    cout << "Square area" << endl;
    return getSideC() * Square::getA();
}


int Square::getSideC() {
    return sideC;
}


