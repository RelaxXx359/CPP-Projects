#include <iostream>
#include "Alcoholic.h"
#include "NoAlcoholic.h"
#include <string>
#include <vector>
#include "Orders.h"
#include "User.h"

using namespace std;

int main() {

//    Alcoholic alc("Jim Beam", 15, 1, "whiskey", 39, 20);
//    NoAlcoholic noAlc("Coca cola", 3, 1, "noAlkoholic",2, 5);
//    alc.calculatePrice();
//    noAlc.calculatePrice();

    Drinks *aPtr1 = new Alcoholic("Jim Beam", 15, 1, "whiskey", 39, 20);
    Drinks *aPtr2 = new Alcoholic("Jack Daniels", 35, 1, "whiskey", 39, 20);

    Drinks *naPtr1 = new NoAlcoholic("Coca cola", 3, 1, "noAlkoholic", 2, 5);
    Drinks *naPtr2 = new NoAlcoholic("Coca cola", 3, 1, "noAlkoholic", 2, 5);

    vector<Drinks *> myDrinks;
    myDrinks.push_back(aPtr1);
    myDrinks.push_back(aPtr2);

    myDrinks.push_back(naPtr1);
    myDrinks.push_back(naPtr2);


    Orders *oPtr1 = new Orders ("coca cola", "12.02.1223", 30);
    Orders *oPtr2 = new Orders ("vodka", "22.01.2024", 15);
    vector<Orders> myOrders;
    myOrders.push_back(*oPtr1);
    myOrders.push_back(*oPtr2);

    User *uPtr = new User("Stefan", myDrinks);
    User *uPtr2 = new User("Petar", myDrinks);
    vector<User> myUser;
    myUser.push_back(*uPtr);
    myUser.push_back(*uPtr2);

    // проверка колко напитки са продадени от всеки вид
    int drinkNum = 0;
    for (int i = 0; i < myDrinks.size(); ++i) {
        cout <<"How many drinks were sold" << endl;
        drinkNum++;
    }
    cout << drinkNum << endl;

    // проверка за най добър клиент

//    for (int i = 0; i < my; ++i) {
//
//    }




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

//    oPtr->printOrder();
//    oPtr2->printOrder();


    //User *uPtr = new User ("user name", orders);




    return 0;
}
