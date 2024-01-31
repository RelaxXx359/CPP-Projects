//
// Created by Dobrolyub Velinov on 10.1.2024 г..
//

#ifndef SCHOOL_STUDENT_H
#define SCHOOL_STUDENT_H

#include <iostream>
#include <string>

using namespace std;


class Student {

public:
    //конструкция
    Student(string name, int studentNum);

    void setName(string);
    string getName();

    int setStudentNum(int);
    int getStudentNum();

//    void printStudentInfo();


private:

    string name;
    int studentNum;

};

#endif //SCHOOL_STUDENT_H
