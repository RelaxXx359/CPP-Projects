#ifndef SCHOOL_TEACHERS_H
#define SCHOOL_TEACHERS_H

#include <string>
#include "Discipline.h"
#include <vector>

using namespace std;

class Teachers {

public:
    // construction
    Teachers(string n, string t,  Discipline disciplines);

    void setName(string);

    void setTitle(string);

    string getName();

    string getTitle();

    Discipline getDiscipline();

    void printTeachersInfo();
private:
    string name;
    string title;
    Discipline dispiclines;


};

#endif //SCHOOL_TEACHERS_H
