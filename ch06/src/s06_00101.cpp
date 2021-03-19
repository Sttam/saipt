/*--------------------------------------------------------------------------------

   Date           : 2020/06/08
   Author         : Matts

   Purpose        : Standard Vs. Implementation
         Copy elision is an optimization implemented by most compilers to prevent 
         extra (potentially expensive) copies in certain situations. 
         It makes returning by value or pass-by-value 
         feasible in practice (restrictions apply).

         Depending on the compiler & settings, the following outputs are all valid:
               Hello World!
               A copy was made.
               A copy was made.

               Hello World!
               A copy was made.
               
               Hello World!
----------------------------------------------------------------------------------*/

#include <iostream>
struct C {
  C() {}
  C(const C&) { std::cout << "A copy was made.\n"; }
};

C f() {
  return C();
}

int main() {
  std::cout << "Hello World!\n";
  C obj = f();

  return EXIT_SUCCESS;
}
