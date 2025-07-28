#include<iostream>
using namespace std;

// Base Class
class Employee {
public:
    void work() {
        cout << "Working as an employee..." << endl;
    }
};

// Derived Class 1
class Developer : public Employee {
public:
    void code() {
        cout << "Writing code..." << endl;
    }
};

// Derived Class 2
class Manager : public Employee {
public:
    void manage() {
        cout << "Managing team..." << endl;
    }
};

int main() {
    Developer d1;
    Manager m1;

    d1.work();   // from Employee
    d1.code();   // from Developer

    m1.work();   // from Employee
    m1.manage(); // from Manager

    return 0;
}

