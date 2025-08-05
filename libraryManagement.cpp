#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int bookID;
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
        cout << "Book ID: " << bookID
             << ", Title: " << title
             << ", Author: " << author
             << ", Issued: " << (issued ? "Yes" : "No") << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook() {
        int id;
        string title, author;
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book Author: ";
        getline(cin, author);
        books.push_back(Book(id, title, author));
        cout << "Book added successfully!\n";
    }

    void displayAllBooks() {
        if (books.empty()) {
            cout << "No books in the library.\n";
            return;
        }
        for (Book& book : books) {
            book.display();
        }
    }

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
    Library library;
    int choice;

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
            case 1:
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

