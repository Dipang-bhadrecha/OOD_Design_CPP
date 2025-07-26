// mixedConceptBankAccount

/*
 1.Accept user input for:

    Name (string)

    Password (string)

    Initial deposit (float)

 2.Store all data privately.

 3.Constructor should take input & display welcome message.

 4.Have public functions to:

    Deposit money

    Withdraw money (with balance check)

    Display account details (name & current balance)

 5.Count how many accounts are created using static variable.
*/

#include<iostream>
using namespace std;

class BankAccount {
  // store all data privately
  private:
    string name;
    string password;
    float balance;
    
    static int accountCount;
    
  public: 
  BankAccount(string n, string p, float id) {
    name = n;
    password = p;
    balance = id;
    accountCount++;
    
    cout << "Welcome, " << name << "! Your account has been created.\n";
  }
  
  void depositeMoney(float amount) {
    balance += amount;
    cout << "Deposited ₹" << amount << ". New balance: ₹" << balance << "\n"; 
  }
  
  void withdrawMoney(float amount) {
    if(amount > balance) {
      cout << "Insufficient Balance!\n";
    } else {
      balance -= amount;
      cout << "Withdrew ₹" << amount << ". New balance: ₹" << balance << "\n";
    }
  }
  void displayAccountDetails() {
    cout << "Account Holder: " << name << ", Balance: ₹" << balance << "\n";
  }  
  
  static void showAccountCount() {
    cout << "Total accounts created: " << accountCount << "\n";
  }
};

int BankAccount::accountCount = 0;

int main() {
    string uname, pass;
    float deposit;

    cout << "Enter your name: ";
    cin >> uname;
    cout << "Set a password: ";
    cin >> pass;
    cout << "Enter initial deposit: ₹";
    cin >> deposit;

    BankAccount user1(uname, pass, deposit);

    user1.depositeMoney(5000);
    user1.withdrawMoney(2000);
    user1.displayAccountDetails();

    BankAccount::showAccountCount();

    return 0;
}
