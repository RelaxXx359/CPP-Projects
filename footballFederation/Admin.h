#ifndef FOOTBALLFEDERATION__ADMIN_H
#define FOOTBALLFEDERATION__ADMIN_H

#include <iostream>
#include <string>
#include "Team.h"
#include "Users.h"
#include <vector>

using namespace std;

class Admin: public Users{
public:

    Admin( string username,  string password);



    void addTeam(Team);
    void removeTeam(Team);
    void updateTeam(Team);


    vector<Team>getTeams();

private:
    vector<Team> teams;
};


#endif //FOOTBALLFEDERATION__ADMIN_H
