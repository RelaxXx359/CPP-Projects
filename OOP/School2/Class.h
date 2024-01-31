#ifndef SCOOL_CLASS_H
#define SCOOL_CLASS_H

//#include "Teacher.h"
//#include "Student.h"
//
//class Class{
//    //конструктор
//    Class(string id,string t,string c);
//
//    string getIdentifies();
//    string getTeachers();
//    string getStudents();
//
//
//
//private:
//    string identifies;
//    string teachers;
//    string students;
//};
#pragma once

#include "Teacher.h"
#include "Student.h"
#include <vector>

class Class {
public:
    Class(const std::string&, const std::vector<Teacher>&, const std::vector<Student>&);

    std::string getIdentifier();
    std::vector<Teacher> getTeachers();
    std::vector<Student> getStudents();

private:
    std::string identifier;
    std::vector<Teacher> teachers;
    std::vector<Student> students;
};


#endif //SCOOL_CLASS_H
