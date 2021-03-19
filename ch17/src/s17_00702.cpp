#include <iostream>
#include <vector>
using namespace std;

//Initialization Using Constructors

struct X
{
    X(int);
};

struct Y : X
{
    X m{0};                   //provide default initializer for member m
    Y(int a) : X{a}, m{a} {}; // initialize base and member
    Y() : X{0} {};            // initialize base and member
};

X g{1}; // initialize global variable
void f(int a)
{
    //X def{}; // error : no default value for X
    Y de2{}; // OK: use default constructor
    X* p{nullptr};
    X var{2};                // initialize local var iable
    p = new X{4};            // initialize object on free store
    X a[]{1, 2, 3};          // initialize array elements
    vector<X> v{1, 2, 3, 4}; // initialize vector elements
}

int main()
{

    return 0;
}