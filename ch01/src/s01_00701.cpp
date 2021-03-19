/*


   Date           : 2020/05/27
   Author         : Matts


   Purpose        : To show fork system call

                   The fork system call is used to create a new processes. 

                   waits for the child to finish


   Instructions   : 

   Quiz yourself  :

*/

#include <iostream>
#include <sys/types.h>
#include <sys/wait.h> 
#include <unistd.h>

using namespace std; 

int main(){

    
    cout << "Ingore this file testing Hello :- Process Id : " << getpid() << endl;

    return EXIT_SUCCESS;
}
