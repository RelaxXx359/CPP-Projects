#ifndef SHAPE_CIRCLES_H
#define SHAPE_CIRCLES_H
#include "TwoDShape.h"

class Circles: public TwoShape{
public:

    Circles(int sideA, int r, int position, int size, string shape, char symbol);


    void setR(int r);
    void setPosition(int position);
    void setSize(int size);
    void setShape(string shape);
    void setSymbol(char symbol);

    int getR();
    int getPosition();
    int getSize();
    string getShape();
    char getSymbol() ;

    void print();
    double getArea();

private:
    int r;
    int position;
    int size;
    string shape;
    char symbol;

};
#endif //SHAPE_CIRCLES_H
