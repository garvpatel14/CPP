#include<iostream>
#include<math.h>
using namespace std;
class LoanAccount
{
private:
int LoanId;
float LoanAmount;
float InterestRate;
float LoanTime;
char AppicantName[25];
float Emi;
void CalculateEmi(){
float monthlyRate = InterestRate / 100 / 12;
Emi=(LoanAmount * monthlyRate * pow(1 + monthlyRate, LoanTime)) / (pow(1 + monthlyRate, LoanTime) - 1);
}


public:
void AddDetail()
{
    cout<<"enter loan id: "<<endl;
    cin>>LoanId;
    cout<<"enter appicant name: "<<endl;
    cin>>AppicantName;
    cout<<"enter loan amount: "<<endl;
    cin>>LoanAmount;
    cout<<"enter interestrate: "<<endl;
    cin>>InterestRate;
    cout<<"enter loan time: "<<endl;
    cin>>LoanTime;
    CalculateEmi(); 
}

     void DisplayDetail()
{
  cout<<"loanid: "<<LoanId<<endl;
  cout<<"AppicantName: "<<AppicantName<<endl;
  cout<<"loanAmount: "<<LoanAmount<<endl;
  cout<<"InterestRate: "<<InterestRate<<endl;
  cout<<"loanTime: "<<LoanTime<<endl;
  cout<<"Emi: "<<Emi<<endl;
}
};

int main()
{
    LoanAccount A;
    A.AddDetail();
    A.DisplayDetail();
}