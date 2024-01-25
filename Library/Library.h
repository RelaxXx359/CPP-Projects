#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H
#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "Autor.h"
using namespace std;


class Library{
public:

    void addBookToBooksVector(Book);

    static void findBook(string findBook);
    void findAutor(string findAutor);

    void printLibrary();

private:

    static vector<Book> library;
};
#endif //LIBRARY_LIBRARY_H
