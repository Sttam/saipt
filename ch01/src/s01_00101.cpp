/*


   Date           : 2020/05/27
   Author         : Matts


   Purpose        : Checking to see the environment, compiler, cmake works for you.

   Instructions   : 
                       1. go to the saipt01s/build 
                       2. run cmake ../
                       3. run cmake --build ./
                       4. run ./s01_00101

   Quiz yourself  :
                      1.  Where is the external variable std::cout declared
                      2.  Where is the external variable std::cout defined
                                   ( ios_base::basic_ios::::basic_ostream::ostream )
                      3.  Where is it instatiated.
                      4.  Why EXIT_SUCCESS is used instead of 0
                      5.  If we return( EXIT_SUCCESS) instead what is the implication
  
                      :) There could be more questions. Let us limit it here.

*/

#include <iostream>

int main(){

    std::cout << "Hello, Welcome to C++ " << std::endl;
    return EXIT_SUCCESS;
}
