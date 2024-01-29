#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H

#include <iostream>

class Shape {
public:
    Shape(double sideA);
    virtual void draw();

    void setSideA(double);
    double getSideA();

private:
    double sideA;
};

#endif //SHAPE_SHAPE_H
