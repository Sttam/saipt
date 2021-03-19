/* -----------------------------------------------------------

Operator Overloading
Introduction

-------------------------------------------------------------*/

#include <iostream>
#include <s18_00201.hpp>
using namespace std;

int main(){
 
    complex a{1,2};
    complex b{2,1};
    complex c = a + b;
    cout << c;
    complex d{2.2,2.2};
    cout <<  c*d;
    //Unary operator
    -c;
    cout << c;
    //Binary operator is kicked in
    cout << d-c;
   
    return 0;
}

