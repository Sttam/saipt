/*


   Date           : 2020/05/26
   Author         : Matts

   Purpose        : Checking to see the environment, compiler, cmake works for you.

   Instructions   : 
                       ......
                       1. run ./s01_00102

   Quiz yourself  :
                      :) I will ask you when I take the class
                      :) There could be more questions. Let us limit it here.

*/

#include<iostream>
int return_magic();

int main( int argc, char* argv[], char *envp[]){
   
    auto x = return_magic();


    return EXIT_SUCCESS;
}

int return_magic(){

    int i{100};

    return i;
}
