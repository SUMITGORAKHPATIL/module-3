#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   

public:
    
    BankAccount(double initialBalance = 0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            cout << "Invalid initial balance! Setting to 0." << endl;
            balance = 0;
        }
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance for withdrawal!" << endl;
        }
    }

    
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000);  

    account.displayBalance();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500); 
    account.displayBalance();

    return 0;
}
