#ifndef TEAM_ADMIN_H
#define TEAM_ADMIN_H
#include <iostream>
#include <vector>
#include <string>
#include "Team.h"
using namespace std;
class Admin {
public:
    Admin( vector<Team *> teams);

    void addTeams(Team t);
    void removeTeams(Team t);
    void updateTeams(Team t);

    vector<Team *> getTeams();

    void setTeams(vector<Team *> teams);

private:
    vector<Team*> teams;

};


#endif //TEAM_ADMIN_H
