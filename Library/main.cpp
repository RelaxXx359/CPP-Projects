#include <iostream>
#include "Library.h"
#include "Book.h"
#include "Autor.h"
#include <vector>
#include <string>

using namespace std;


int main() {
    vector<Book *> library;
    string bkName, authFrstName, authLastName, authNationality, genre;
    int year;

    Autor brandoSando("Brandon", "Sanderson", "American");
    Book *b1Ptr = new Book("The Way of Kings", brandoSando, "Fantasy", 2020);
    b1Ptr->printBook();
    library.push_back(b1Ptr);
    string usrInp;

    int choice;
    string searchQuery;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Insert new book." << endl;
        cout << "2. Search for a book by title" << endl;
        cout << "3. Search for a book by author" << endl;
        cout << "0. Exit" << endl;

        cout << "Select an option: ";
        cin >> choice;

        cin.ignore(); // Изчистване на буфера след въвеждане на числото

        if (choice == 1) {
            // Book *bkPtr = EnterBookData();
            // library.push_back(bkPtr);
            library.back()->printBook();

        } else if (choice == 2) {
            cout << "Въведете име на книга или част от името: ";
            for (int i = 0; i < library.size(); i++) {
                library.at(i)->getTitle();
            }
        } else if (choice == 3) {
            cout << "Въведете име на автор: ";
            for (int i = 0; i < library.size(); ++i) {
                library.at(i)->getAutor();
            }
        } else if (choice == 0) {
            cout << "Невалиден избор! Опитайте отново." << endl;
        }
    } while (choice != 0);

//// Записване на библиотеката във файл при изход от програмата
//    saveLibraryToFile(library,
//                      "library.dat");

    return 0;
}














//        vector<Autor *> authors;
//        vector<Book *> books;
//        // string bkName, authFrstName, authLastName, authNationality, genre; //for input better sep into function
//        // int year;
//        Autor brandoSando("Brandon", "Sanderson", "American");
//        Book *b1Ptr = new Book("The Way of Kings", brandoSando, "Fantasy", 2020);
//        b1Ptr->printBook();
//        books.push_back(b1Ptr);
//        string usrInp;
//
//        showHomeMenu();
//        // cin.ignore();
//        getline(cin, usrInp);
//        while (usrInp != "~") {
//            int choice = stoi(usrInp);
//            string srchTerm, lSrchTrm, bookName, authorName, lBookName, lAuthorName; // added extra lStrings jsut to see the change to lower, we can always string = toLower(string); and use less vars
//            bool bkFound = false;
//            if (choice == 1) { //awaits inp for book data from user
//                Book *bkPtr = EnterBookData();
//                books.push_back(bkPtr);
//                books.back()->printBook();
//            }
//            if (choice == 2) { // displays whole catalog
//                for (int i = 0; i < books.size(); i++) {
//                    books.at(i)->printBook();
//                }
//            }
//            if (choice == 3) { //awaits search term to search for book in catalog
//                cout << "Enter book name or part of name: ";
//                getline(cin, srchTerm);
//                lSrchTrm = toLower(srchTerm);
//                for (int i = 0; i < books.size(); i++) {
//                    bookName = books.at(i)->getTitle();
//                    lBookName = toLower(bookName);
//                    if (lBookName.find(lSrchTrm) < 1000) {
//                        cout << "Book found: ";
//                        books.at(i)->printBook();
//                        bkFound = true;
//                    }
//                }
//                if (!bkFound) {
//                    cout << "Book not found in this catalog." << endl;
//                }
//            }
//            if (choice == 4) { //awaits inp for author name to display books found under that name
//                cout << "Enter author name: ";
//                getline(cin, srchTerm);
//                lSrchTrm = toLower(srchTerm);
//                for (int i = 0; i < books.size(); i++) {
//                    bookName = books.at(i)->getTitle();
//                    authorName = books.at(i)->getAutor().getFirstName() + " " + books.at(i)->getAutor().getLastName();
//                    lAuthorName = toLower(authorName);
//                    if (lAuthorName.find(lSrchTrm) < 1000) {
//                        cout << "Book(s) found by author: ";
//                        // cout << bookName << endl;   //or
//                        books.at(i)->printBook();  //full info of book if not just title
//                        bkFound = true;
//                    }
//                }
//                if (!bkFound) {
//                    cout << "Book by that author not found in this catalog." << endl;
//                }
//
//            }
//            showHomeMenu();
//            getline(cin, usrInp);
//
//        }
//
//return 0;
//}