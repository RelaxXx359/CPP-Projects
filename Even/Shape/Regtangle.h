#ifndef SHAPE_REGTANGLE_H
#define SHAPE_REGTANGLE_H
#include "Shape.h"

class Regtangle : public Shape{
public:
    Regtangle(double sideA, double sideB);

    double setSideB(double sideB);
    double getSideB();

    void draw() override;

private:
    double sideB;

};


#endif //SHAPE_REGTANGLE_H
