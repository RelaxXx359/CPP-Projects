#include "Library.h"

void Library::addBook(Book b) {
    this->books.push_back(b);
}
void Library::findBook(std::string text) {
    for (Book book : books) {
        if (book.getBookName().find(text) != std::string::npos){
            std::cout << "We found the book " << std::endl;
            book.print();
            break;
        }

    }
}
void Library::print() {
    for (Book book: books) {
        book.print();
    }
}
