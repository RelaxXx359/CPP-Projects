#include "Shop.h"
#include "memory"
#include <map>

Shop::Shop(vector<User *> users) : users_(users) {}


void Shop::soldDrinks() {
    map<string, int> soldProducts;
    // колко напитки са продадени
//    int drinkNum = 0;
//    for (int i = 0; i < users_.size(); ++i) {
//        cout <<"How many drinks were sold" << endl;
//        drinkNum++;
//    }
//    cout << drinkNum << endl;

    int soldAlcoholic = 0;
    int nonAlcoholic = 0;
    for (int i = 0; i < users_.size(); ++i) {
        auto userOrders = users_[i]->getOrders();
        for (auto order: userOrders) {
            auto userDrinks = order->getDrinks();
            for (auto drink: userDrinks) {
                Alcoholic *alcoholic = dynamic_cast<Alcoholic *>(drink);
                if (alcoholic) {
                    soldAlcoholic++;
                } else {
                    nonAlcoholic++;
                }
                soldProducts[drink->getName()]++;
            }
        }
    }


}
void Shop::bestClient() {

    // проверка за най добър клиент
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

    double bestPrice = 0;
    double currentPrice = 0;
    User *bestUser = {};
    //Цикъл, който обикаля колекция от потребители и за всеки потребител изчислява общите им разходи,
    // чрез сумиране на цените на техните поръчки.
    for (auto user: users_) {
        //user->getOrders(): Това връща колекция (например, вектор или списък) от поръчки, свързани с текущия потребител.
        //for (auto order : user->getOrders()): Това е цикъл от база на обхождане,
        // който минава през всяка поръчка в колекцията, върната от user->getOrders().
        for (auto order: user->getOrders()) {
            //currPrice += order->calculateTotalPrice();: За всяка поръчка този ред извиква метода calculateTotalPrice()
            // (предполагайки, че такъв метод съществува във вашия клас Order), за да получи цената на тази конкретна
            // поръчка и добавя тази стойност към променливата currPrice. Това ефективно събира общата цена за всички
            // поръчки, свързани с потребителя.
            currentPrice += order->calculateTotalPrice();
        }
        // ако текущата цена е по голяма от bestPrice, добавяме новата цена
        if (currentPrice > bestPrice) {
            bestUser = user;
            bestPrice = currentPrice;
        }
        // освобождаване на паметта
        currentPrice = 0;
    }
    cout << "Best client is: " << bestUser->getUsername() << " He has spent: " << bestPrice << " with orders: "
         << std::endl;
    bestUser->printOrder();
}

void Shop::allClients(string type) {
    for (auto user : users_) {
        for (auto order : user->getOrders()) {
            for (auto drink : order->getDrinks()) {
                if (type == drink->getType()) {
                    std::cout << user->getUsername() << std::endl;
                    drink->print();
                }
            }
        }
    }
    std::cout << std::endl;
}

void Shop::top10Client(string type, double price) {
    for (auto user : users_) {
        for (auto order : user->getOrders()) {
            for (auto drink : order->getDrinks()) {
                if (type == drink->getType()) {
                    std::cout << user->getUsername() << std::endl;
                    drink->print();
                }
            }
        }
    }
}
