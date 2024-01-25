#include <iostream>
#include "Dog.h"
#include <vector>

int main() {
    Animal *animalPtr= nullptr;

    Dog g("sdda", "add", 12, "dada");

    animalPtr= &g;

    Dog *dogPtr = new Dog("ffff", "dsss", 21, "dddd");

    dogPtr->getYears();

    vector<Animal *> animals;
    animals.push_back(dogPtr);
    animals.push_back(animalPtr);

    vector<Animal> secondAnimals;
    secondAnimals.push_back(g);

    return 0;
}
