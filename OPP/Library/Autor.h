#ifndef LIBRARY_AUTOR_H
#define LIBRARY_AUTOR_H
#include <iostream>
#include <string>
using namespace std;


class Autor{
public:
    Autor(string, string , string);

    string getFirstName();
    void setFirstName( string firstName);

    string getLastName() ;
    void setLastName( string lastName);

    string getNationality();
    void setNationality(string nationality);

    void printAutor();

    string firstName;
    string lastName;
    string nationality;
};

#endif //LIBRARY_AUTOR_H
