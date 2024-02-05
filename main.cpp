#include <iostream>
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include "Orders.h"
#include "User.h"
#include "Drinks.h"
#include <string>
#include <vector>

using namespace std;

//Drinks               Food
//
//Alcoholic    NoAlcoholic     Tea Coffee  Biscuits  Chocolates   Nuts
//
//Drinks
//Name. ; Price. ; Quantity
//Type (wine, gin, whiskey, water, juice, ice tea, …)
//Print()
//
//NoAlcoholic
//Liters ; CityTax
//CalculatePrice()  -> Quantity * Price + CityTax
//
//Alcoholic
//Volume ; Tax (акциз)
//CalculatePrice() > Quantity * (Price  * Tax)
//
//Потребител - username, списък/вектор от поръчки
//Поръчка: - напитки, дата, крайна сума
//Метод за извеждане на инфо колко напитки са продадени от всеки вид
//Метод който връща най-добрият клиент/клиенти (с най-скъпа поръчка)
//Метод който връща всички клиенти с поръчки съдържащи напитка от даден тип
//Метод който връща 10-те клиенти с поръчки съдържащи напитка от даден тип с оборот на поръчката им над дадена сума

int main() {
    Drinks *aPtr1 = new Alcoholic     ("Jim Beam", 29, 1, "whiskey", 39, 20);
    Drinks *aPtr2 = new Alcoholic     ("Jack Daniels", 35, 1, "whiskey", 39, 18);

    Drinks *naPtr1 = new NonAlcoholic ("Water", 3, 1, "noAlkoholic", 0.5, 5);
    Drinks *naPtr2 = new NonAlcoholic ("Coca cola", 3, 1, "noAlkoholic", 2, 5);

    vector<Drinks *> myDrinks;
    myDrinks.push_back(aPtr1);
    myDrinks.push_back(aPtr2);

    myDrinks.push_back(naPtr1);
    myDrinks.push_back(naPtr2);


    Orders *oPtr1 = new Orders ( "12.02.1223");
    Orders *oPtr2 = new Orders ( "22.01.2024");

    vector<Orders> myOrders;
    myOrders.push_back(*oPtr1);
    myOrders.push_back(*oPtr2);

    oPtr1->printOrder();


    // проверка колко напитки са продадени от всеки вид

//    for (int i = 0; i < myDrinks.size(); ++i) {
//        Drinks *ptr = dynamic_cast<Alcoholic *>(myDrinks.at(i));
//        int AlcoholicNum = 0;
//        int nonAlcoholic = 0;
//        if (ptr != 0) {
//            AlcoholicNum++;
//            cout << "Alcoholic" << endl;
//        } else {
//            nonAlcoholic++;
//            cout << nonAlcoholic << endl;
//        }
//    }




    return 0;
}
