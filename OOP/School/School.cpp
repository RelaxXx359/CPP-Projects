#include <iostream>
#include <string>
#include "School.h"
using namespace std;

School::School(vector<Class> clsses) {

}

vector<Class> School::getClass() {
    return this->classes;
}
