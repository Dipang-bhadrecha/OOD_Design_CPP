#include<iostream>
using namespace std;

class Employee {
protected:
    string name;
public:
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
    // 🧠 Here's the super constructor call
    Manager(string n, int t) : Employee(n) {
        teamSize = t;
        cout << "Manager constructor called\n";
    }

    void showDetails() {
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager m1("Knowmad", 5);
    m1.display();       // From Employee
    m1.showDetails();   // From Manager
    return 0;
}

