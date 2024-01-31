#include <iostream>

#ifndef REGTANGLE_POINT_H
#define REGTANGLE_POINT_H

class Point {

public:
    Point(int x, int y);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

private:
    int x;
    int y;
};
#endif //REGTANGLE_POINT_H
