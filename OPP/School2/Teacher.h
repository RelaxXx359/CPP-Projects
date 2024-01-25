#ifndef SCHOOL_TEACHER_H
#define SCHOOL_TEACHER_H

#include <string>
#include <vector>
#include "Discipline.h"

using namespace std;


class Teacher{

public:

    //конструктор

    Teacher(string name, string title, Discipline &discipline);   //референция

    // фунция
    string getName();
    string getTitle();
    vector<Discipline> getDiscipline();




private:
    string name;
    string title;
    Discipline &disciplines;
};

#endif //SCHOOL_TEACHER_H
