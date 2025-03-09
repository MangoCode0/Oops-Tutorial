#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    // Constructor to initialize account holder's name and balance
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    // Function to check the account balance
    void checkBalance() const {
        cout << "Account holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a bank account with initial balance
    BankAccount myAccount("John Doe", 1000.00);

    // Checking balance
    myAccount.checkBalance();

    // Depositing money
    myAccount.deposit(500.00);

    // Withdrawing money
    myAccount.withdraw(200.00);

    // Checking balance again
    myAccount.checkBalance();

    return 0;
}

