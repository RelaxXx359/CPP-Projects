//
// Created by Dobrolyub Velinov on 4.1.2024 г.
//

#ifndef EUROGAMESTECHNOLOGY_CAR_H
#define EUROGAMESTECHNOLOGY_CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    Car(string, int, string, string, string, string, string);
    void setModel(string);
    void setYear(int);
    void setColor(string);
    void setFuel(string);
    void setTransmission(string);
    void setPlate(string);
    void setVIN(string);
    void displayMessage();

private:
    string model;
    int year;
    string color;
    string fuel;
    string vin;
    string transmission;
    string plate;
};
#endif //EUROGAMESTECHNOLOGY_CAR_H
