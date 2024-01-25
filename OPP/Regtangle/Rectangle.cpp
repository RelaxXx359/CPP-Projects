#include "Point.h"
#include "Rectangle.h"


Rectangle::Rectangle(const Point &p1, const Point &p2, const Point &p3, const Point &p4)
        : p1(p1), p2(p2), p3(p3), p4(p4) {}

bool Rectangle::isRegtangle() {

    // ПРОВЕРКА ДАЛИ ПРАВОЪГЪЛНИКА Е С ПРАВИ ЪГЛИ
    if (this->p1.getY() == this->p3.getX() && this->p2.getX()) {
        return true;
    }
    return false;
}

bool Rectangle::isSquare() {
    if (isRegtangle()) {
        // ako stranite sa ravni -> e kvadrat
//        int sideA = calculateLength(p1.getX(),p2.getX());
//        int sideB = calculateLength(p1.getX(),p3.getX());
//        if (sideA == sideB)

        if (calculateLength(p1.getX(), p2.getX())== calculateLength(p1.getX(), p3.getY())) {
            return true;
        }
    }
    return false;
}

// second is always greater
int Rectangle::calculateLength(int first, int second) {
    return second - first;
}


const Point &Rectangle::getP1() const {
    return p1;
}

void Rectangle::setP1(const Point &p1) {
    Rectangle::p1 = p1;
    //this->p1 = p1;
}

const Point &Rectangle::getP2() const {
    return p2;
}

void Rectangle::setP2(const Point &p2) {
    Rectangle::p2 = p2;
    //this->p2 = p2;

}

const Point &Rectangle::getP3() const {
    return p3;
}

void Rectangle::setP3(const Point &p3) {
    Rectangle::p3 = p3;
    //    this->p3 = p3;
}

const Point &Rectangle::getP4() const {
    return p4;
}

void Rectangle::setP4(const Point &p4) {
    Rectangle::p4 = p4;
    //    this->p4 = p4;
}
