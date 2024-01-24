#include "User.h"

User::User(std::string name, std::vector<Orders*> orders) : orders(orders) {
    setUsername(name);
}

void User::setUsername(std::string name) {
    this->username = name;
}

std::string User::getUsername() {
    return this->username;
}

std::vector<Orders*> User::getOrders() {
    return this->orders;
}

void User::printOrder() {
    cout << "Client: " << this->getUsername() << endl;
    cout << "Orders: " << endl;

    for (size_t i = 0; i < orders.size(); ++i) {
        orders[i]->printOrder();
    }
}



