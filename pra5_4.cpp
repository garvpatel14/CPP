#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
    float temperature;
public:
    void InsertData()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
    }

    float GetData()
    {
        return temperature;
    }

    void operator=(Fahrenheit &f);  

    void DisplayData() 
    {
        cout << "Temperature in Celsius: " << temperature  << endl;
    }
};

class Fahrenheit 
{
    float temperature;
public:
    void InsertData() 
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
    }

    float GetData() 
    {
        return temperature;
    }

    void operator=(Celsius &c) 
    {  
        temperature = (9.0 / 5.0) * c.GetData() + 32;
    }

    void DisplayData() 
    {
        cout << "Temperature in Fahrenheit: " << temperature << endl;
    }
};

void Celsius::operator=(Fahrenheit &f) 
{
    temperature = (f.GetData() - 32) * 5.0 / 9.0;
}

int main() {
    Celsius c;
    Fahrenheit f;

    c.InsertData();
    f = c;
    f.DisplayData();

    f.InsertData();
    c = f;
    c.DisplayData();

    return 0;
}
