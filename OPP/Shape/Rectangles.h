#ifndef SHAPE_RECTANGLES_H
#define SHAPE_RECTANGLES_H
#include "TwoDShape.h"

class Rectangles: public TwoShape{
public:
    Rectangles(int, int position, int size, string shape, char symbol, int sideB);

    int getSideB();
    void setSideB(int sideB);

    void print();
    //virtual void print();
    double getArea();
    //virtual double getArea();
private:

    // za vtorata strana
    int sideB;
};
#endif //SHAPE_RECTANGLES_H
