#include "NonAlcoholic.h"
#include "Drinks.h"

NonAlcoholic::NonAlcoholic(string name, double price, int quantity, string type, double litres,
                           int cityTax) : Drinks(name, price, quantity, type), litres(litres), cityTax(cityTax) {
    setCityTax(cityTax);
    setLitres(litres);
}

void NonAlcoholic::setCityTax(int cityTax) {
    if (cityTax <= 0) {
        cout << "City tax" << endl;
    }
    NonAlcoholic::cityTax = cityTax;
}

void NonAlcoholic::setLitres(double litres) {
    if (litres == 0.5) {
        cout << "A bottle 500 ml" << endl;
    } else if (litres = 2) {
        cout << "A bottle 2 litres" << endl;

    }
    NonAlcoholic::litres = litres;
}


double NonAlcoholic::calculatePrice() {
    return this->getQuantity() * (this->getPrice() * this->getCityTax());
}


void NonAlcoholic::print() {
    Drinks::print();
    cout << "Liters: " << this->getLitres() << " Total price: " << this->calculatePrice() << endl;
}


double NonAlcoholic::getLitres() {
    return litres;
}

int NonAlcoholic::getCityTax() {
    return cityTax;
}
