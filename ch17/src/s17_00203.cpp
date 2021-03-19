/*
    Destructor
*/
#include <iostream>
using namespace std;

class Vector
{
public:
    Vector(int s) : elem{new double[s]}, sz{s} {}; // constructor: acquire memory
    ~Vector()
    {
        clog << "~Vector\n";
        delete[] elem;
    } // destructor: release memory
    
private:
    double *elem; // elem points to an array of sz doubles
    int sz;       // sz is non-negative
};

Vector *f(int s)
{
    Vector v1(s);
    // ...
    return new Vector(s + s);
}
void g(int ss)
{
    Vector *p = f(ss);
    // ...
    cout << "Before Deleting from g" << endl;
    delete p;
}

int main()
{
    g(10);

    return 0;
}
