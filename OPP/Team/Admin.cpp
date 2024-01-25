#include "Admin.h"

Admin::Admin(vector<Team *> teams) : teams(teams) {}



 vector<Team *> Admin::getTeams() {
    return teams;
}

void Admin::setTeams( vector<Team *> teams) {
    Admin::teams = teams;
}

