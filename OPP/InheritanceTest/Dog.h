#ifndef INHERITANCETEST_DOG_H
#define INHERITANCETEST_DOG_H

#include "Animal.h"

class Dog: public Animal{
public:

    Dog(string kind, string name, int year, string bark);

    void setBark(string);
    string getBark();

    void printBarkInfo();

private:
    string bark;

};

#endif //INHERITANCETEST_DOG_H
