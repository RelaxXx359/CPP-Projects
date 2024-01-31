#include "Book.h"

Book::Book(string name, Author author, string genre, int year):author(author)
{
    setName(name);
    setGenre(genre);
    setYear(year);
    setAuthor(author);
}
void Book::printBook(){
    cout << getName() << " " << getYear() << endl;
}

void Book::setName(string name){Book::name = name;}
void Book::setGenre(string genre){this->genre = genre;}
void Book::setYear(int year){this->year = year;}
void Book::setAuthor(Author author){this->author = author;}
string Book::getName(){return this->name;}
string Book::getGenre(){return this->genre;}
int Book::getYear(){return this->year;}
Author Book::getAuthor(){return this->author;}
