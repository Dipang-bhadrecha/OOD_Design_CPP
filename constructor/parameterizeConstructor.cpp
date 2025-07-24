// parameterized Constructor

#include<iostream>
using namespace std;

class Book {
private:
  string title;
  int pages;
  
public:
  // Parameterize constructor
  Book(string t, int p) {
    title = t;
    pages = p;
  }
  
  void showDetails() {
    cout << "Book Title: " << title << ", pages: " << pages << endl;
  }
};

int main() {
  
  // Object created and initialized in one line 
  Book b1("The Alchemist", 197);
  Book b2("Clean Code", 464);
  
  b1.showDetails();
  b2.showDetails();
  
  return 0;
  
}
