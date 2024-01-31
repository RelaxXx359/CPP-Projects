
#include <iostream>
#include "Teacher.h"
#include <vector>

using namespace std;


Teacher::Teacher(string name, string title, Discipline &discipline) : name(name), title(title), disciplines(discipline) {

    //this->name = name;
    //this->title = title;

}

string Teacher::getName() {
    return this->name;
}

string Teacher::getTitle() {
    return this->title;
}

vector<Discipline> Teacher::getDiscipline() {

}



