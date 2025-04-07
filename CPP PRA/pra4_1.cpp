#include <iostream>
using namespace std;

class shape {
private:
    float Radius;
public:
    void InsertRadius() {
        cout<<"enter radius";
        cin >> Radius;
    }

    float Getr() {
        return Radius;
    }
};

class circle : private shape {
private:
    float Area;
public:
    void CalculateArea() {
        float R = Getr();
        Area = 3.14 * R * R;
    }

    void DisplayArea() {
        cout << Area << endl;
    }

    void InsertRadius() {
        shape::InsertRadius();
    }
};

int main() {
    circle c;
    c.InsertRadius();
    c.CalculateArea();
    c.DisplayArea();
    return 0;
}
