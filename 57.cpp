#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
   
    BankAccount(string holder, int number, double initialBalance) 
        : accountHolder(holder), accountNumber(number), balance(initialBalance) {
        cout << "Bank account created for " << accountHolder << " with account number " << accountNumber << "." << endl;
    }

    ~BankAccount() {
        cout << "Bank account for " << accountHolder << " is closed." << endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << "." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New balance: " << balance << "." << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    void displayAccountInfo() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 123456, 1000.0);
    
    account.displayAccountInfo();
    account.deposit(500.0);
    account.withdraw(200.0);

    return 0;
}
