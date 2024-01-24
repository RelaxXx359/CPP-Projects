#ifndef ONLINESHOP_SHOP_H
#define ONLINESHOP_SHOP_H

#include "Orders.h"
#include "User.h"
#include <vector>

class Shop {
public:
    Shop(vector<User*>);

    void soldDrinks();
    void bestClient();
    void allClients(string);
    void top10Client(string, double);


private:
    vector<User *> users_;

};


#endif //ONLINESHOP_SHOP_H
