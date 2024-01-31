#include "SavingAccount.h"

SavingAccount::SavingAccount(double money) : Account(money) {}

double SavingAccount::debit(double num) {
    return Account::debit(num);
}

double SavingAccount::credit(double num) {
    return Account::credit(num);
}

double SavingAccount::getBalance() const {
    return Account::getBalance();
}

double SavingAccount::calculateInterest() {
    double interest = 0.02;
    double money = this->getMoney();
    return this->credit(money *= interest);
}