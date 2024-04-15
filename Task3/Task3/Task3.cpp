#include <iostream>
#include <cstring>
using namespace std;


class BankAccount {
private:
    char clientName[24];
    char accountNumber[16];
    double balance;

public:
    BankAccount(const char* name, const char* accNumber, double initialBalance) {
        strncpy(clientName, name, 23);
        clientName[23] = '\0';
        strncpy(accountNumber, accNumber, 15);
        accountNumber[15] = '\0';
        balance = initialBalance;
    }

    void displayAccount() const {
        cout << "Client name: " << clientName << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        }
        else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
        else {
           cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }
};

int main() {
    BankAccount account("Dimitar Dimov", "123456", 1000.0);
    account.displayAccount();

    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);

    return 0;
}
