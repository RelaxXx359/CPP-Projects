#include "Book.h"

Book::Book(std::string title, std::string name, std::string isbn) {
    setTitle(title);
    setTitle(name);
    setISBN(isbn);
}

void Book::display() {
    std::cout << title << " " << autor << " " << ISBN << std::endl;
}

void Book::setTitle(std::string t) {
    title = t;
}

void Book::setAutor(std::string a) {
    autor = a;
}

void Book::setISBN(std::string isbn) {
    ISBN = isbn;
}

std::string Book::getTitle() {
    return title;
}

std::string Book::getAutor() {
    return autor;
}

std::string Book::getISBN() {
    return ISBN;
}