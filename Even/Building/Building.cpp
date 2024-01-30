#include "Building.h"

Building::Building(int h, double area, std::string address) {
    setHeaight(h);
    setArea(area);
    setAddress(address);
}
void Building::print() {
    std::cout<< this->height<< " " << this->area<< " " << this->address << std::endl;
}

void Building::setHeaight(int h) {
    if (h < 0){
        std::cout << "The number must be positiv!";
        std::cin >> h;
    }
    this->height = h;
}
void Building::setArea(double area) {
    if (area < 0){
        std::cout << "The number must be positiv!";
        std::cin >> area;
    }
    this->area = area;
}
void Building::setAddress(std::string address) {
    if (address.size()< 3){
        std::cout << "The address length is very small!" << std::endl;
        std::cout << "Minimum length is three characters!" << std::endl;
        std::cin >> address;
    }
    this->address = address;
}

int Building::getHeaight() {
    return 0;
}
double Building::getArea() {
    return 0;
}
std::string Building::getAddress() {
    return 0;
}
