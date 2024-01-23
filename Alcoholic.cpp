#include "Alcoholic.h"
#include "Drinks.h"

Alcoholic::Alcoholic(string name, double price, double quantity, string type, int volume, double fee)
        : Drinks(name, price, quantity, type), volume(volume), fee(fee) {
    setVolume(volume);
    setFee(fee);
}


double Alcoholic::calculatePrice() {
    cout << getName() << " " << getPrice() << " " << getQuantity()<< " " << getType() << " " << volume<< " " << fee << endl;
    cout << "Total price: " << this->getQuantity() * this-> getPrice() * this-> getFee() << endl;
    return 0.0;
}

//string Drinks::getType() {
//    if(type == "wine"){
//
//    }else if (type == "gin"){
//
//    }else if (type == "whiskey"){
//
//    }else if (type == "water"){
//
//    }else if (type == "juice"){
//
//    }else if (type == "ice tea"){
//
//    }
//}


int Alcoholic::getVolume() {
    return volume;
}

void Alcoholic::setVolume(int volume) {
    Alcoholic::volume = volume;
}

double Alcoholic::getFee() {
    return fee;
}

void Alcoholic::setFee(double fee) {
    Alcoholic::fee = fee;
}
