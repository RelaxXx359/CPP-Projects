#ifndef LIBRARYMANAGESYSTEM_MEMBER_H
#define LIBRARYMANAGESYSTEM_MEMBER_H

#include <iostream>
#include <string>
#include "Book.h"

class Member {
public:
    Member(std::string, Book, std::string, std::string , int, std::string);


    void setName(std::string);
    void setAge(int);
    void setMemberID(std::string);
    void setBook(Book);

    std::string getName();
    int getAge();
    std::string getMember();
    Book getBook();

    void display();

private:
    std::string name;
    int age;
    std::string memberID;

};


#endif //LIBRARYMANAGESYSTEM_MEMBER_H
