#ifndef BOOKAUTOR_AUTHOR_H
#define BOOKAUTOR_AUTHOR_H

#include <iostream>
using namespace std;

class Author{
public:
    // Author();
    Author(string, string, string);
    void setName(string);
    void setsurName(string);
    void setNationality(string);
    string getName();
    string getSurname();
    string getNationality();
private:
    string name, surname, nationality;
};


#endif //BOOKAUTOR_AUTHOR_H
