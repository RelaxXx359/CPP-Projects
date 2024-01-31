#include <iostream>
#include "TwoDShape.h"

using namespace std;

TwoShape::TwoShape(int sideA)
: Shape(sideA),position(position),size(size), shape(shape),symbol(symbol) {}

void TwoShape::print() {
    cout << "In 2D"<< endl;
}
double TwoShape::getArea() {
    cout << "In 2D getArea" << endl;
    return 0.0;
}


void TwoShape::setPosition(int position) {
    TwoShape::position = position;
}
void TwoShape::setSize(int size) {
    TwoShape::size = size;
}
void TwoShape::setShape( string shape) {
    TwoShape::shape = shape;
}
void TwoShape::setSymbol(char symbol) {
    TwoShape::symbol = symbol;
}


int TwoShape::getPosition() {
    return position;
}
int TwoShape::getSize() {
    return size;
}
string TwoShape::getShape() {
    return shape;
}
char TwoShape::getSymbol() {
    return symbol;
}


