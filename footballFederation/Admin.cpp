#include <iostream>
#include <string>
#include "Admin.h"

using namespace std;

Admin::Admin(string username, string password) : Users(username, password) {

}


void Admin::addTeam(Team t) {
    this->teams.push_back(t);
}

vector<Team> Admin::getTeams() {
    return this->teams;
}

void Admin::removeTeam(Team t) {
    string teamName = t.getName();
    for (int i = 0; i < teams.size(); ++i) {
        if (teams.at(i).getName() == teamName) {
            teams.erase(teams.begin() + i);
            cout << "Remove team:" <<endl;

        }
    }
}

void Admin::updateTeam(Team t) {
    string teamName = t.getName();
    for (int i = 0; i < teams.size(); ++i) {
        if (teams.at(i).getName() == teamName) {
            teams.at(i) = t;
            cout << "Update team:" <<endl;
        }
    }
}

