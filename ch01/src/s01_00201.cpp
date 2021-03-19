/*


   Date    : 2020/05/26
   Author  : Matts


   Purpose : There are some suprising aspect about programming
             This program calculate the n factorial
             Which function will you choose to implement & why
             

*/

#include <iostream>

int Factorial1( int n );
int Factorial2( int n );

int main( int argc, char* argv[], char *envp[]){

    if( argc != 2 ){
        std::cout << "\n Usage : " << argv[0] << " <number> " << std::endl;
        return( EXIT_SUCCESS );

    }

    int n = atoi( argv[1] );
    int nfact = Factorial1( n );
    std::cout << " Factorial " << n << "  : " << nfact  << "\n";

    nfact = Factorial2( n );
    std::cout << " Factorial " << n << "  : " << nfact  << "\n";
    return( EXIT_SUCCESS );
}


int Factorial1( int n ){
    if( n == 1 )
        return(n);
    return( n*Factorial1( n-1));
}

int Factorial2( int n ){
    if( n <= 1 )
        return(1);
    int fact = 1;
    int count = 1;
    while( count <= n ){
        fact *= count++;
    }  
    return( fact );
}
