


#include<iostream>
using namespace std;
class BankAccount
{
   private :
   char HolderName[2];
   long int AccountNumber;
   double balance;
   public :
   void InsertData()
   {
    cout<<"Enter the HolderName : ";
    cin>>HolderName;
    cout<<"Enter the Account Number : ";
    cin>>AccountNumber;
    cout<<"your Balance is ";
    cin>>balance;
   }
   void Deposite(double x)
   {
    
     balance=balance+x;
     cout<<"Your current balnace is "<<balance<<endl;
   }
   void withdraw(double y)
   {
       if(y<=balance)
       {
      balance=balance-y;
       }
       else 
       {
        cout<<"sufficient balance is not availble ";
       }
   } 
   void Display()
   {
      cout<<"Your current balance is : "<<balance<<endl;
   }
};
   int main()
   {
    double depo;
    double draw;
    class BankAccount A[2];
    for(int i=0;i<2;i++)
    {
      A[i].InsertData();
    }
    for(int i=0;i<2;i++)
    {
      cout<<" the deposite Ammount : ";
      cin>>depo;
      A[i].Deposite(depo);
    }
    for(int i=0;i<2;i++)
    {
      cout<<"Enter the withdraw ammout : ";
      cin>>draw;
      A[i].withdraw(draw);
    }
    for(int i=0;i<2;i++)
    {
      A[i].Display();
    }
   }

