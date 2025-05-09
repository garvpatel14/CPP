#include<iostream>
#include<string.h>
using namespace std;

class Person {
protected:
    char Name[50];
    int Age;

public:
    Person(const char n[50], int a) {
        strcpy(Name, n);
        Age = a;
    }

    void DisplayData() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

class Employee : public Person {
protected:
    float EmployeeId;

public:
    Employee(const char n[50], int a, float empId) : Person(n, a) {
        EmployeeId = empId;
    }

    void DisplayEmployeeData() {
        DisplayData();
        cout << "Employee ID: " << EmployeeId << endl;
    }
};

class Manager : public Employee {
private:
    char DepartmentName[30];

public:
    Manager(const char n[50], int a, float empId, const char dept[30])
        : Employee(n, a, empId) {
        strcpy(DepartmentName, dept);
    }

    void DisplayManagerData() {
        cout << "Manager Details:" << endl;
        DisplayEmployeeData();
        cout << "Department Name: " << DepartmentName << endl;
    }
};

int main() {
    Manager m("Garv", 20, 101, "Sales");

   
    cout << "Person Details: " << endl;
    m.DisplayData(); 
    cout << endl;

    cout << "Employee Details: " << endl;
    m.DisplayEmployeeData();  
    cout << endl;

    cout << "Manager Details: " << endl;
    m.DisplayManagerData(); 
    return 0;
}
