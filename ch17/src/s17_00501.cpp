#include <iostream>
using namespace std;
//Lets first see what happens when we do not have a 
//virtual Base class destructor.

class Base
{
    public:
    ~Base() {
        cout << "Base Destructor\n"; 
    }
};

class Derived :public Base
{
    public:
    ~Derived() 
    { 
        cout<< "Derived Destructor\n"; 
    }
}; 

int main()
{
    Base* b = new Derived;  
    delete b;
}