#include<iostream>
using namespace std;

class Employee {
protected:
    string name;

public:
    // Constructor
    Employee(string n) {
        name = n;
        cout << "Employee constructor called\n";
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    // Constructor calls base class constructor using :
    Manager(string n, int t) : Employee(n) {
        teamSize = t;
        cout << "Manager constructor called\n";
    }

    void showDetails() {
        cout << "Manager: " << name << ", Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager m1("Knowmad", 5);
    m1.display();      // From base class
    m1.showDetails();  // From derived class

    return 0;
}

