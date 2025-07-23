#include<iostream>
using namespace std;

class product {
  
  public:
    string name;
    float price;
    int quantity;
    
    void printInvoice() {
    float total = price * quantity;
    
      cout<< "Product: " << name << "| Price: ₹" << price << "| Quantity: " << quantity << "| Total: " << total << endl;
    }
    
    void applyDiscount(float percentage) {
      price = price - (price * percentage / 100);
    }
};

int main() {
  
  product p1, p2;
  
  p1.name = "Laptop";
  p1.price = 54999.99;
  p1.quantity = 2;
  
  p2.name = "Mouse";
  p2.price = 499.5;
  p2.quantity = 4;
  
  p1.applyDiscount(20);
  p1.printInvoice();
  
  p2.applyDiscount(10);
  p2.printInvoice();
 
  return 0;

}
