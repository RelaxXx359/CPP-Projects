#include <iostream>
#include <vector>

#include "Book.h"
#include "BookService.h"

std::vector<Book> EnterBooks() {
    std::vector<Book> books;
    int booksCount = 0;

    std::cout << "How many books do you want to enter? \n";
    std::cin >> booksCount;

    BookService bs;

    for (int i = 0; i < booksCount; ++i) {
        Book myBook = bs.inputData();
        books.push_back(myBook);
    }

    return books;
}

void theCheapestBook(std::vector<Book>& books) {
    double mostCheapestBook = books.at(0).getPrice();
    int idx = 0;

    for (int i = 1; i < books.size(); ++i) {
        if (books.at(i).getPrice() < mostCheapestBook) {
            mostCheapestBook = books.at(i).getPrice();
            idx = i;
        }
    }

    std::cout << "Most cheapest book is: ";
    books[idx].displayMessage();
    std::cout << std::endl;
}

void theMostExpensiveBook(std::vector<Book>& books) {
    double mostExpensiveBook = books[0].getPrice();
    int idx = 0;

    for (int j = 0; j < books.size(); ++j) {
        if (books[0].getPrice() > mostExpensiveBook) {
            mostExpensiveBook = books[0].getPrice();
            idx = j;
        }
    }

    std::cout << "Most expensive book is: ";
    books.at(idx).displayMessage();
    std::cout << std::endl;
}

int main() {
    auto books = EnterBooks();

    theCheapestBook(books);
    theMostExpensiveBook(books);

    return 0;
}