/* -----------------------------------------------------------

A sample concrete class complex 
for teaching purpose

Ignore the mathematical correctness of the examples 😊

-------------------------------------------------------------*/
#include <iostream>
#include <s18_00203a.hpp>
using namespace std;

int main()
{
    complex a{1.1, 2.2};
       
    complex b{3.3, 1.999};
     cout << a << b;
    complex c{a + 2.3};

    complex d{2 + b};
    cout << c << d;
    complex e = a*b*c;
    cout << e;

    return 0;
}
