/*
    Destructor
*/
#include <iostream>
using namespace std;

class Vector
{
public:
    Vector(int s) : elem{new double[s]}, sz{s} {}; // constructor: acquire memory
    ~Vector() {  clog << "~Vector\n"; delete[] elem; }                   // destructor: release memory
    // ...
private:
    double* elem; // elem points to an array of sz doubles
    int sz;       // sz is non-negative
};

int main(){
    Vector v(30);

    return 0;
}