#ifndef SHAPE_TWODSHAPE_H
#define SHAPE_TWODSHAPE_H
#include "Shape.h"

class TwoShape: public Shape{
public:
    TwoShape(int sideA);

    virtual void print();
    virtual double getArea();

    void setSize(int size);
    void setPosition(int position);
    void setShape(string shape);
    void setSymbol(char symbol);

    int getPosition();
    int getSize();
    string getShape();
    char getSymbol();

private:
    int position;
    int size;
    string shape;
    char symbol;
};
#endif //SHAPE_TWODSHAPE_H
