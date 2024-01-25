#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"


class Square;

void createUserShapes(std::vector<Shape*>& shapes) {
    char choice;
    do {
        std::cout << "Enter shape type (S for square, C for circle): ";
        std::cin >> choice;

        int x, y, size;
        char fillChar;
        std::cout << "Enter position (x y): ";
        std::cin >> x >> y;
        std::cout << "Enter size: ";
        std::cin >> size;
        std::cout << "Enter fill character: ";
        std::cin >> fillChar;

        // Create the appropriate shape based on user choice
//        if (choice == 'S')
//            shapes.push_back(new Square(x, y, size, fillChar));
//        else if (choice == 'C') {
//            shapes.push_back(new Circle(x, y, size, fillChar));
//        }

        std::cout << "Do you want to add another shape? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}

int main() {
    std::vector<Shape*> shapes;  // Array to store Shape pointers
    ScreenManager screenManager; // Screen manager object

    // Interact with the user and create shapes
    createUserShapes(shapes);

    // Draw the screen with the created shapes
    screenManager.drawScreen(shapes);

    // Clean up: delete allocated memory for shapes
    for (const auto& shape : shapes) {
        delete shape;
    }

    return 0;
}