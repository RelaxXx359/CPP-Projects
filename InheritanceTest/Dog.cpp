#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(string kind, string name, int year, string bark) : Animal(kind, name, year) {
    this->bark = bark;
}

void Dog::printBarkInfo() {
    Animal::print();
    cout << this->bark;
}