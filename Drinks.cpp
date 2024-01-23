#include "Drinks.h"

Drinks::Drinks(string name, double price, double quantity, string type) : name(name), price(price),
                                                                          quantity(quantity),
                                                                          type(type) {}

void Drinks::print() {
    cout << getName() << " " << getPrice() << " " << getQuantity() << " " << getType() << endl;
}
string Drinks::getName() {
    return name;
}

void Drinks::setName(string name) {
    Drinks::name = name;
}
double Drinks::getPrice() {
    return price;
}

void Drinks::setPrice(double price) {
    Drinks::price = price;
}
double Drinks::getQuantity() {
    return quantity;
}

void Drinks::setQuantity(double quantity) {
    Drinks::quantity = quantity;
}
string Drinks::getType() {
    return type;
}

void Drinks::setType(string type) {
    Drinks::type = type;
}
