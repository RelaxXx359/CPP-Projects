
#ifndef SCHOOL_CLASS_H
#define SCHOOL_CLASS_H

#include <string>
#include <vector>
#include "Student.h"
#include "Teachers.h"

using namespace std;

class Class {

public:

    Class(string id, vector<Teachers> lectures, vector<Student> students);

    void getId(string);
    void getLecture(string);
    void getStrudent(string);


    string getTextIdents();
    vector<Teachers> getLectures();
    vector<Student> getStudents();

    void printClassInfo();



private:
    string textIdentifier;
    vector<Teachers> lecture;
    vector<Student> student;
};

#endif //SCHOOL_CLASS_H
