#include <iostream>
#include "Shape.h"
#include "Regtangle.h"
#include "Circle.h"
#include <vector>

int main() {

    Shape *sPtr = new Shape(10.9);
    Shape *rPtr = new Regtangle(10, 15.5);
    Shape *cPtr = new Circle(20);

    sPtr->draw() ;
    rPtr->draw();
    cPtr->draw();


    return 0;
};
