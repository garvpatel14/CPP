#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
    char AccountHolderName[25];
    int AccountNumber;
    double Balance;

    public:
        BankAccount(int accNum, char name[], double initialBalance=0) {
        AccountNumber = accNum;
        strcpy(AccountHolderName, name);  
        Balance = initialBalance;        
    }
void deposit(double amount) {
        if (amount > 0) {
            Balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

 void withdraw(double amount) {
        if (amount > 0 && amount <= Balance) {
            Balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }
 void Display()
 {
    cout<<"Account Holder Name"<<AccountHolderName<<endl;
    cout<<"Account Number"<<AccountNumber<<endl;
    cout<<"Balance"<<Balance<<endl;
 }
};

int main()
{
BankAccount account1(1001, "Garv", 1000);
int Choice;
int x;
double Amount;

do{
        cout << "\n----- Menu -----\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> x;
switch(x)
{
    case 1:
    account1.Display();
    break;
    case 2:
    cout<<"enter amount to deposit";
    cin>>Amount;
     account1.deposit(Amount);
    break;
    case 3:
    cout<<"enter amount to withdraw";
    cin>>Amount;
    account1.withdraw(Amount);
    break;
    case 4:
   cout<< "exit the program"<<endl;
    break;
    default:
    cout<<"invalid choice"<<endl;
    break;
}
}while(x!=4);

return 0;
}