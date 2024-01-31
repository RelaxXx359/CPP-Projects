#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double money) : Account(money) {}

double CheckingAccount::debit(double num) {
    return Account::debit(num);
}

double CheckingAccount::credit(double num) {
    return Account::credit(num);
}

double CheckingAccount::getBalance() const {
    return Account::getBalance();
}

double CheckingAccount::calculateInterest() {
    double interest = 0.08;
    double money = this->getMoney();
    return this->debit(money *= interest);
}
