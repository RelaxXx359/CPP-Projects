#include "Shape.h"
#include "Circles.h"
#define PI 3.14159

Circles::Circles(int sideA, int r, int position, int size, string shape, char symbol)
                 : TwoShape(sideA), position(position), size(size), shape(shape), symbol(symbol) {}



void Circles::print() {
    cout << "Circles"<< endl;
}
double Circles::getArea() {
    cout << "Circles area" << endl;
    return 2* PI* Shape::getA();
}

void Circles::setR(int r) {
    this->r = r;
}
void Circles::setPosition(int position) {
    Circles::position = position;
}
void Circles::setSize(int size) {
    Circles::size = size;
}
void Circles::setShape(string shape) {
    Circles::shape = shape;
}
void Circles::setSymbol(char symbol) {
    Circles::symbol = symbol;
}

int Circles::getR() {
    return this->r;
}
int Circles::getPosition() {
    return position;
}
int Circles::getSize() {
    return size;
}
string Circles::getShape() {
    return shape;
}
char Circles::getSymbol() {
    return symbol;
}



