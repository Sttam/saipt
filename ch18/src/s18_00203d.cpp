/* -----------------------------------------------------------

Literals
When inline constexpr is used in the constructor

-------------------------------------------------------------*/
#include <iostream>
#include <s18_00203d.hpp>
using namespace std;

void f(complex a, complex b);
int main()
{
   
    complex z1;
    z1.real( 2.54233);
    z1.imag( 2.4999);

    cout << "The real part is " << z1.real() << endl;
    cout << z1;
}