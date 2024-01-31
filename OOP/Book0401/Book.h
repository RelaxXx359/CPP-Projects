#ifndef BOOK0401_BOOK_H
#define BOOK0401_BOOK_H

#include <iostream>

using namespace std;

class Book {
public:
    Book(string, string, int, double);

    void setAuthor(string);
    void setTitle(string);
    void setYearOfIssue(int);
    void setPrice(double);

    double getPrice();
    string getAuthor();
    string getTitle();
    int getYear();

    void inputData();
    void displayMessage();

private:
    string author;
    string title;
    int yearOfIssue;
    double price;
};

#endif //BOOK0401_BOOK_H
