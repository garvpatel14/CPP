#include<iostream>
using namespace std;

class Calculator
{
int x,y;
float a,b;
public:
void Add(int p,int q)
{
    cout<<"int + int ="<<p+q<<endl;
}
void Add(float p,int q)
{
    cout<<"float + int ="<<p+q<<endl;
}void Add(int p,float q)
{
    cout<<"int + float ="<<p+q<<endl;
}void Add(float p,float q)
{
    cout<<"float + float ="<<p+q<<endl;
}
};

int main()
{
Calculator Cal;

int choice;
cout << "Select input type:"<<endl;
cout << "1. int + int"<<endl;
cout << "2. float + int"<<endl;
cout << "3. int + float"<<endl;
cout << "4. float + float"<<endl;
cout << "Enter choice (1-4): ";
cin >> choice;

if (choice == 1) {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    Cal.Add(a, b);
}
else if (choice == 2) {
    float a, b;
    cout << "Enter two floats: ";
    cin >> a >> b;
    Cal.Add(a, b);
}
else if (choice == 3) {
    int a;
    float b;
    cout << "Enter an int and a float: ";
    cin >> a >> b;
    Cal.Add(a, b);
}
else if (choice == 4) {
    float a;
    int b;
    cout << "Enter a float and an int: ";
    cin >> a >> b;
    Cal.Add(a, b);
}
else {
    cout << "Invalid choice!" << endl;
}

return 0;

}