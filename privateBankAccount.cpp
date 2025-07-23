#include<iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;   // PRIVATE: can't access directly from outside
    float balance;          // PRIVATE: can't access directly from outside

public:
    // This public method gives indirect access to set private values
    void setDetails(string name, float initialBalance) {
        accountHolder = name;
        balance = initialBalance;
        cout << "Account created for: " << accountHolder << " with ₹" << balance << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited ₹" << amount << " to " << accountHolder << "'s account." << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew ₹" << amount << " from " << accountHolder << "'s account." << endl;
        } else {
            cout << "Insufficient balance for withdrawal in " << accountHolder << "'s account." << endl;
        }
    }

    void printBalance() {
        cout << accountHolder << "'s current balance is ₹" << balance << endl;
    }
};

int main() {
    BankAccount acc1;

    acc1.setDetails("Knowmad", 10000); // ✅ initializing via method (not directly)
    acc1.deposit(2000);                // ✅ deposit to private balance
    acc1.withdraw(500);               // ✅ withdraw with balance check
    acc1.printBalance();              // ✅ view balance safely

    // ❌ Direct access to private members is not allowed:
    // acc1.balance = 5000;         // ❌ This will cause a compile-time error
    // cout << acc1.balance;        // ❌ Not allowed

    return 0;
}

