#include "Class.h"

#include "Student.h"

Class::Class(string id, vector<Teachers> t, vector<Student> s)
        : textIdentifier(id), lecture(t), student(s) {
}

string Class::getTextIdents() {
    return textIdentifier;
}
vector<Teachers> Class::getLectures() {
    return this->lecture;
}
vector<Student> Class::getStudents() {
    return this->student;
}
//void Class::printClassInfo() {
//    cout << getTextIdents() << " " << vector<Teachers> getLectures() << " " << vector<Students>getStudents() << endl;
//
//}
