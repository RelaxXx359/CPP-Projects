#include "TwoDShape.h"

#ifndef SHAPE_SQUARE_H
#define SHAPE_SQUARE_H

class Square : public TwoShape {

public:
    Square(int i, int position, int size, const string &shape, char symbol, int sideC);

    void setSideC(int sideC);
    int getSideC();

    void print();
    double getArea();

private:
    int sideC;
};

#endif //SHAPE_SQUARE_H
