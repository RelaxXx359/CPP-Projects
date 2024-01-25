#ifndef INHERITANCETEST_ANIMAL_H
#define INHERITANCETEST_ANIMAL_H

#include <string>
using namespace std;

class Animal{
public:
    Animal(string,string, int);

    void print();
    void setName(string);
    void setKind(string);
    int setYear(int);

    string getName();
    string getKind();
    int getYears();

private:
    string kind;
    string name;
    int year;
};

#endif //INHERITANCETEST_ANIMAL_H
