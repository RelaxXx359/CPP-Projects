#include <iostream>
#include <string>
#include <vector>
#include "FamilyCar.h"
#include "LuxuryCar.h"
#include "Car.h"

using namespace std;

#include "Car.h"


int main() {

    Car *familyCar1 = new FamilyCar("Toyota", "Camry", "Family", "Blue", "4569ASD565", "A1568SF", 15, 150.0);
    Car *familyCar2 = new FamilyCar("VW", "Passat", "Family", "Red", "1536ARS546", "CB5754KH", 10, 200.0);

    Car *luxuryCar1 = new LuxuryCar("Mercedes", "S-Class", "Luxury ", "Black", "213HYG598", "KH1525AA", 20.0, 50.0,
                                    150.0);
    Car *luxuryCar2 = new LuxuryCar("BMW", "7 series", "Luxury", "Silver", "1526QSD968", "BP6958SA", 20.0, 50.0, 100.0);



    int distance1 = 300;
    int distance2 = 600;


    vector<Car *> myCar;
    myCar.push_back(familyCar1);
    myCar.push_back(familyCar2);
    myCar.push_back(luxuryCar1);
    myCar.push_back(luxuryCar2);


    for (int i = 0; i < myCar.size(); ++i) {
        myCar[i]->printCar();
    }






//    string Type;
//    cout << "Insert car: Family / Luxur: \n";
//    cin >> Type;
//
//    if (std::equal(Type.begin(), Type.end(), "Family")) {
//        string Cars;
//        cout << "Car information:\n";
//        cout << "Toyota\", \"Camry\", \"Family\", \"Blue\", \"4569ASD565\", \"A1568SF\", 15, 150.0\n";
//        cout << "VW\", \"Passat\", \"Family\", \"Red\", \"1536ARS546\", \"CB5754KH\", 10, 200.0\n\n";
//        cout << "Choose a brand: Toyota / Passat:\n";
//
//        cin >> Cars;
//
//        double distance;
//
//        if (std::equal(Cars.begin(), Cars.end(), "Toyota")) {
//            cout << "Insert distance (km):\n ";
//            cin >> distance;
//            if (distance < 500) {
//                cout << "\nRent cost for " << distance << ": $" << d * ;
//
//            } else {
//                cout << "\nRent cost for " << distance << ": $";
//            }
//        } else if (std::equal(Cars.begin(), Cars.end(), "VW")) {
//            cout << "Insert distance (km):\n ";
//            cin >> distance;
//            if (distance < 500) {
//                cout << "\nRent cost for " << distance << "(km): $";
//            } else {
//                cout << "\nRent cost for " << distance << "(km): $";
//            }
//        }
//    } else if (std::equal(Type.begin(), Type.end(), "Luxur")) {
//        string Cars;
//        cout << "Car information:\n";
//        cout << "Mercedes\", \"S-Class\", \"Luxury\", \"Black\", \"213HYG598\", \"KH1525AA\", 20, 50, 150\n";
//        cout << "BMW\", \"7 series\", \"Luxury\", \"Silver\", \"1526QSD968\", \"BP6958SA\", 20, 50, 100\n\n";
//        cout << "Choose a brand: Toyota / Passat:\n";
//
//        cin >> Cars;
//        double distance;
//
//        if (std::equal(Cars.begin(), Cars.end(), "Mercedes")) {
//            cout << "Insert distance (km):\n ";
//            cin >> distance;
//            if (distance < 500) {
//                cout << "Rent cost for " << distance << ": $";
//            } else {
//            }
//
//        } else if (std::equal(Cars.begin(), Cars.end(), "BMW")) {
//            cout << "Insert distance (km):\n ";
//            cin >>
//                distance;
//            if (distance < 500) {
//                cout << "\nRent cost for " << distance << ": $";
//
//            } else {
//                cout << "\nRent cost for " << distance << ": $";
//            }
//        }
//    } else {
//        cout << "We don't have that type of car:\n";
//    }
    return 0;
}


