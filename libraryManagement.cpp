#include <iostream> 
#include <vector> // this is import of vector library 
using namespace std;

class Book { // class book is define with {}; within scope
public: // define public so it can be accessed all over
  
    // this is variable define for the public class
    int bookID; 
    string title;
    string author;
    bool issued;
  
    // what is this i dont know can you explain this 
    Book(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
        issued = false;
    }

    // this is function of book class where printing a value of variable 
    void display() {
        cout << "Book ID: " << bookID
             << ", Title: " << title
             << ", Author: " << author
             << ", Issued: " << (issued ? "Yes" : "No") << endl;
    }
};


// class library where we run and perform all functionality here
class Library {
// we make it private that means define and access within library class
private:
    vector<Book> books; // define Book vector as a name books

// public method define 
public:
    // the first functionality a public functionality with addBook and it is public define
    void addBook() {
        int id; 
        string title, author; // define id title and author inside this function again why we already define above public in class book we can access from there
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore(); // what is ignore method and where it comes form any library or what
        cout << "Enter Book Title: ";
        getline(cin, title); // what is getline method is where it's come form any library or what inbuilt or what 
        cout << "Enter Book Author: ";
        getline(cin, author);
        books.push_back(Book(id, title, author)); //push_back method is form vector library to push this book on vector name book so syntax is book(a vector name).push(a method)(Book(a actual vector)(variable of vector))
        cout << "Book added successfully!\n";
    }
  
  // another public method for define a display book
    void displayAllBooks() {
        if (books.empty()) { // .empty i think vector method to check vector is empty or not 
            cout << "No books in the library.\n";
            return;
        }
        for (Book& book : books) { // looping through a vector to get a books from vector name from vector Book a syntax is Book(a vector define)&(& is addressing a pointer reference or address of vector) book : books (define get a books from vector name book) because we push a book via books.push_back to the Book (actual vector Book) with id, title and author
            book.display(); // function call book.display() but where is this function call and what is an actual mean for this 
        }
    }

// this is issueBook function a publicly define
    void issueBook() {
        int id;
        cout << "Enter Book ID to issue: ";
        cin >> id;
        for (Book& book : books) {
            if (book.bookID == id) {
                if (book.issued) {
                    cout << "Book already issued!\n";
                } else {
                    book.issued = true;
                    cout << "Book issued successfully!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }

  // return book functionality 
    void returnBook() {
        int id;
        cout << "Enter Book ID to return: ";
        cin >> id;
        for (Book& book : books) {
            if (book.bookID == id) {
                if (!book.issued) {
                    cout << "Book was not issued!\n";
                } else {
                    book.issued = false;
                    cout << "Book returned successfully!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }
};

int main() {
    Library library; // create an instance if class with library but what is Library library give me an understanding for this 
    int choice;
  
  // do switch condition is using here
  // in do method print all choice case name 
    do { 
        cout << "\n--- Library Management Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // user input is 1 then function call addBook()
                library.addBook();
                break;
            case 2:
                library.displayAllBooks();
                break;
            case 3:
                library.issueBook();
                break;
            case 4:
                library.returnBook();
                break;
            case 5:
                cout << "Exiting Library System. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}

