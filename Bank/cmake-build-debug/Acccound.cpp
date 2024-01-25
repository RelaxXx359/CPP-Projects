#include <iostream>

using namespace std;
#include "Acccound.h"

Acccound::Acccound(double balance) {
//check>=0;
//initizlize balance
//in not 0 or >=0 error massage

    if (balance >= 0) {
        this-> balance = balance;
    } else {
        this->balance = 0;
        cout << "Invalid initial balance" << endl;
    }
}

void Acccound::credit(double amout) {

    this->balance = this->balance + amout;  // добавяне на сума

}

void Acccound::debit(double amount) {
    if (amount<=this->balance){
        this->balance = this->balance - amount;
    }else{

        cerr<< "Debit amouinf "  << endl;
    }

}

double Acccound::getBalance() {
    return this->balance;
}