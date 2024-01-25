#include <iostream>

using namespace std;
#include "Shape.h"

class Square : public Shape {
public:
    Square(int x, int y, int size, char fillChar) : Shape(x, y, fillChar), size(size) {}

    // Draw function specific to Square
    void draw() const override {
        // Draw square logic here
        std::cout << "Drawing a square at position (" << x << ", " << y << ") with size " << size
                  << " and fill character '" << fillChar << "'.\n";
    }

private:
    int size;  // Size of the square
};