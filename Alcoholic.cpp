#include "Alcoholic.h"
#include "Drinks.h"

Alcoholic::Alcoholic(string name, double price, int quantity, string type, int volume, double fee)
        : Drinks(name, price, quantity, type), volume(volume), fee(fee) {
    setVolume(volume);
    setFee(fee);
}

void Alcoholic::setVolume(int volume) {
    int alcoholicNumner = 0;
    if (volume > 0) {
        cout << "This is alcoholic drink" << endl;
        cout << "Current drink: " << getName() << ", price " << getPrice() << ", quantity " << getQuantity()
             << ", type " << getType() << ", volume "
             << volume << ", tax " << fee << endl;
        alcoholicNumner ++;
    }else{
        cout << "This is nonAlcholic drink" << endl;

    }
    Alcoholic::volume = volume;
}

void Alcoholic::setFee(double fee) {
//    if (fee > 0) {
//        cout << "Value added tax." << endl;
//        fee = 9;
//    }
    Alcoholic::fee = fee;
}


double Alcoholic::calculatePrice() {
    return this->getQuantity() * this->getPrice() * this->getFee();
}

void Alcoholic::print() {
    cout << "Current drink: " << getName() << " " << getPrice() << " " << getQuantity() << " " << getType() << " "
         << volume << " " << fee << endl;
}

int Alcoholic::getVolume() {
    return volume;
}

double Alcoholic::getFee() {
    return fee;
}


