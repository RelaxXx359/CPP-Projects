#include "Member.h"


Member::Member(std::string title, Book book, std::string isbn, std::string name, int age, std::string member): book(book){
    setName(name);
    setAge(age);
    setMemberID(member);
    setBook(book);

}

void Book::display() {
    std::cout << getTitle() << getAutor() << getISBN();
}


void Member::setName(std::string name) {
    this->name = name;
}
void Member::setAge(int age) {
    this->age = age;
}
void Member::setMemberID(std::string member) {
    this->memberID = member;
}


std::string Member::getName() {
    return 0;
}
int Member::getAge() {
    return 0;
}
std::string Member::getMember() {
    return 0;
}

