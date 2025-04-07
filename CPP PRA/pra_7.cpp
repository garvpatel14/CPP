#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class LoanAccount {
private:
    int LoanId;
    float LoanAmount;
    float InterestRate;
    float LoanTime;
    string ApplicantName;
    float Emi;

    void CalculateEmi() {
        float monthlyRate = InterestRate / 100 / 12;
        Emi = (LoanAmount * monthlyRate * pow(1 + monthlyRate, LoanTime)) / (pow(1 + monthlyRate, LoanTime) - 1);
    }

public:
    void AddDetail() {
        cout << "Enter Loan ID: ";
        cin >> LoanId;
        cout << "Enter Applicant Name: ";
        cin.ignore();
        getline(cin, ApplicantName);
        cout << "Enter Loan Amount: ";
        cin >> LoanAmount;
        cout << "Enter Interest Rate: ";
        cin >> InterestRate;
        cout << "Enter Loan Time (in months): ";
        cin >> LoanTime;
        CalculateEmi();
    }

    void DisplayDetail() {
        cout << "Loan ID: " << LoanId << endl;
        cout << "Applicant Name: " << ApplicantName << endl;
        cout << "Loan Amount: " << LoanAmount << endl;
        cout << "Interest Rate: " << InterestRate << endl;
        cout << "Loan Time (Months): " << LoanTime << endl;
        cout << "EMI: " << Emi << endl;
    }
};

int main() {
    int numberOfEmployees;

    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    LoanAccount employees[numberOfEmployees];

    for (int i = 0; i < numberOfEmployees; i++) {
        cout << "Enter details for Employee " << i + 1 << endl;
        employees[i].AddDetail();
    }

    cout << "\nDisplaying Loan Details of All Employees: " << endl;
    for (int i = 0; i < numberOfEmployees; i++) {
        employees[i].DisplayDetail();
    }

    return 0;
}
