#include <iostream>
#include <vector>

// Base class Car
class Car {
public:
    Car(const std::string &brand, const std::string &model, const std::string &type,
        const std::string &color, const std::string &chassisNumber, const std::string &carNumber,
        double fuelConsumption)
            : brand(brand), model(model), type(type), color(color),
              chassisNumber(chassisNumber), carNumber(carNumber), fuelConsumption(fuelConsumption) {}

    virtual double calculateRentalCost(int distance) const = 0;


protected:
    std::string brand;
    std::string model;
    std::string type;
    std::string color;
    std::string chassisNumber;
    std::string carNumber;
    double fuelConsumption;
};

// FamilyCar class derived from Car
class FamilyCar : public Car {
public:
    FamilyCar(const std::string &brand, const std::string &model, const std::string &color,
              const std::string &chassisNumber, const std::string &carNumber, double fuelConsumption,
              double dailyRentalFee)
            : Car(brand, model, "Family", color, chassisNumber, carNumber, fuelConsumption),
              dailyRentalFee(dailyRentalFee) {}

    double calculateRentalCost(int distance) const override {
        double distanceCoefficient = (distance < 500) ? 0.7 : 0.4;
        return dailyRentalFee * distanceCoefficient;
    }

private:
    double dailyRentalFee;
};

// LuxuryCar class derived from Car
class LuxuryCar : public Car {
public:
    LuxuryCar(const std::string &brand, const std::string &model, const std::string &color,
              const std::string &chassisNumber, const std::string &carNumber, double fuelConsumption,
              double dailyRentalFee, double luxuryTax)
            : Car(brand, model, "Luxury", color, chassisNumber, carNumber, fuelConsumption),
              dailyRentalFee(dailyRentalFee), luxuryTax(luxuryTax) {}

    double calculateRentalCost(int distance) const override {
        double distanceCoefficient = (distance < 200) ? 0.6 : 0.4;
        return (dailyRentalFee + luxuryTax) * distanceCoefficient;
    }

private:
    double dailyRentalFee;
    double luxuryTax;
};

int main() {
    // Create instances of FamilyCar and LuxuryCar
    FamilyCar familyCar("Toyota", "Camry", "Blue", "ABC123", "X001", 15.0, 30.0);
    LuxuryCar luxuryCar("Mercedes", "S-Class", "Black", "XYZ789", "L002", 20.0, 50.0, 100.0);

    // Calculate rental costs for different distances
    int distance1 = 300;
    int distance2 = 600;

    std::cout << "Rental cost for FamilyCar (300 km): $" << familyCar.calculateRentalCost(distance1) << std::endl;
    std::cout << "Rental cost for LuxuryCar (300 km): $" << luxuryCar.calculateRentalCost(distance1) << std::endl;

    std::cout << "Rental cost for FamilyCar (600 km): $" << familyCar.calculateRentalCost(distance2) << std::endl;
    std::cout << "RRental cost for LuxuryCar (600 km): $" << familyCar.calculateRentalCost(distance2) << std::endl;
    }