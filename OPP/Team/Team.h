#ifndef TEAM_TEAM_H
#define TEAM_TEAM_H

#include <string>

using namespace std;

class Team {
public:
    Team(string, int);

    void setName(string);
    void setPoints(int);

    string getName();
    int getPoints();

    virtual void print();

private:
    string name;
    int points;

};


#endif //TEAM_TEAM_H
