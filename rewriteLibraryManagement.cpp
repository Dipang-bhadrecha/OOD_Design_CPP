#include<iostream>
using namespace std;

class Book {
  public:
    int id;
    string bookName, title, author;
    bool isIssued;
    
    Book() {
        id = 0;
        bookName = "";
        author = "";
        title = "";
        isIssued = false;
    }

    
    
    void addBook() {
        cout << "Enter book ID: ";
        cin >> id;
        cin.ignore(); // To avoid input buffer issues

        cout << "Enter book name: ";
        getline(cin, bookName);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter title: ";
        getline(cin, title);

        isIssued = false; // Newly added book is not issued
    }
};

int main() {
  
  Book b1;
  int choice;
  
  cout << "Library Menu:\n";
  cout << "1. Add Book\n";
  cout << "2. Display Book\n";
  cout << "Enter your choice: ";
  cin >> choice;
  
  switch(choice) {
    case 1:
      b1.addBook();
      break;
    default:
     cout << "You enter a wrong case value" << endl;
  
  return 0;
}
    
      
  
  return 0;
}
