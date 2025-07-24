// parameterizeEmployee

#include<iostream>
using namespace std;

class Employee {

  private:
    string name;
    string position;
    float salary;
  
  public: 
    // parameterize constructor
    Employee(string n, string p, float s) {
      name = n;
      position = p;
      salary = s;
    }
    
    void printDetails() {
     cout << "The Employee name is: " << name << "and position is: " << position << "and salary is:" << salary << endl; 
    }
};

int main() {

  Employee e1("Dipang", "Software Engineer", 1200000);

  e1.printDetails();
  
  return 0;
  
}
