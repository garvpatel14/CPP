#include<iostream>
using namespace std;
class super_digit
{
    public:
    int CalculateSumofDigit(string n)
    {
        int sum=0;
        for(char digit:n)
        {
            sum+=digit-'0';
        }
        return sum;
    }
    int CalculateSuperDigitofNumber(string n,int k)
    {
        long long initial_sum=(long long)CalculateSumofDigit(n)*k;
        if(initial_sum<10)
        {
            return initial_sum;
        }
        else
        {
            return CalculateSuperDigitofNumber(to_string(initial_sum),1);
        }
    }
};
int main()
{
    string n;
    int k;
    cout<<"Enter the Number as a string: ";
    cin>>n;
    cout<<"Enter the Number of times you want to repeat the number : ";
    cin>>k;
    super_digit s;
    cout<<"The Super Digit of "<<n<<" is : "<<s.CalculateSuperDigitofNumber(n,k)<<endl;
    return 0;
}