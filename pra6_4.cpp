#include<iostream> 
using namespace std; 


class Base { 
    public: 
        virtual ~Base() { 
            std::cout << "Base destructor called\n"; 
        } 
    }; 
     
    class Derived : public Base { 

 
    private: 
        int* data; 
    public: 
        Derived() { 
            data = new int[100];  
        } 
        ~Derived() override { 
            delete[] data; 
            std::cout << "Derived destructor called\n"; 
        } 
    }; 
     
    int main() { 
        Base* obj = new Derived(); 
        delete obj; 
     
        return 0; 
    } 