#include <iostream>
#include <string>
#include "Autor.h"

using namespace std;

Autor::Autor(string firstName, string lastName, string nationality)
        : firstName(firstName), lastName(lastName), nationality(nationality) {
    setFirstName(firstName);
    setLastName(lastName);
    setNationality(nationality);
}


void Autor::printAutor() {
    cout << getFirstName()<< " " << getLastName() << " " << getNationality() << endl;
}



string Autor::getFirstName() {
    return firstName;
}
void Autor::setFirstName(string firstName) {
    Autor::firstName = firstName;
}

string Autor::getLastName() {
    return lastName;
}
void Autor::setLastName(string lastName) {
    Autor::lastName = lastName;
}

string Autor::getNationality() {
    return nationality;
}
void Autor::setNationality(string nationality) {
    Autor::nationality = nationality;
}
