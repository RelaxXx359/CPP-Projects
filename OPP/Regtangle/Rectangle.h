#ifndef REGTANGLE_RECTANGLE_H
#define REGTANGLE_RECTANGLE_H
#include "Point.h"

class Rectangle{
public:

    Rectangle(const Point &p1, const Point &p2, const Point &p3, const Point &p4);

    const Point &getP1() const;
    const Point &getP2() const;
    const Point &getP3() const;
    const Point &getP4() const;

    void setP1(const Point &p1);
    void setP2(const Point &p2);
    void setP3(const Point &p3);
    void setP4(const Point &p4);

    bool isRegtangle();
    bool isSquare();

private:
    //funkciq
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    int calculateLength(int, int);
};
#endif //REGTANGLE_RECTANGLE_H
