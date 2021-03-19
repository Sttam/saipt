/*


   Date           : 2020/05/26
   Author         : Matts

   Purpose        : give an understanding about the shell and OS dealing with you.

   Instructions   : 
                       ......
                       1. run ./s01_00103
                       2. run ./s01_00103 | grep saipt 
                       3. run ./s01_00103 | grep saipt >temp.txt

   Quiz yourself  :
                      1.  Line 2 is an expression. That is the reason why we are writing return EXIT_SUCCESS 
                      2.  What is the compiler doing with the expression
                      3.  What is the output of the program
                      4.  What is the output of the program if run ./s01B00103 & why?
                      5.  What is the output of the program if run ./s01B00103 | grep saipt
                      6.  What is the output of the program if run ./s01B00103 | grep saipt >temp.txt
                      7.  What happened to the stdin and stdout?
  
                      :) There could be more questions. Let us limit it here.

*/

#include <iostream>

int main( int argc, char* argv[], char *envp[]){

    ( 20 * 30 * 40 ); //An expression 

    std::cout << "\nCommand-line arguments:\n";

    for( auto count = 0; count < argc; count++ )
         std::cout << "  argv[" << count << "]   " << argv[count] << "\n";
    std::cout << "\n";

    while( *envp++ )
         std::cout <<   *envp    << "\n";
    std::cout << "\n";


    return EXIT_SUCCESS;
}
