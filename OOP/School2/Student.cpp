#include <iostream>
#include "Student.h"


Student::Student(string name, int number):name(name), classNumber(number){

    //this->name = name;
    //this->classNumber = number;

}
// сетери
void Student::setName(std::string name) {
    this->name = name;
}

void Student::setClassNumber(int classNumber) {
    this->classNumber = classNumber;
}

// гетери
string Student::getName() {
    return this->name;
}
int Student::getClassNumber() {
    return this->classNumber;
}
// принтиране
void Student::prinStudentInfo()  {
    cout << "Student name " << this-> name << " and id " << this->classNumber << endl;
}