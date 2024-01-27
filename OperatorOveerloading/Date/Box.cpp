#include "Box.h"


Box::Box(double width, double length, double height) : width(width), length(length), height(height) {
    setWidth(width);
    setLength(length);
    setHeight(height);
}

//Предефиниране на оператора за слагане една над друга
Box operator+(Box box1, Box box2) {
    int width = box1.getWidth() + box2.getWidth();
    return Box(width, box1.getHeight(), box1.getLength());
}

void Box::print() {
    std::cout << "\nSize box. Width: " << this->getWidth() << ", Height: " << getLength() << ", Length: "
              << this->getHeight() << std::endl;
}

void Box::setWidth(double width) {
    this->width = width;
}

void Box::setLength(double length) {
    this->length = length;
}

void Box::setHeight(double height) {
    this->height = height;
}


double Box::getWidth() {
    return width;
}

double Box::getLength() {
    return length;
}

double Box::getHeight() {
    return height;
}


