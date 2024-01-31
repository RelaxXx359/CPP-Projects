#include "Point.h"
#include <iostream>

using namespace std;


Point::Point(int x, int y) {
    setX(x);
    setY(y);
}

int Point::getX() const {
    return this->x;
}

void Point::setX(int x) {
    if (x > 0 && x <=20) {
        Point::x = x;
    } else{
        this->x = 0;
        cout << "Invalid coord" << endl;
    }
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    if(y >=0 && y<= 20) {
        Point::y = y;
    } else{
        this->y = 0;
        cout << "Invalid coord" << endl;

    }
}
