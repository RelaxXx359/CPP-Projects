#include <iostream>
#include <vector>
#include "Library.h"
#include <string>
#include "Autor.h"

using namespace std;

// фунция за добавяне на име
void Library::addBookToBooksVector(Book b) {
    this->library.push_back(b);

}
// функция за търсене по име или част от името
void Library::findBook(std::string findBook) {
    cout << "Search results by title:" << endl;
    for(Book book: library){
        if(book.getTitle().find(findBook) != string::npos){
            cout<< "We found the book" << endl;
            cout << "Книга: " << book.getTitle() << ", Автор: " << book.getAutor().firstName << " " <<
            book.getAutor().lastName << " " << book.getAutor().nationality<< ", Година: " << book.getYearPublication() << endl;
            book.printBook();
        }
    }
}

// функция за търсене на книга по автор
void Library::findAutor(std::string findAutor) {
    cout << "Search results by autor:" << endl;
    for (Book book: library) {
        if(book.getAutor().firstName + " " + book.getAutor().lastName != string::npos){
         cout << "Книга: " << book.getTitle() << ", Автор: " << book.getAutor().firstName << " " << book.getAutor().lastName
                << ", Година: " << book.getYearPublication() << endl;
         book.printBook();
        }
    }
}

void Library::printLibrary() {
    for (Book book: library) {
        book.printBook();
    }
}

