#ifndef LIBRARY_AUTHOR_H
#define LIBRARY_AUTHOR_H

#include <iostream>
#include <string>

using namespace std;

class Author {

public:
    Author(string,string, string);

    void setFirstName(string);
    void setLastName(string);
    void setNationality(string);

    string getFirstName();
    string getLastName();
    string getNationality();

    void print();


private:
    string firstName;
    string lastName;
    string nationality;

};

#endif //LIBRARY_AUTHOR_H
