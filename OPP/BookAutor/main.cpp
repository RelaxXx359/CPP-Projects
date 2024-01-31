#include "Book.h"
#include <vector>

Book* EnterBookData(){
    string bkName, authFrstName, authLastName, authNationality, genre; //for input better sep into function
    int year;

    cout << "Enter book name(-1 to exit): ";
    getline(cin,bkName);
    cout << "Enter author first name: ";
    getline(cin,authFrstName);
    cout << "Enter author last name: ";
    getline(cin,authLastName);
    cout << "Enter authors nationality: ";
    getline(cin,authNationality);
    cout << "Enter book genre: " ;
    getline(cin,genre);
    cout << "Enter year of publishing: " ;
    cin >> year;
    Author author( authFrstName, authLastName, authNationality);
    Book* book= new Book( bkName, author, genre, year);
    cin.ignore();
    return book;
}

void showHomeMenu(){
    cout << "Hello, welcome to the book inventory system,"<< endl << "1. enter book data, " << endl <<"2. View Book Catalog" << endl;
    cout << "3. lookup books by name" << endl <<"4. search books by author"<< endl <<" ~ to exit: ";
}

string toLower(string str){
    string lStr;
    for (int i = 0; i < str.length(); i++){
        lStr+=char(tolower(str[i]));
    }
    return lStr;
}

int main(){
    vector<Author *> authors;
    vector<Book *> books;

    Author brandoSando("Brandon", "Sanderson", "American");
    Book* b1Ptr = new Book("The Way of Kings", brandoSando, "Fantasy", 2020 );
    b1Ptr->printBook();
    books.push_back(b1Ptr);


    string userInput;
    showHomeMenu();

    getline(cin, userInput);
    while (userInput != "~"){
        int choice = stoi(userInput);
        string srchTerm, lSrchTrm, bookName, authorName, lBookName, lAuthorName;

        bool bkFound = false;
        if (choice == 1){
            Book* bkPtr = EnterBookData();
            books.push_back(bkPtr);
            books.back()->printBook();
        }
        if (choice ==2){
            for (int i = 0; i < books.size(); i++){
                books.at(i)->printBook();
            }
        }
        if (choice == 3){
            cout << "Enter book name or part of name: ";
            getline(cin, srchTerm);
            lSrchTrm = toLower(srchTerm);
            for (int i = 0; i < books.size(); i++){
                bookName = books.at(i)->getName();
                lBookName = toLower(bookName);
                if ( lBookName.find(lSrchTrm) < 1000){
                    cout << "Book found: ";
                    books.at(i)->printBook();
                    bkFound = true;
                }
            }
            if (!bkFound){
                cout << "Book not found in this catalog." << endl;
            }
        }
        if (choice == 4){
            cout << "Enter author name: ";
            getline(cin, srchTerm);
            lSrchTrm = toLower(srchTerm);
            for (int i = 0; i < books.size(); i++){
                bookName = books.at(i)->getName();
                authorName = books.at(i)->getAuthor().getName() + " " + books.at(i)->getAuthor().getSurname();
                lAuthorName = toLower(authorName);
                if (lAuthorName.find(lSrchTrm) < 1000){
                    cout << "Book(s) found by author: ";
                    books.at(i)->printBook();
                    bkFound = true;
                }
            }
            if (!bkFound){
                cout << "Book by that author not found in this catalog." << endl;
            }

        }
        showHomeMenu();
        getline(cin, userInput);

    }

    return 0;
}