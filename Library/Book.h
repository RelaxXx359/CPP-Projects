
#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H
#include <iostream>
#include <string>
#include "Autor.h"
#include "Library.h"

using namespace std;

class Book{
public:
    Book(string ,string, int, Autor);

    void printBook();
    basic_string<char> getTitle();

    void setTitle( string title);

     string getGenre();

    void setGenre( string genre);

    int getYearPublication() ;

    void setYearPublication(int yearPublication);

    Autor getAutor();

    void setAutor(Autor autor);

private:

    string title;
    string genre;
    int yearPublication;
    Autor autor;




};
#endif //LIBRARY_BOOK_H
