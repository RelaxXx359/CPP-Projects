#include <iostream>
#include "Building.h"
#include "House.h"
#include <vector>
int main() {

    Building bil1 (100, 120.5, "RichHill");

    Building* h1 = new House (100, 120.5, "RichHill", 5, "Georgi Georgiev");

    std::vector<Building*> myvectro;
    myvectro.push_back(h1);
    h1->print();



    return 0;
}
