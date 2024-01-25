
#ifndef SCHOOL_DISCIPLINE_H
#define SCHOOL_DISCIPLINE_H

#include <iostream>
#include "string"

using namespace std;

class Discipline{
public:
    //конструктор
    Discipline(string,int ,int );

    // сетери
    void setName (string);
    void setLecturesNumber(int);
    void setExercisesNumber(int);

    // гетери
    string getName();

    int getLectures();
    int getExercises();

    void printDisciplineInfo();


private:
    string name;
    int lecturesCount;
    int exercisesCount;
};
#endif //SCHOOL_DISCIPLINE_H
