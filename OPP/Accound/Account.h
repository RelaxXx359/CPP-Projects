#ifndef ACCOUND_ACCOUNT_H
#define ACCOUND_ACCOUNT_H


class Account {

public:

    Account(double);

    void setMoney(double);
    double getMoney() const;

    virtual double debit(double);
    virtual double credit(double);
    virtual double getBalance() const;

private:

    double money;

};


#endif //ACCOUND_ACCOUNT_H
