#include "NoAlcoholic.h"
#include "Drinks.h"

NoAlcoholic::NoAlcoholic(string name, double price, double quantity, string type, double litres,
                         double cityTax) : Drinks(name, price, quantity, type), litres(litres), cityTax(cityTax) {
    setCityTax(cityTax);
    setLitres(litres);
}

double NoAlcoholic::calculatePrice() {
    cout << getName() << " " << getPrice() << " " << getQuantity()<< " " << getType() << " " << getLitres() << " " << getCityTax() << endl;
    cout << "Total price: " << this-> getQuantity() * this->getPrice() * this->getCityTax() << endl;
    return 0.0;
}

double NoAlcoholic::getLitres() {
    return litres;
}
void NoAlcoholic::setLitres(double litres) {
    NoAlcoholic::litres = litres;
}

double NoAlcoholic::getCityTax() {
    return cityTax;
}
void NoAlcoholic::setCityTax(double cityTax) {
    NoAlcoholic::cityTax = cityTax;
}
