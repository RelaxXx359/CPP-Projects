#include "Orders.h"

Orders::Orders(const string &date)
: date(date),totalprice(totalprice) {}



double Orders::calculateTotalPrice(){
    double num = 0;
    for (int i = 0; i < this->drinks.size(); ++i) {
        num += drinks[i]->calculatePrice();
    }
    return num;
}

void Orders::printOrder() {
    cout << "Your order number is:" << this->getNumbers()<< ", total price is:" << " " << this->calculateTotalPrice()<< endl;
}


void Orders::setDate( string date) {
    Orders::date = date;
}

double Orders::setTotalPrice(double total) {
    this->totalprice = total;

}


string  Orders::getDate() {
    return this->date;
}
double Orders::getTotalPrice()  {
    return this->totalprice;
}








