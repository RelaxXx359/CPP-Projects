//
// Created by Dobrolyub Velinov on 16.1.2024 г..
//
#include <iostream>

#ifndef REGTANGLE_POINT_H
#define REGTANGLE_POINT_H

class Point {

public:
    Point(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

private:
    int x;
    int y;
};
#endif //REGTANGLE_POINT_H
