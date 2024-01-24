#ifndef ONLINESHOP_USER_H
#define ONLINESHOP_USER_H
#include <iostream>
#include "Orders.h"
#include <string>
using namespace std;

class User {
public:
    User(string, vector<Orders*>);

    void setUsername(std::string);

    string getUsername();
    vector<Orders*> getOrders();

    void printOrder();

private:
    string username;
    vector<Orders*> orders;
};


#endif //ONLINESHOP_USER_H
