/* -----------------------------------------------------------

Operator Overloading
Introduction

-------------------------------------------------------------*/

#include <iostream>
#include <s18_00202.hpp>
using namespace std;

int main(){
 
    X x1{2};
    cout <<x1;

    X x2{4};
    //How do you add x + 1 and
    // 1 + x
    x2 += x1;
    cout << x2;

    X x3 = 1 + x2;

    cout << x3;
       
    return 0;
}

