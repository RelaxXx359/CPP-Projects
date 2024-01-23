#ifndef ONLINESHOP_USER_H
#define ONLINESHOP_USER_H

#include <iostream>
#include <string>
#include <vector>
#include "Drinks.h"

using namespace std;

class User {
public:
    User(string username, vector<Drinks*> orders);

    void printUser();

    string getUsername();

    void setUsername(string username);

    vector<Drinks*> getOrders();

    void setOrders(vector<Drinks*> orders);

private:
    string username;
    vector<Drinks*> orders;

};


#endif //ONLINESHOP_USER_H
