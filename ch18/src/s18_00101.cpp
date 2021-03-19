/* -----------------------------------------------------------

Operator Overloading
Introduction

-------------------------------------------------------------*/

#include <iostream>
#include <s18_00101.hpp>
using namespace std;

int main(){
 
    complex a{1,2};
    complex b{2,1};
    complex c = a + b;
    cout << c;
    complex d{2.2,2.2};
    complex e = c*d;
    cout << e;
    return 0;
}

