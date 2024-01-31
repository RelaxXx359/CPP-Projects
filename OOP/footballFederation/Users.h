#ifndef FOOTBALLFEDERATION__USERS_H
#define FOOTBALLFEDERATION__USERS_H

#include <iostream>
#include <string>

using namespace std;

class Users {
public:
    Users(string username, string password);



    string getUsername();
    void setUsername(string username);

    string getPassword();
    void setPassword(string password);


private:
    string username;
    string password;

};
#endif //FOOTBALLFEDERATION__USERS_H
