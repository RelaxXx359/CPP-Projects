#ifndef CARRENTAL_CAR_H
#define CARRENTAL_CAR_H

#include <string>

using namespace std;

class Car {
public:
    Car(string, string, string, string, string, string, double = 0.0);


    string getBrand();
    void setBrand(string brand);

    string getModel();
    void setModel(string model);

    string getType();
    void setType(string type);

    string getColor();
    void setColor(string color);

    string getChassisN();
    void setChassisN(string chassisN);

    string getNumberC();
    void setNumberC(string numCar);

    double getConsumption();
    void setConsumption(double consum);



    void printCar();

private:
    string brand;
    string model;
    string type;
    string color;
    string chassisNumber;
    string numberCar;
    double consumption;
};


#endif //CARRENTAL_CAR_H
