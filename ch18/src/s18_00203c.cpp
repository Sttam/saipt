/* -----------------------------------------------------------

Literals
When inline constexpr is used in the constructor

-------------------------------------------------------------*/
#include <iostream>
#include <s18_00203c.hpp>
using namespace std;

void f(complex a, complex b);
int main()
{
   
    complex z1 {1.2,12e3};
    constexpr complex z2 {1.2,12e3}; // guaranteed compile-time initialization
    cout << " z2 : " << z2 << endl;

    complex z {1.2+ 12.00_i }; //Here we define i for imaginary
    cout << z;
}