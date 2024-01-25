#include "Discipline.h"
#include <iostream>

using namespace std;

Discipline::Discipline(string name, int lectures, int exercises)
: name(name), lecturesCount(lectures),exercisesCount(exercises) {}


string Discipline::getName() {
    return this->name;
}
int Discipline::getLectures() {
    return this->lecturesCount;
}
int Discipline::getExercises() {
    return this->exercisesCount;
}

void Discipline::printDisciplineInfo() {
    cout << this->name << " " << this->lecturesCount << " " << this->exercisesCount << endl;
}


