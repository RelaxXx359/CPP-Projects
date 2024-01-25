#include <iostream>

using namespace std;

const double PI = 3.14159;

class Circle {
private: double radius;

public:
    // Constructor
    Circle(double rad) : radius(rad) {}

    // Functions
    double calculateArea() {
        return PI * (radius * radius);
    }

    double calculateCircumference() {
        return 2 * PI * radius;
    }
};

int main() {
    // Create a circle
    double radius;
    cout << "Input the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    // Calculate and display the area
    double area = circle.calculateArea();
    cout << "Area: " << area << endl;

    // Calculate and display the circumference
    double circumference = circle.calculateCircumference();
    cout << "Circumference: " << circumference << endl;

    return 0;
}