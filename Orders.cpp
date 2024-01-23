#include "Orders.h"


Orders::Orders( string drinks,  string date, double totalprice) : drinks(drinks), date(date),
                                                                              totalprice(totalprice) {}

 void Orders::printOrder() {
     cout << getDrinks() << " " << getDate() << " " << getTotalprice() << endl;
//     for (int i = 0; i < ; ++i) {
//
//     }
 }

 string Orders::getDrinks()  {
    return drinks;
}
void Orders::setDrinks( string drinks) {
    Orders::drinks = drinks;
}

 string Orders::getDate()  {
    return date;
}
void Orders::setDate( string date) {
    Orders::date = date;
}

double Orders::getTotalprice() {
    return totalprice;
}

void Orders::setTotalprice(double totalprice) {
    double num = 0;
//    for (int i = 0; i < this->drinks.size(); ++i) {
//        num += drinks[i];
//    }
    Orders::totalprice = totalprice;
}
