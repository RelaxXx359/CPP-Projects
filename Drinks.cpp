#include "Drinks.h"

Drinks::Drinks(string name, double price, int quantity, string type) :
name(name),
price(price),
quantity(quantity),
type(type) {}

void Drinks::print() {
    cout << "Current drink:"<< getName() << " " << getPrice() << " " << getQuantity() << " " << getType() << endl;
}


void Drinks::setName(string name) {
    if (name.length() <= 3) {
        std::cout << "Name must be more than three symbols." << std::endl;
        name = "default";
    }
    this->name = name;
}
void Drinks::setPrice(double price) {
    if (price <= 0) {
        std::cout << "Price must be positive number, bigger from 0."<< std::endl;
        price = 2.00;
    }
    this->price = price;
}
void Drinks::setType(string type) {
    Drinks::type = type;
}

void Drinks::setQuantity(int quantity) {
    Drinks::quantity = quantity;
}
double Drinks::calculatePrice() {
    return 0.0;
}


string Drinks::getName() {
    return name;
}
double Drinks::getPrice() {
    return price;
}
int Drinks::getQuantity() {
    return quantity;
}
string Drinks::getType() {
    return type;
}
