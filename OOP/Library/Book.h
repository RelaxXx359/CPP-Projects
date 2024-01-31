#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <iostream>
#include "Author.h"

class Book {
public:
    Book(string, string, int, Author);

    void setBookName(string);
    void setGenre(string);
    void setYear(int);

    string getBookName();
    string getGerne();
    int getYear();

    void print();


private:
    string bookName;
    string gerne;
    int year;
    Author autor;

};


#endif //LIBRARY_BOOK_H
