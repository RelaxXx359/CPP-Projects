#include "Account.h"
#include "iostream"

Account::Account(double money) {
    setMoney(money);
}
double Account::debit(double num) {
    if (num < 0) {
        std::cout << "Must be a positive number." << std::endl;
        num = 0;
    }

    if (num > this->getBalance()) {
        std::cout << "No credit." << std::endl;
        num = 0;
    }
    return this->money -= num;
}
void Account::setMoney(double money) {
    if (money < 0) {
        std::cout << "Must be a positive number. You money is set to 0. " << std::endl;
        money = 0;
    }

    this->money = money;
}

double Account::getMoney() const {
    return this->money;
}



double Account::credit(double num) {
    if (num < 0) {
        std::cout << "Must be a positive number." << std::endl;
        num = 0;
    }
    return this->money += num;
}

double Account::getBalance() const {
    return this->getMoney();
}