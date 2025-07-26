#include<iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;

    void startEngine() {
        cout << brand << " engine started." << endl;
    }
};

// Derived class from Vehicle
class Car : public Vehicle {
public:
    string model;

    void drive() {
        cout << "Driving " << brand << " " << model << endl;
    }
};

// Derived class from Car
class ElectricCar : public Car {
public:
    int batteryLife;

    void chargeBattery() {
        cout << "Charging " << brand << " " << model << ". Battery: " << batteryLife << "%\n";
    }
};

int main() {
    ElectricCar tesla;

    tesla.brand = "Tesla";
    tesla.model = "Model S";
    tesla.batteryLife = 85;

    tesla.startEngine();     // from Vehicle
    tesla.drive();           // from Car
    tesla.chargeBattery();   // from ElectricCar

    return 0;
}

