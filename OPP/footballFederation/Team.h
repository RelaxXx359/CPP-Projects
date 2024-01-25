#ifndef FOOTBALLFEDERATION__TEAM_H
#define FOOTBALLFEDERATION__TEAM_H

#include <string>
using namespace std;

class Team {
public:
    Team(string , string);


    string getCity() ;
    void setCity(string);

    string getName();
    void setName(string);

    int getPoints();

    int updatePoints(int newPoints);

private:
    string name;
    string city;
    int points;


};

#endif //FOOTBALLFEDERATION__TEAM_H
