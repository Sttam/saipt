/*


   Date    : 2020/05/26
   Author  : Matts


   Purpose : 
         Understanding of how type declarations operates., 
         Learning : - 

            1. Templates are confusing. So understand what is purpose.

*/

#include <iostream>

const int GLOBAL_INDEX{101};  // GLOBAL_INDEX will not change ever from this point.
                              // instead of typedef it is recommended to use const int.
                              // Compiler could optimize the implementation.

int main () {

  int  i{1020};
  int &ir{i}; 
  /*
  
           int &ir; 

           //error: ‘ir’ declared as reference but not initialized 
           In the C++ programming language, a reference is a simple reference datatype that is less powerful 
           but safer than the pointer type inherited from C. The name C++ reference may cause confusion, 
           as in computer science a reference is a general concept datatype, with pointers and 
           C++ references being specific reference datatype implementations. The definition of a reference 
           in C++ is such that it does not need to exist. It can be implemented as a new name for an 
           existing object (similar to rename keyword in Ada).

*/
int x{ 5 }; // normal integer
int &y{ x }; // y is a reference to x
int &z{ y }; // z is also a reference to x

z= 100;
const int &ci = x;
//ci = 100; //error: assignment of read-only reference ‘ci’

  return EXIT_SUCCESS;
}

