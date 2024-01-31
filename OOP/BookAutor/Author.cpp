#include "Author.h"


Author::Author(string name, string surname, string nationality)
{
    setName(name);
    setsurName(surname);
    setNationality(nationality);
}


void Author::setName(string name){this->name = name;}
void Author::setsurName(string surname){this->surname = surname;}
void Author::setNationality(string nationality){this->nationality = nationality;}

string Author::getName(){return this->name;}
string Author::getSurname(){return this->surname;}
string Author::getNationality(){return this->nationality;}


