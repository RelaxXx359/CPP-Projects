
#include <string>
#include "TwoDShape.h"
#include "Triangles.h"

Triangle::Triangle(int a, int position, int size, const std::__cxx11::basic_string<char> &shape, char symbol)
        : TwoShape(a), position(position), size(size), shape(shape), symbol(symbol) {}

int Triangle::getPosition() const {
    return position;
}

void Triangle::setPosition(int position) {
    Triangle::position = position;
}

int Triangle::getSize() const {
    return size;
}

void Triangle::setSize(int size) {
    Triangle::size = size;
}

const string &Triangle::getShape() const {
    return shape;
}

void Triangle::setShape(const string &shape) {
    Triangle::shape = shape;
}

char Triangle::getSymbol() const {
    return symbol;
}

void Triangle::setSymbol(char symbol) {
    Triangle::symbol = symbol;
}

void Triangle::print() {
    cout << "Triangles" << endl;
}
double Triangle::getArea() {
    cout << "Triangle area" << endl;
}
