

#ifndef SHAPE_TWODSHAPE_H
#define SHAPE_TWODSHAPE_H
#include "Shape.h"
class TwoShape: public Shape{

public:
    TwoShape(int);

    TwoShape(int sideA, int position, int size, const basic_string<char> &shape, char symbol);

    virtual void print();
    virtual double getArea();

    int getPosition() const;

    void setPosition(int position);

    int getSize() const;

    void setSize(int size);

    const string &getShape() const;

    void setShape(const string &shape);

    char getSymbol() const;

    void setSymbol(char symbol);

private:
    int position;
    int size;
    string shape;
    char symbol;


};
#endif //SHAPE_TWODSHAPE_H
