#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    int accountNumber;
    string accountHolderName;
    double balance;

    Account(int accountNumber, string accountHolderName, double balance = 0.0) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ". New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void transfer(Account &recevingAccount, double amount) {
        if (amount <= balance) {
            balance -= amount;
            recevingAccount.balance += amount;
            cout << "Transferred: " << amount << " to " << recevingAccount.accountHolderName << "."<<endl;
        } else {
            cout << "Insufficient funds for transfer." << endl;
        }
    }
};

int main() {
    Account Garv(1001, "Garv", 500);
    Account Prince(1002, "Prince", 300);

    int choice;
    double amount;
    int depositChoice, withdrawChoice;

    do {
        cout << "\nSelect an operation:"<<endl;
        cout << "1. Deposit"<<endl;
        cout << "2. Withdraw"<<endl;
        cout << "3. Transfer (Garv to Prince)"<<endl;
        cout << "4. Transfer (Prince to Garv)"<<endl;
        cout << "5. Show Balances (Garv)"<<endl;
        cout << "6. Show Balances (Prince)"<<endl;
        cout << "7. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Select the account to deposit to:"<<endl;
                cout << "1. Garv's Account"<<endl;
                cout << "2. Prince's Account"<<endl;
                cout << "Enter your choice: ";
                cin >> depositChoice;
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (depositChoice == 1) {
                    Garv.deposit(amount);
                } else if (depositChoice == 2) {
                    Prince.deposit(amount);
                } else {
                    cout << "Invalid choice."<<endl;
                }
                break;
            case 2:
                cout << "Select the account to withdraw from:"<<endl;
                cout << "1. Garv's Account"<<endl;
                cout << "2. Prince's Account"<<endl;
                cout << "Enter your choice: ";
                cin >> withdrawChoice;
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (withdrawChoice == 1) {
                    Garv.withdraw(amount);
                } else if (withdrawChoice == 2) {
                    Prince.withdraw(amount);
                } else {
                    cout << "Invalid choice."<<endl;
                }
                break;
            case 3:
                cout << "Enter amount Garv wants to transfer to Prince: ";
                cin >> amount;
                Garv.transfer(Prince, amount);
                break;
            case 4:
                cout << "Enter amount Prince wants to transfer to Garv: ";
                cin >> amount;
                Prince.transfer(Garv, amount);
                break;
            case 5:
                cout << "\nGarv's balance: " << Garv.balance << endl;
                break;
            case 6:
                cout << "Prince's balance: " << Prince.balance << endl;
                break;
            case 7:
                cout << "Exiting the system."<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again."<<endl;
        }
    } while (choice != 7);

    return 0;
}
