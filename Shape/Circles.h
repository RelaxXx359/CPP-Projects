#ifndef SHAPE_CIRCLES_H
#define SHAPE_CIRCLES_H
#include "TwoDShape.h"

class Circles: public TwoShape{
public:
    Circles(int i, int r, int position, int size, const string &shape, char symbol);

    Circles(int a, int position, int size, const string &shape, char symbol);

    int getR() const;

    void setR(int r);

    int getPosition() const;

    void setPosition(int position);

    int getSize() const;

    void setSize(int size);

    const string &getShape() const;

    void setShape(const string &shape);

    char getSymbol() const;

    void setSymbol(char symbol);

    void print();

    double getArea();

private:
    int position;
    int size;
    string shape;
    char symbol;

};
#endif //SHAPE_CIRCLES_H
