#ifndef GTPSHAPE_CIRCLE_H
#define GTPSHAPE_CIRCLE_H

#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;
class Shape;

// Screen manager to draw shapes
class ScreenManager {
public:
    // Function to draw all shapes in the array
    void drawScreen(const std::vector<Shape*>& shapes) const {
        for (const auto& shape : shapes) {
            shape->draw();
        }
        std::cout << "Screen redrawn.\n";
    }
};

#endif //GTPSHAPE_CIRCLE_H
