// overloading product challange

#include<iostream>
using namespace std;

class Product {

    string name;
    float price;
    string category;
    
  // constructor - no argument   
  Product() {
    name = "abc";
    price = 5665;
    category = "category";
  }
  
  // constructor - one argument 
  Product(string n) {
    name = n;
    price = 56565;
    category = "category";
  }
  
  // constructor - take all three arguments
  Product(string n, float p, string c) {
    name n;
    price p;
    category c;
  }
    
  void showInfo() {
    cout << "Name: " << name << "price: " << price << "category: " << category << endl;
  }   
};

int main() {
  Product p1(name, price, category) = ("Knowmad", 454, "category1");
  
  return 0;
}
