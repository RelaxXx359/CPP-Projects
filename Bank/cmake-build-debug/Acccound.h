#ifndef BANK_ACCCOUND_H
#define BANK_ACCCOUND_H


class Acccound {
public:
    Acccound(double );        //unsigned на мястото на int double
    void credit(double );
    void debit(double );
    double getBalance();

private:
    double balance;

};


#endif //BANK_ACCCOUND_H
