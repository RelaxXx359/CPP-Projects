#include "Orders.h"

int Orders::number = 0;

Orders::Orders(const char *drinks, string date) : drinks((unsigned long long int) drinks){
    setDate(date);
    setTotalPrice(0);

    number++;
    setNumber(number);

}


void Orders::setDate( string date) {
    Orders::date = date;
}
void Orders::setNumber(int num) {
    this->numbers = num;
}
double Orders::setTotalPrice(double total) {
    this->totalprice = total;

}

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

int Orders::getNumbers() {
    return this->numbers;
}
string  Orders::getDate() {
    return this->date;
}
double Orders::getTotalPrice()  {
    return this->totalprice;
}
vector<Drinks*> Orders::getDrinks() {
    return this->drinks;
}








