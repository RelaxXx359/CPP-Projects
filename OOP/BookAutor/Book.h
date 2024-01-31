#ifndef BOOKAUTOR_BOOK_H
#define BOOKAUTOR_BOOK_H
#include <iostream>
#include <string>
#include "Author.h"

using namespace std;

class Book{
public:
    Book(string , Author, string, int);
    void setName(string);
    void setGenre(string);
    void setYear(int);
    void setAuthor(Author);
    string getName();
    string getGenre();
    int getYear();
    Author getAuthor();
    void printBook();

private:
    string name, genre;
    Author author;
    int year;
};


#endif //BOOKAUTOR_BOOK_H
