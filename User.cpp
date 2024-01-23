#include "User.h"

User::User(string username, vector<Drinks*> orders) : username(username), orders(orders) {
    setUsername(username);
}


void User::printUser() {
    cout << this->username;
}

string User::getUsername() {
    return username;
}

void User::setUsername(string username) {
    User::username = username;
}

vector<Drinks*> User::getOrders() {
    return orders;
}

void User::setOrders(vector<Drinks*> orders) {
    User::orders = orders;
}
