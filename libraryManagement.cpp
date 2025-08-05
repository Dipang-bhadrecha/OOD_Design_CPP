#include<iostream>
using namespace std;

class book {
  public:
  int bookID;
  string bookName;
  string title;
  string author;
  bool issued;
  
  Book(int id, string t, string a) {
      bookID = id;
      title = t;
      author = a;
      issued = false;
  }
  
  void display() {
    cout << "Book ID: " << bookID << ", Title: " << title << ", Author: " << author;
    cout << ", Issued: " << (issued ? "Yes" : "No") << endl;
  }
};


int main() {
  switch () {
    
    case addBook:
    break;
  
    case displayAllBook:
    break;
    
    case issueBook:
    break;
    
    case returnBook:
    break;
    
    case exit:
    break;
    
    default:
    cout << "Hello Welcome to the library" << endl;
  }
  
  book b1;
  b1.addBook (bookID, title, author) = {369, meluha, amish}
  b1.displayAllBook (ID, title, author, issuedBook)
  
  cout << "enter your choise " << case << endl;
}
