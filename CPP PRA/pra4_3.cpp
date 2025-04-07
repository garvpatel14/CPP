#include <iostream>
using namespace std;

class FuelType {
protected:
    string fuel;

public:
    FuelType(string f) {
        fuel = f;
    }

    void showFuel() {
        cout << "Fuel Type: " << fuel << endl;
    }
};

class Brand {
protected:
    string brand;

public:
    Brand(string b) {
        brand = b;
    }

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public FuelType, public Brand {
private:
    string model;

public:
    Car(string b, string f, string m) : Brand(b), FuelType(f)
    {
        model = m;
    }

    void showDetails() 
    {
        showBrand();
        showFuel();
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car car1("Toyota", "Petrol", "Corolla");
    Car car2("Honda", "Diesel", "Civic");

    car1.showDetails();
    car2.showDetails();

    return 0;
}
