#include <iostream>

using namespace std;

class Circle {
public:
    // Constructor with radius parameter
    Circle(double r) : radius(r) {
        if (radius < 0.0) {
            cerr << "Грешка: Радиусът на кръга не може да бъде отрицателно число." << endl;
            radius = 0.0; // Setting radius to 0 if a negative value is provided
        }
    }

    // Function to calculate area
    double calculateArea() const {
        return 3.14159 * radius * radius; // Formula for circle area: π * r^2
    }

    // Function to calculate circumference
    double calculateCircumference() const {
        return 2 * 3.14159 * radius; // Formula for circle circumference: 2 * π * r
    }
private:
    double radius;
};

int main() {
    double radius = 5.0;
    Circle circle(radius);

    // Calculating area and circumference
    cout << "areaCircle: " << circle.calculateArea() << endl;
    cout << "tourCircle: " << circle.calculateCircumference() << endl;

    return 0;
}