
#ifndef GTPSHAPE_SHAPE_H
#define GTPSHAPE_SHAPE_H
class Shape {
public:
    // Constructor to initialize common properties
    Shape(int x, int y, char fillChar) : x(x), y(y), fillChar(fillChar) {}

    // Virtual function for drawing shapes
    virtual void draw() const = 0;

protected:
    int x, y;       // Position of the shape
    char fillChar;  // Fill character for the shape
};
#endif //GTPSHAPE_SHAPE_H
