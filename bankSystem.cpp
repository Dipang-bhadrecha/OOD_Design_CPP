#include<iostream>
using namespace std;

class BankAccount {
private:
    string username;
    string password;
    float balance;

public:
    void createAccount(string user, string pass, float initialBalance) {
        username = user;
        password = pass;
        balance = initialBalance;
        cout << "✅ Account successfully created!\n\n";
    }

    bool login(string user, string pass) {
        if (user == username && pass == password) {
            cout << "🔐 Login successful!\n";
            return true;
        } else {
            cout << "❌ Login failed. Invalid credentials.\n";
            return false;
        }
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "✅ ₹" << amount << " deposited successfully.\n";
        } else {
            cout << "❌ Invalid deposit amount.\n";
        }
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "❌ Insufficient balance. Cannot withdraw ₹" << amount << ".\n";
        } else if (amount <= 0) {
            cout << "❌ Invalid withdrawal amount.\n";
        } else {
            balance -= amount;
            cout << "✅ ₹" << amount << " withdrawn successfully.\n";
        }
    }

    void checkBalance() {
        cout << "💰 Current Balance: ₹" << balance << "\n";
    }
};

int main() {
    BankAccount acc;
    string user, pass;
    float initialBalance;

    cout << "🎯 Create a new bank account\n";
    cout << "Enter username: ";
    cin >> user;

    cout << "Enter password: ";
    cin >> pass;

    cout << "Enter initial balance: ₹";
    cin >> initialBalance;

    acc.createAccount(user, pass, initialBalance);

    // Login
    cout << "\n🔐 Login to your account\n";
    string loginUser, loginPass;

    cout << "Username: ";
    cin >> loginUser;

    cout << "Password: ";
    cin >> loginPass;

    if (acc.login(loginUser, loginPass)) {
        int choice;
        do {
            cout << "\n======🏦 BANK MENU======\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Check Balance\n";
            cout << "4. Exit\n";
            cout << "Choose an option: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    float amount;
                    cout << "Enter amount to deposit: ₹";
                    cin >> amount;
                    acc.deposit(amount);
                    break;
                }
                case 2: {
                    float amount;
                    cout << "Enter amount to withdraw: ₹";
                    cin >> amount;
                    acc.withdraw(amount);
                    break;
                }
                case 3:
                    acc.checkBalance();
                    break;
                case 4:
                    cout << "👋 Exiting. Thank you!\n";
                    break;
                default:
                    cout << "❌ Invalid option.\n";
            }

        } while (choice != 4);
    }

    return 0;
}

