// classes and objects in c++

#include<iostream>
using namespace std;

class car {
  public:
    string brand;
    int speed;
    
    void drive() {
      cout << "Driving" << brand << "at sped" << speed << "km/h" <<  endl;
    }
};

int main() {
  car car1;
  car1.brand = "tesla";
  car1.speed = 120;
  
  car1.drive();
  
  return 0;

}


