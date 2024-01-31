#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include <vector>

int main() {
    Account* sa1Ptr = new SavingAccount(200);
    Account* ca1Ptr = new CheckingAccount(300);
    Account* ca2Ptr = new CheckingAccount(450);
    Account* sa2Ptr = new SavingAccount(550);

    std::vector<Account*> accounts;
    accounts.push_back(sa1Ptr);
    accounts.push_back(ca1Ptr);
    accounts.push_back(ca2Ptr);
    accounts.push_back(sa2Ptr);

    for (int i = 0; i < accounts.size(); ++i) {
        std::cout << accounts[i]->getBalance() << std::endl;

        SavingAccount* savingAccount = dynamic_cast<SavingAccount*>(accounts[i]);
        CheckingAccount* checkingAccount = dynamic_cast<CheckingAccount*>(accounts[i]);

        if (savingAccount) {
            std::cout << "Saving Account" << std::endl;
            savingAccount->calculateInterest();
            std::cout << savingAccount->getBalance() << std::endl;
        }

        if (checkingAccount) {
            std::cout << "Checking Account" << std::endl;
            checkingAccount->calculateInterest();
            std::cout << checkingAccount->getBalance() << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
