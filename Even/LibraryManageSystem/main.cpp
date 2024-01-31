#include <iostream>
#include "Book.h"
#include "Member.h"
#include <vector>

int main() {

    Book *b1Ptr = new Book("C++", "Herbert Schildt", "123");
    Book *b2ptr = new Book("Pod Igoto", "Ivan Vazov", "156");

    std::vector<Book *> books;
    books.push_back(b1Ptr);
    books.push_back(b2ptr);
//    b1Ptr->display();
//    b2ptr->display();
Member *m1Ptr = new Member("Stefan Stefanov", "21", "156548");




    return 0;
}
