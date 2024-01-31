#ifndef LIBRARYMANAGESYSTEM_BOOK_H
#define LIBRARYMANAGESYSTEM_BOOK_H
#include <iostream>

class Book {
public:
    Book(std::string, std::string, std::string);

    void setTitle(std::string);
    void setAutor(std::string);
    void setISBN(std::string);

    std::string getTitle();
    std::string getAutor();
    std::string getISBN();

    void display();


private:
    std::string title;
    std::string autor;
    std::string ISBN;


};


#endif //LIBRARYMANAGESYSTEM_BOOK_H
