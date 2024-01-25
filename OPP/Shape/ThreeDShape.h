
#ifndef SHAPE_THREEDSHAPE_H
#define SHAPE_THREEDSHAPE_H
#include "Shape.h"
class ThreeDShape: public Shape{
public:
    ThreeDShape(int, int);
    virtual void print();
    virtual double getArea();

    double getVolume();
    void setH(int);
    int getH();

private:
    int h;




};
#endif //SHAPE_THREEDSHAPE_H
