#include "House.h"
#include "Building.h"

House::House(int h, double area, std::string address, int numFloors, std::string name) : Building(h, area, address) {
    setNumfloors(numFloors);
    setOwnerName(name);
}

void House::print() {

}

void House::setNumfloors(int n) {
//    int num;
//    std::cout << "How many numbers:";
//    std::cin>>num;
    if (n < 0) {
        std::cout << "The number must be positiv!" << std::endl;
        std::cin >> n;
    }
    this->numFloors = n;
}

void House::setOwnerName(std::string name) {
    this->ownerName = name;
}



int House::getNumFloors() {
    return 0;
}

std::string House::getOwnerName() {
    return ownerName;
}