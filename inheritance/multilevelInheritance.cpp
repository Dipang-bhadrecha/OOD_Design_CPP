// multilevelInheritance

#include<iostream>
using namespace std;

// Base class 
class LivingBeing {
public:
  void breathe() {
    cout << "Breathing..." << endl;
  }
};

// Derived from LivingBeing
class Human : public LivingBeing {
public:
  void speak() {
    cout << "Speaking..." << endl;
    }
};


// Derived from human
class Student : public Human {
public:
  void study() {
    cout << "Studying..." << endl;
  }
};

int main() {
  Student s1;
  
  s1.breathe();
  s1.speak();
  s1.study();
  
  return 0;
}
