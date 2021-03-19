#include <iostream>
using namespace std;
class Base
{
    public:
    virtual ~Base() 
    {
        cout << "Base Destructor\n"; 
    }
};

class BBase:public Base
{
    public:
    ~BBase() 
    {
        cout << "BBase Destructor\n"; 
    }
};

class Derived:public BBase
{
    public:
    ~Derived() 
    { 
        cout<< "Derived Destructor\n"; 
    }
}; 

int main()
{
    BBase* b = new Derived;      
    delete b;
}