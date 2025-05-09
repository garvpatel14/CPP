#include <iostream>
using namespace std;

class Shape {
public:
    virtual float Area() = 0; 
};


class Rectangle : public Shape {
    float w, l;

public:
    void GetData() {
        cout << "Enter the value of width (w): ";
        cin >> w;
        cout << "Enter the value of length (l): ";
        cin >> l;
        cout << endl;
    }

    float Area() {
        float a = l * w;
        cout << "Area of Rectangle: " << a << endl;
        return a;
    }
};

class Circle : public Shape {
    float r;

public:
    void GetData() {
        cout << "Enter the value of radius (r): ";
        cin >> r;
        cout << endl;
    }

    float Area() {
        float a = 3.14 * r * r;
        cout << "Area of Circle: " << a << endl;
        return a;
    }
};

int main() {
    Rectangle rect;
    Circle cir;

    rect.GetData();
    cir.GetData();

    Shape* shape;

    shape = &rect;
    shape->Area();

    shape = &cir;
    shape->Area();

    return 0;
}
