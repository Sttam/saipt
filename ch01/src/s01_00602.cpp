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

    
    cout << "Parent Hello :- Process Id : " << getpid() << endl;

    pid_t  pid = fork();

    if( pid < 0 ){
        cout << "Error in fork() system call!" << endl;
        return 1;
    }

    if (pid == 0) { // child process because return value zero  
        cout << "Child Hello from Child!" << endl;
        cout << "Child Process id : " << getpid() << endl; 
        cout << "Child parent id  : " << getppid() << endl; 
    }
    if( pid > 0 ){
        wait(NULL); 
        cout << "parent finished " << endl; 
    }else{
        sleep(2);
        cout << "Child finished " << endl; 

    }

    return EXIT_SUCCESS;
}
