#include<iostream>
#include<string.h>
using namespace std;
class student
{
int StudentId,Mark1,Mark2,Mark3;
char StudentName[30];
float Avarage;
static int count;

public:
int AddData(int studentId,char studentName[30],int mark1,int mark2,int mark3)
{
    StudentId = studentId;
        strcpy(StudentName,studentName); 
        Mark1 = mark1;
        Mark2 = mark2;
        Mark3 = mark3;
}

int Calculate_Avarage()
{
    Avarage=(Mark1+Mark2+Mark3)/3.0;
    }
void DisplayData()
{
    cout<<"Student Name "<<StudentName<<endl;
    cout<<"subject 1"<<Mark1<<endl;
    cout<<"subject 2"<<Mark2<<endl;
    cout<<"subject 3"<<Mark3<<endl;
}

};



int main()
{ 
student s[3];
s[0].AddData(1,"Garv",90,89,88);
s[1].AddData(2,"Prince",90,89,88);
s[2].AddData(3,"krish",90,89,88);
 for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " Details:" << endl;
        s[i].DisplayData();
        cout << endl;
 }
 return 0;
}