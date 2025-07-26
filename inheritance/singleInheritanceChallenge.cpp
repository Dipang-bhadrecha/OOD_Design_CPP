// singleInheritanceChallenge

#include<iostream>
using namespace std;

// base class 
class Vehicle {
public: 
  string brand;
  
  void startEngine() {
    cout << "the engine brand is: " << brand << endl;
  }
};

class Car : public Vehicle {
public:
  string model;
  
  void drive() {
    cout << "car brand is: " << brand << "and the model is: " << model << endl;
  }
};

int main() {
  car car;
  
  car.brand = "ford";
  car.model = "mustang";
  
  car.startEngine();
  car.drive();
  
  return 0;
}
