#ifndef SCOOL_SCHOOL_H
#define SCOOL_SCHOOL_H

#include "Class.h"
#include <string>
using namespace std;


//class School{
//public:
//
//    //конструктор
//    [[maybe_unused]] School(string classes);
//    string getClasses();
//
//private:
//    string classes;
//
//};
#pragma once

#include "Class.h"

class School {
public:
    School(const std::vector<Class>&);

    std::vector<Class> getClasses();

private:
    std::vector<Class> classes;
};

#endif //SCOOL_SCHOOL_H
