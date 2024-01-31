#include <iostream>
#include "Users.h"
#include <string>
#include "Team.h"
#include "Admin.h"

using namespace std;

int main() {
    Admin a1("Katya", "Kasdasd");
//    Users obj1("katya", "asd");
//
////set
//    cout << obj1.getPassword();
    Team team("Liverpool", "Liverpool");
    Team team2("Barcelona", "Barcelona");
    Team team3("Inter", "Milan");


    cout << "Team cout" << a1.getTeams().size() << endl;

    a1.addTeam(team);
    a1.addTeam(team2);
    a1.addTeam(team3);


    cout<<"Team cout" << a1.getTeams().size() << endl;
    Team t4("Liverpool", "Haskov");
    a1.updateTeam(t4);

    for (Team t: a1.getTeams()) {
        cout << t.getName() << " " << t.getCity() << endl;
    }


    return 0;
}
