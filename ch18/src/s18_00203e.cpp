/* -----------------------------------------------------------

Literals
When inline constexpr is used in the constructor

-------------------------------------------------------------*/
#include <iostream>
#include <s18_00203e.hpp>
using namespace std;

void f(complex a, complex b);
int main()
{
   
    complex z1{ 2.54, 2.54};
    complex z2{ 2.54, 3.54};
    if( z1 == z2 ){
        cout << " z1 and z2 are Equal " << endl;
    }
    complex x1{ 2.54, 2.54};
    complex x2{ 2.54, 2.54};
    if( x1 == x2 ){
        cout << " x1 and x2 are Equal " << endl;
    }


    cout << x1 << x2;
    return 0;
}