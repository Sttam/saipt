/* -----------------------------------------------------------

A sample concrete class complex 
for teaching purpose

Ignore the mathematical correctness of the examples 😊

-------------------------------------------------------------*/
#include <iostream>
#include <s18_00203a.hpp>
using namespace std;

void f(complex a, complex b);
int main()
{
    complex a{1.1, 2.2};
    complex b{3.3, 1.999};
    f(a, b);

    return 0;
}
void f(complex x, complex y)
{

    cout << " x : " << x;
    cout << " y : " << y;

    auto r1 = x + y; // calls operator+(complex,complex)
    auto r2 = x + 2; // calls operator+(complex,double)

    cout << r2;

    auto r3 = 2 + x; // calls operator+(double,complex)
    cout << "R3 : " << r3;
    auto r4 = 2 + 3; //What is happening here

    cout << " r4  : " << r4 << endl;
    //What is happening?
}