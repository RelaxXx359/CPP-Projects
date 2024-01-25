#include <iostream>

using namespace std;

#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H

class Shape {


public:
    Shape(int sideA);

    void setA(int sideA);
    int getA() const;

    virtual double getArea();
    virtual void print();

private:
    int sideA;
};

#endif //SHAPE_SHAPE_H
