#include <iostream>
#include <string>
#include "Book.h"
#include "Autor.h"

using namespace std;
Book::Book(string title, string genre, int year, Autor a) : autor(a) {
    this->title = title;
    this->genre = genre;
    this->yearPublication = year;
}

void Book::printBook() {
    cout << this->title << " " << this->yearPublication << " " << this->genre << endl;
    autor.printAutor();
}

string Book::getTitle() {
    return title;
}
void Book::setTitle( string title) {
    this ->title = title;
}

 string Book::getGenre() {
    return genre;
}
void Book::setGenre( string genre) {
    Book::genre = genre;
}

int Book::getYearPublication() {
    return yearPublication;
}
void Book::setYearPublication(int yearPublication) {
    Book::yearPublication = yearPublication;
}
 Autor Book::getAutor() {
    return autor;
}
void Book::setAutor(Autor autor) {
    Book::autor = autor;
}


