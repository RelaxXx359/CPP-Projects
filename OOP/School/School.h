#ifndef SCHOOL_SCHOOL_H
#define SCHOOL_SCHOOL_H

#include <string>
#include "Class.h"
using namespace std;


class School {

public:
    // constructor
    School(vector<Class> clsses);


    vector<Class> getClass();


private:
    vector<Class> classes;
};

#endif //SCHOOL_SCHOOL_H
