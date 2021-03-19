/*


   Date           : 2020/05/27
   Author         : Matts


   Purpose        : To show fork system call

                   The fork system call is used to create a new processes. The newly created process is the child process. 
                   The process which calls fork and creates a new process is the parent process. The child and parent processes 
                   are executed concurrently.

                   But the child and parent processes reside on different memory spaces. These memory spaces have same 
                   content and whatever operation is performed by one process will not affect the other process.


   Instructions   : 

   Quiz yourself  :
                      1.  Bash does fork call on behalf of us.
                      2.  How do you load a new process to run.
                      3.  What is the difference of thread and fork

*/

#include <iostream>
#include <sys/types.h>
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

    return EXIT_SUCCESS;
}
