// Function Overloading

#include<iostream>
using namespace std;

class Calculator {
public:
  int add(int a, int b) {
    return a+b;
  }
  
  double add(double a, double b) {
    return a+b;
  }
  
  int add(int a, int b, int c) {
    return a+b+c;
  }
};

int main() {
  Calculator calc;
  
  cout << calc.add(2, 3) << endl;         // int version
    cout << calc.add(2.5, 4.3) << endl;     // double version
    cout << calc.add(1, 2, 3) << endl;      // 3-parameter version

    return 0;
}
