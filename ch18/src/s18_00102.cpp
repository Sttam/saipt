/* -----------------------------------------------------------
Date : 7th Dec 2020
How {} Initializer is used and how the grammar is formed.
initializers are used on the right-hand side of an assignment.

The technical problems of writing a grammar allowing {} everywhere in 
an expression (e.g., how would you know if a { after a
semicolon was the start of an expression or a block?) and 
also giving good error messages led to a 
more limited use of {} in expressions.
-------------------------------------------------------------*/





#include <iostream>
#include <s18_00101.hpp>
using namespace std;
void g( complex a, complex b);

int main()
{

    complex a{1, 2};
    complex b{2, 1};

    a = {1, 2};            //OK: right hand side of assignment
    a += {1, 2};           // OK: right hand side of assignment
    //b = a + {1, 2};        // syntax error
    b = a + complex{1, 2}; // OK
    g(a, {1, 2});          // OK: a function argument is considered an initializer
    //{a, b} = {b, a};       // syntax error    return 0;

}

void g( complex a, complex b){
    return;

}