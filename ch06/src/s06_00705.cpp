/*

   Date           : 2020/06/07
   Author         : Matts

   Purpose        : Declaration Vs Definition

   Instructions   :

   Quiz yourself  : 
                    1) If an external variable is declared and never defined. What will happen
                    2) If external declared and defined but never used, what will happen
                    3) Why a global variable is pushed to the heap rather than stack? 

*/

#include <iostream>
/*
Most declarations are found in headers. 
Headers provide the guidence to the compiler as to what the type is and how it is used.
*/
/* 
    Built-in Types
    Declarations and definitions 
*/

extern double square(double); //declaration
double square(double); //declaration
double square(int); //declaration
//int    square(double); //If we compile does this line cause an error? Why

extern int whereIsit;   // Do we need to define the variable?
extern int whereIsit;   // Why it is not causing a problem?
                        // Who will resolve this if we use it?

static int myvariable = 20;

#include <iostream>

using namespace std;
  
int main()
{
    auto i = 100;             // Use auto make compiler decide the type from the initialization.
    auto d = 2.5 * 23.45;     // Compiler deduct the type as double;
    auto x = d * i;           // What is d * i?  What is the type of x deducted ?

    cout << "End of the run" << endl;


}

// definition 
//Every definition is also a declaration, but only some declarations are also definitions.
double square(double d){
    return d * d;
} 
 
/*  Repeated definition will cause error
double square(double d){
    return d * d;
}  

*/

double square(int i){
    std::cout << "Picked function with square(int) "<< i * i  << std::endl;
    return( i * i );
}  
