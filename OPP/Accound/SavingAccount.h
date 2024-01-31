#ifndef ACCOUND_SAVINGSACCOUNTS_H
#define ACCOUND_SAVINGSACCOUNTS_H


#include "Account.h"

class SavingAccount : public Account {

public:

    SavingAccount(double);

    double debit(double);
    double credit(double);
    double getBalance() const;

    double calculateInterest();

private:


};
#endif //ACCOUND_SAVINGSACCOUNTS_H
