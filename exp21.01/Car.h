#ifndef EXP21_01_CAR_H
#define EXP21_01_CAR_H

#include <iostream>
#include <string>

using namespace std;


class Car {
public:
    Car(const string &brand, const string &model, const string &type, const string &color, const string &nShassi,
        const string &numCar, double consumption, double fee, double distance);

    const string &getBrand() const;

    void setBrand(const string &brand);

    const string &getModel() const;

    void setModel(const string &model);

    const string &getType() const;

    void setType(const string &type);

    const string &getColor() const;

    void setColor(const string &color);

    const string &getNShassi() const;

    void setNShassi(const string &nShassi);

    const string &getNumCar() const;

    void setNumCar(const string &numCar);

    double getConsumption() const;

    void setConsumption(double consumption);

    double getFee() const;

    void setFee(double fee);

    double getDistance() const;

    void setDistance(double distance);

    virtual void calculate2(double dis);

private:
    string brand;
    string model;
    string type;
    string color;
    string nShassi;
    string numCar;
    double consumption;
    double fee;
    double distance;

};


#endif //EXP21_01_CAR_H
