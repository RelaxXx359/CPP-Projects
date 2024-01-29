#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H
#include <vector>
#include "Book.h"

class Library {
public:

    void addBook(Book);
    void findBook(string);

    void print();


private:
    vector<Book> books;

};
#endif //LIBRARY_LIBRARY_H
