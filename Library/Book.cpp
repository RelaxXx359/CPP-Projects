#include "Book.h"


Book::Book(std::string book, std::string genre, int yeaer, Author author) : autor(author) {
    setBookName(book);
    setGenre(genre);
    setYear(yeaer);
}

void Book::print() {
    std::cout << "Book: " << this->getBookName() << " " << this->getGerne() << " " << this->getYear() << endl;
}


void Book::setBookName(std::string book) {
    this->bookName = book;
}

void Book::setGenre(std::string genre) {
    int chose;

    std::cout << "Enter your choice of genre for " <<   this->getBookName() << ": " << std::endl;
    std::cout << "For classic    press 1:" << std::endl;
    std::cout << "For children   press 2:" << std::endl;
    std::cout << "For fantastic  press 3:" << std::endl;
    std::cout << "For biographic press 4:" << std::endl;
    std::cout << "For love       press 5:" << std::endl;
    std::cin>>chose;

    switch (chose) {
        case 1:
            genre = "Classic";
            break;
        case 2:
            genre = "Children";
            break;
        case 3:
            genre = "Fantastic";
            break;
        case 4:
            genre = "Biographic";
            break;
        case 5:
            genre = "Love";
            break;
        default:
            std::cout << "Invalid choise. Genre set to Classic." << std::endl;
            genre= "Classic";
            break;
    }
    this->gerne = genre;
}

void Book::setYear(int yeaer) {
    this->year = yeaer;
}

string Book::getBookName() {
    return this->bookName;
}

string Book::getGerne() {
    return this->gerne;
}

int Book::getYear() {
    return this->year;
}