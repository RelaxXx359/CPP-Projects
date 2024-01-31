#ifndef SCHOOL_STUDENT_H
#define SCHOOL_STUDENT_H
#include <iostream>
#include <string>

using namespace std;
class Student{

public:
    //конструктор
    Student(string name,int classNum);
    
    void setName(string);
    void setClassNumber(int);

    string getName();
    int getClassNumber();

    void prinStudentInfo();

private:
    string name;
    int classNumber;
};
#endif //SCHOOL_STUDENT_H
