
#include "Author.h"

Author::Author(std::string firstName, std::string lastName, std::string nationality) {
    setFirstName(firstName);
    setLastName(lastName);
    setNationality(nationality);
}
void Author::print() {
    cout << "Autor: " << this->getFirstName() << " " << this->getLastName() << " " << this->getNationality() << endl;
}


void Author::setFirstName(std::string firstName) {
    this->firstName = firstName;
}
void Author::setLastName(std::string lastName) {
    this->lastName = lastName;
}
void Author::setNationality(std::string nationality) {
    this->nationality = nationality;
}

string Author::getFirstName() {
    return this->firstName;
}
string Author::getLastName() {
    return this->lastName;
}
string Author::getNationality() {
    return this->nationality;
}

