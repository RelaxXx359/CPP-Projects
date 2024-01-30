#ifndef BUILDING_BUILDING_H
#define BUILDING_BUILDING_H
#include <iostream>
#include <string>

class Building {
public:
    Building(int, double , std::string);

    void setHeaight(int);
    void setArea(double);
    void setAddress(std::string);

    int getHeaight();
    double getArea();
    std::string getAddress();

    virtual void print();

private:
    int height;
    double area;
    std::string address;

};


#endif //BUILDING_BUILDING_H
