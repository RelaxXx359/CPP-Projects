#include <iostream>
#include "ThreeDShape.h"
#include "TwoDShape.h"
#include <vector>
#include "Rectangles.h"
#include "Circles.h"
#include "Square.h"

using namespace std;

int main() {
    Shape *sPtr1 = new TwoShape(30);
    Shape *sPtr2 = new ThreeDShape(15, 20);
    Shape *sPtr3 = new Rectangles(20, 25, 10, "Rectangle", 'f',20);
    Shape *sPtr4 = new Circles(13, 5,2, 6, "Circles", 'f');
    Shape *sPtr5 = new Square(13, 2, 6, "Square", 'f', 10);

    vector<Shape *> myShapes;
    myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    myShapes.push_back(sPtr3);
    myShapes.push_back(sPtr4);
    myShapes.push_back(sPtr5);

    for (int i = 0; i < myShapes.size(); ++i) {
        myShapes.at(i)->print();
//        double area = myShapes.at(i)->getArea();
        cout << myShapes.at(i)->getArea()<< endl;
        myShapes.at(i)->getArea();
    }


    return 0;
}
