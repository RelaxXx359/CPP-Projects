#include <iostream>
#include <string>
#include "Team.h"

using namespace std;

Team::Team(string name, string city) : name(name), city(city){
    this->points = 0;
}




int Team::updatePoints(int newPoints) {
    this->points = this->points + newPoints;
}


 string Team::getName()  {
    return name;
}
void Team::setName( string name) {
    Team::name = name;
}


int Team::getPoints() {
    return points;
}


 string Team::getCity() {
    return city;
}
void Team::setCity(string city) {
    Team::city = city;
}
