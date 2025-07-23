#include<iostream>
using namespace std;

class student {

  public:
    string name;
    int age;
    
    void introduce() {
      cout << "Hi I'm " << name << "and I'm " << age << "years old."<< endl;
    }
};

int main() {

  student student1, student2;
  
  student1.name = "Knowmad";
  student2.name = "Nivana";
  
  student1.age = 25;
  student2.age = 26;
  
  student1.introduce();
  student2.introduce();
  
  return 0;
  
}




