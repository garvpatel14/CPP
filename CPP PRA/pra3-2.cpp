#include<iostream>
using namespace std;

class Arr
{
public:
int Calculatesum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[0] + Calculatesum(arr + 1, size - 1);
}
};
int main()
{   Arr A;
    int size;
    cout<<"enter  size";
    cin>>size;
    int arr[size];
    cout<<"enter the element of array";
    for(int i=0;i<size;i++)
    {
    
        cin>>arr[i];
    }

    int sum=A.Calculatesum(arr,size);
    cout<<sum;
}