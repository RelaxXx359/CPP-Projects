#ifndef SHAPE_CIRCLE_H
#define SHAPE_CIRCLE_H

#include "Shape.h"


class Circle : public Shape {
public:
    Circle(double sideA);

    void draw() override;

};


#endif //SHAPE_CIRCLE_H
