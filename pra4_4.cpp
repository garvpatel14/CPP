#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;
    double lastTransaction;

public:
    BankAccount(int accNo, double initialBal) {
        accountNumber = accNo;
        balance = initialBal;
        lastTransaction = 0.0;
    }

    virtual ~BankAccount() {
        cout << "BankAccount [" << accountNumber << "] is being closed.\n";
    }

    virtual void Deposit(double amount) {
        balance += amount;
        lastTransaction = amount;
        cout << "Deposited: " << amount << "  New Balance: " << balance << endl;
    }

    virtual void Withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            lastTransaction = -amount;
            cout << "Withdrawn: " << amount << "  New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance for withdrawal.\n";
        }
    }

    void UndoLastTransaction() {
        balance -= lastTransaction;
        cout << "Undid Last Transaction: " << lastTransaction
             << "  New Balance: " << balance << endl;
        lastTransaction = 0;
    }

    virtual void DisplayDetails() {
        cout << "Account Number: " << accountNumber
             << " Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, double initialBal, double rate)
        : BankAccount(0, 0)
    {
        accountNumber = accNo;
        balance = initialBal;
        lastTransaction = 0.0;
        interestRate = rate;
    }

    void ApplyInterest() {
        double interest = balance * interestRate / 100;
        Deposit(interest);
        cout << "Applied Interest: " << interest
             << "  New Balance: " << balance << endl;
    }

    void DisplayDetails() {
        BankAccount::DisplayDetails();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNo, double initialBal, double limit)
        : BankAccount(0, 0)
    {
        accountNumber = accNo;
        balance = initialBal;
        lastTransaction = 0.0;
        overdraftLimit = limit;
    }

    void Withdraw(double amount) {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            lastTransaction = -amount;
            cout << "Withdrawn: " << amount
                 << "  New Balance: " << balance << endl;
        } else {
            cout << "Overdraft limit exceeded.\n";
        }
    }

    void DisplayDetails() {
        BankAccount::DisplayDetails();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount savings(1001, 5000, 3.5);
    CurrentAccount current(2001, 3000, 1000);

    cout << "=== Savings Account ===" << endl;
    savings.DisplayDetails();
    savings.Deposit(1000);
    savings.Withdraw(1500);
    savings.ApplyInterest();
    savings.UndoLastTransaction();

    cout << endl;

    cout << "=== Current Account ===" << endl;
    current.DisplayDetails();
    current.Deposit(2000);
    current.Withdraw(4500);
    current.Withdraw(6000);
    current.UndoLastTransaction();

    

    return 0;
}
