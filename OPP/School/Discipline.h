#ifndef SCHOOL_DISCIPLINE_H
#define SCHOOL_DISCIPLINE_H

#include <string>
#include <system_error>

using namespace std;

class Discipline : public error_code {

public:


    Discipline(string name, int lectures, int exercises);

    void setName(string);
    void setLectures(int);
    void setExercises(int);

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
