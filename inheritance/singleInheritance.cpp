// singleInheritance

#include<iostream>
using namespace std;

class Person {
public:
  string name;
  int age;
  
  void introduce() {
    cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
  }
};

// Derived Class
class Student : public Person {
public:
  string university;
  
  void study() {
    cout << name << " is studying at " << university << "." << endl;
  }
};

int main() {
    Student s1;
    s1.name = "Knowmad";
    s1.age = 25;
    s1.university = "IIT Delhi";

    s1.introduce();  // comes from Person
    s1.study();      // comes from Student

    return 0;
}
