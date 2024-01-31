#ifndef ACCOUND_CHECKINGACCOUNTS_H
#define ACCOUND_CHECKINGACCOUNTS_H
#include "Account.h"

class CheckingAccount : public Account {

public:

    CheckingAccount(double);

    double debit(double);
    double credit(double);
    double getBalance() const;

    double calculateInterest();
};


#endif //ACCOUND_CHECKINGACCOUNTS_H
