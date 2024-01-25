#include "Book.h"

using namespace std;

Book::Book(string author, string title, int yearOfIssue, double price) {
    setAuthor(author);
    setTitle(title);
    setYearOfIssue(yearOfIssue);
    setPrice(price);
}

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setTitle(string title) {
    this->title = title;
}

void Book::setYearOfIssue(int yearOfIssue) {
    if (yearOfIssue > 1880 && yearOfIssue < 2024) {
        this->yearOfIssue = yearOfIssue;
    }
    else {
        this->yearOfIssue = 1990;
        cout << "Invalid year. Year must be between 1880 and 2024. Year is set automatically to 1990." << endl;
    }

}

void Book::setPrice(double price) {
    if (price <= 0) {
        this->price = 15.00;
        cout << "Invalid price. Price must be positive number. Price is set automatically to 15.00." << endl;
    }
    else if (price > 1500) {
        this->price = 250.00;
        cout << "Too big price. You sell a book, not a car. Price is set automatically to 250.00." << endl;
    }
    else {
        this->price = price;
    }
}

double Book::getPrice() {
    return this->price;
}

string Book::getAuthor() {
    return this->author;
}

string Book::getTitle() {
    return this->title;
}

int Book::getYear() {
    return this->yearOfIssue;
}

void Book::displayMessage() {
    cout << "Author: " << this->author
         << ", Book Title: " << this->title
         << ", Year of issue: " << this->yearOfIssue
         << ", price: " << this->price
         << endl;
}