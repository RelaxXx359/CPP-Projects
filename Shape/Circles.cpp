#include "Shape.h"
#include "Circles.h"


Circles::Circles(int a, int position, int size, const string &shape, char symbol)
: TwoShape(a),position(position),size(size), shape(shape),symbol(symbol) {}

int Circles::getPosition() const {
    return position;
}

void Circles::setPosition(int position) {
    Circles::position = position;
}

int Circles::getSize() const {
    return size;
}

void Circles::setSize(int size) {
    Circles::size = size;
}

const string &Circles::getShape() const {
    return shape;
}

void Circles::setShape(const string &shape) {
    Circles::shape = shape;
}

char Circles::getSymbol() const {
    return symbol;
}

void Circles::setSymbol(char symbol) {
    Circles::symbol = symbol;
}

void Circles::print() {
    cout << "Circles" << endl;
}
double Circles::getArea() {
    cout << "Circles area" << endl;
    return 0.0;
}
