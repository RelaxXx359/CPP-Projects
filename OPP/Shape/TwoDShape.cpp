#include <iostream>
#include "TwoDShape.h"

using namespace std;

TwoShape::TwoShape(int sideA): Shape(sideA) {}


void TwoShape::print() {
    cout << "In 2D"<< endl;
}
double TwoShape::getArea() {
    cout << "In 2D getArea" << endl;
    return 0.0;
}



int TwoShape::getPosition() const {
    return position;
}

void TwoShape::setPosition(int position) {
    TwoShape::position = position;
}

int TwoShape::getSize() const {
    return size;
}

void TwoShape::setSize(int size) {
    TwoShape::size = size;
}

const string &TwoShape::getShape() const {
    return shape;
}

void TwoShape::setShape(const string &shape) {
    TwoShape::shape = shape;
}

char TwoShape::getSymbol() const {
    return symbol;
}

void TwoShape::setSymbol(char symbol) {
    TwoShape::symbol = symbol;
}
