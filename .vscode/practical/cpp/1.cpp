#include<iostream>
#include<string.h>
using namespace std;
class student
{
int id;
char name[25];
int m1,m2,m3;
float per;
static int c;
public:
student(){
    c++;
    cout<<"hi";
    id=0;
    strcpy(name,"");
    m1=0;
    m2=0;           
    m3=0;
    per=0;
}
void set(int I,char N[],int M1,int M2,int M3)
{
    id=I;
    strcpy(name,N);
    m1=M1;
    m2=M2;
    m3=M3;
    calper();

}

void calper()
{
    per=(m1+m2+m3)/3;

}
void get()
{
    cout<<id<<name<<m1<<m2<<m3<<per;
}
};
int student::c=0;
int main()
{
    student s;
    s.get();
    student g;
    g.get();

}