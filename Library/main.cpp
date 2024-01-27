#include <iostream>
#include "Book.h"
#include "Author.h"
#include "Library.h"
int main() {
    Author author1("autor1FirstName", "lastName", "Nationality");
    Author author2("autor2FirstName", "lastName", "Nationality");
    Author author3("autor3FirstName", "lastName" , "Nationality");
    Author author4("autor4FirstName", "lastName" , "Nationality");
    Author author5("autor5FirstName", "lastName" , "Nationality");


    Book book1("bookName1" , "", 1569, author1);
    Book book2("bookName2" , "", 1869, author2);
    Book book3("bookName3" , "", 1999, author3);
    Book book4("bookName4" , "", 2010, author4);
    Book book5("bookName5" , "", 20031, author5);

    Library library;
    library.print();

    library.addBook(book1);
    library.addBook(book2);

    library.print();

    library.findBook("Tale");

    return 0;
}
