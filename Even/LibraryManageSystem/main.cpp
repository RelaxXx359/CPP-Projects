#include <iostream>
#include "Book.h"
#include <vector>

int main() {

    Book *b1Ptr = new Book("C++", "Herbert Schildt", "123");
    Book *b2ptr = new Book("", "", "");

    std::vector<Book *> books;
    books.push_back(b1Ptr);
    books.push_back(b2ptr);
    b1Ptr->display();
    b2ptr->display();

    return 0;
}
