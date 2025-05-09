#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) 
    {
      this->x=x;
      this->y=y;
    }

    
    Point operator+( Point& p) {
        return Point(x + p.x, y + p.y);
    }

    
    Point operator-(Point& p)
     {
        return Point(-x, -y);
    }
     operator==(const Point& p) {
        return x == p.x && y == p.y;
    }

    void display() {
        cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    Point p1(2, 3), p2(4, -1), result;

    cout << "Initial Points:\n";
    p1.display();
    p2.display();

    result = p1 + p2;
    cout << "\nAfter addition: ";
    result.display();
    result -=result;
    cout << "After negation: ";
    result.display();

    cout << "\nChecking if p1 == p2: ";
    cout << (p1 == p2 ? "Yes" : "No") << endl;

    return 0;
}
