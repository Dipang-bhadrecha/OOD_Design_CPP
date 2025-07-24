// overloadingConstructor

#include<iostream>
using namespace std;

class User {
  string name;
  string email;
  int age;

public: 
 // Constructor 1: No parameters
 User() {
  name = "knowmad";
  email = "abc@gmail.com";
  age = 2;
 }
 
 User(string n) {
  name = n;
  email = "aaa@gmail.com";
  age = 2;
}

User(string n, string e, int a) {
  name = n;
  email = e;
  age = a;
}

void showUser() {
  cout << "👤 Name: " << name << " | Email: " << email << " | Age: " << age << endl;
}

};

int main() {
    User u1;  // No data
    User u2("Knowmad");  // Only name
    User u3("Knowmad", "knowmad@example.com", 25);  // Full data

    u1.showUser();
    u2.showUser();
    u3.showUser();

    return 0;
}
