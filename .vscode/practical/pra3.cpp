#include <iostream>
using namespace std;

class PlotData
{

int Length,Width,Area,Parimeter;

public:
void AddData()
{
    cout<<"enter Length and Width";
    cin>>Length>>Width;
    Area=Length*Width;
    Parimeter=2*(Length+Width);
}

void UpdateData()
{
    cin>>Length>>Width;
    Area=Length*Width;
    Parimeter=2*(Length*Width);
}

int DisplayData()
{
    cout<<"the area is:"<<Area;
    cout<<"\nthe parimeter is:"<<Parimeter;
}
};

int main()
{
PlotData P[25];int PlotNumber;int p;

int Choice,c=0,Next;
Next: cout<< "Enter 1 For AddData , 2 For UpdateData, 3 For DisplayData\n";
cout<<"enter the choice:\n";
cin>>Choice;
switch(Choice) 
{
case 1: 
{P[c].AddData();
c++;
break;
}
case 2:
{cin>>PlotNumber;
if(PlotNumber<=c)
{
P[PlotNumber-1].UpdateData();
}
else
cout<<"the total plot is:"<<c;
}
case 3:
 {for (int i = 0; i < c; i++)
  {
    P[i].DisplayData();
  }
  break;
 }
default:
goto E;
break;
}
goto Next;
E :return 0;

}