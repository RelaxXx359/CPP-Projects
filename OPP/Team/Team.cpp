#include "Team.h"
#include <string>

using namespace std;

Team::Team(std::string name, int points) {
    setName(name);
    setPoints(points);
}


void Team::setName(string name) {
    this->name = name;
}
void Team::setPoints(int points) {
    this->points = points;
}

string Team::getName() {
    return name;
}
int Team::getPoints() {
    return points;
}



