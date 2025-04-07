#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string EmployeeName;
    double BasicSalary;
    double Bonus;

    Employee(string employeename, double basicSalary, double bonus = 500) {
        EmployeeName = employeename;
        BasicSalary = basicSalary;
        Bonus = bonus;
    }

    double calculateTotalSalary() {
        return BasicSalary + Bonus;
    }
};

int main() {
    Employee employee1("Garv", 3000);
    Employee employee2("Prince", 4000, 1000);

    cout << "Total Salary of " << employee1.EmployeeName << ": " << employee1.calculateTotalSalary() << endl;
    cout << "Total Salary of " << employee2.EmployeeName << ": " << employee2.calculateTotalSalary() << endl;

    return 0;
}
