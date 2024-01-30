#ifndef BUILDING_HOUSE_H
#define BUILDING_HOUSE_H

#include <iostream>
#include <string>
#include "Building.h"

class House : public Building {
public:

    House(int, double , std::string, int, std::string);

    void setNumfloors(int);
    void setOwnerName(std::string);

    int getNumFloors();
    std::string getOwnerName();

    void print();
private:
    int numFloors;
    std::string ownerName;

};


#endif //BUILDING_HOUSE_H
