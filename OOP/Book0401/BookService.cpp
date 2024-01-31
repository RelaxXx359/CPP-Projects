#include "BookService.h"

using namespace std;

Book BookService::inputData() {
    string author;
    string title;
    int yearOfIssue;
    double price;

    cout << "Enter Author: " << " ";
    getline(cin, author);

    cout << "Enter Book title: " << " ";
    getline(cin, title);

    cout << "Enter Year of issue: " << " ";
    cin >> yearOfIssue;

    cout << "Enter price: " << " ";
    cin >> price;

    cout << endl;

    Book myBook(author, title, yearOfIssue, price);

    return myBook;
}