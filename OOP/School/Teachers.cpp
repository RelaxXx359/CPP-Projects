#include "Teachers.h"
#include <iostream>

using namespace std;


Teachers::Teachers(string n, string t, Discipline discipline)
        : name(n), title(t), dispiclines(discipline) {

}

string Teachers::getName() {
    return this->name;
}

string Teachers::getTitle() {
    return this->title;
}

Discipline Teachers::getDiscipline() {
    return this->getDiscipline();
}
void Teachers::printTeachersInfo() {
    cout << getName() << " " << getTitle() << " " << getDiscipline() << endl;
}
