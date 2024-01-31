#ifndef SHAPE_TRIANGLES_H
#define SHAPE_TRIANGLES_H
#include "TwoDShape.h"


class Triangle: public TwoShape{
public:
    Triangle(int i, int position, int size, const string &shape, char symbol);

    int getPosition() const;

    void setPosition(int position);

    int getSize() const;

    void setSize(int size);

    const string &getShape() const;

    void setShape(const string &shape);

    char getSymbol() const;

    void setSymbol(char symbol);



public:
    int position;
    int size;
    string shape;
    char symbol;

    void print();

    double getArea();
};




#endif //SHAPE_TRIANGLES_H
