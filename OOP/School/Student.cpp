#include <iostream>
#include "Student.h"

using namespace std;


Student::Student(string name, int classNum)
: name(name), studentNum(classNum) {

}

string Student::getName(){
    return this->name;
}
int Student::getStudentNum() {
    return this->studentNum;
}

//void Student::printStudentInfo() {
//    cout<< "Student name " << this->name << " and student number " << this->studentNum << endl;
//}