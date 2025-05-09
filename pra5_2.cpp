#include<iostream>
using namespace std;

class Complex
{
float Real,Imagenary;
public:
void InsertData()
{
    cout<<"enter real number"<<endl;
    cin>>Real;
    cout<<"enter Imagenary number"<<endl;
    cin>>Imagenary;
}
void DisplayData()
{
    cout<<Real;
    if(Imagenary>=0)
    {
        cout<<"+";
    }
    cout<<Imagenary<<"i"<<endl;
}
Complex operator+(Complex &x)
{

    Complex t;
    t.Real=Real+x.Real;
    t.Imagenary=Imagenary+x.Imagenary;
    return t;
}

Complex operator-(Complex &y)
{

    Complex t;
    t.Real=Real-y.Real;
    t.Imagenary=Imagenary-y.Imagenary;
    return t;
}
};


int main()

{
    Complex c1,c2,c3,c4;
    c1.InsertData();
    c2.InsertData();
    c3=c1+c2;
    c4=c1-c2;
    c3.DisplayData();
    c4.DisplayData();
}
