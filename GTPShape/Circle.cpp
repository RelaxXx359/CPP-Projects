#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
Circle(int x, int y, int radius, char fillChar) : Shape(x, y, fillChar), radius(radius) {}

// Draw function specific to Circle
void draw() const override {
// Draw circle logic here
std::cout << "Drawing a circle at position (" << x << ", " << y << ") with radius " << radius
<< " and fill character '" << fillChar << "'.\n";
}

private:
int radius;  // Radius of the circle
};