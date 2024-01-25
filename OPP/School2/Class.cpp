//#include "Class.h"
//
//Class::Class(std::string id, std::string t, std::string s) : identifies(id), teachers(t), students(s) {
//
////    this->identifies = id;
////    this->teachers = t;
////    this->students = s;
//}
//
//string Class::getIdentifies() {
//    return this->identifies;          \
//    //return identifies;
//}
//
//string Class::getTeachers() {
//    return this->teachers;
//    //return teachers;
//}
//
//string Class::getStudents() {
//    return this->students;
//    //return students;
//}
#include "Class.h"
#include <vector>

Class::Class (const std::string& id, const std::vector<Teacher>& t, const std::vector<Student>& s)
        : identifier(id), teachers(t), students(s) {}

std::string Class::getIdentifier() {
    return identifier;
}

std::vector<Teacher> Class::getTeachers() {
    return teachers;
}

std::vector<Student> Class::getStudents() {
    return students;
}