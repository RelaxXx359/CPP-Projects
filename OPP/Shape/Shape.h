#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    Shape(int sideA);

    void setA(int sideA);
    int getA();

    virtual double getArea();
    virtual void print();

private:
    int sideA;
};
#endif //SHAPE_SHAPE_H
