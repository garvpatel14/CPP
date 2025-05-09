#include <iostream>
using namespace std;

class Point {
private:
    float x, y;

public:
    Point(float xCoord = 0, float yCoord = 0) : x(xCoord), y(yCoord) {}

    Point* moveBy(float dx, float dy) {
        x += dx;
        y += dy;
        return this;
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    Point* marker = new Point(5.0f, 10.0f);

    std::cout << "Initial position: ";
    marker->print();

    marker->moveBy(3.0f, -2.0f)->moveBy(-1.0f, 4.5f);

    std::cout << "After moving: ";
    marker->print();

    delete marker;
    return 0;
}
