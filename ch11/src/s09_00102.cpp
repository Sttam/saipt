/*--------------------------------------------------------------------------
        Date : 04 August  2020
     Session : 09 -  Statements  
     Purpose : Declarations as Statements

     Details :

              The ability to place declarations after executable code is essential 
              for many constants and for single-assignment styles of programming 
              where a value of an object is not changed after initialization.

              For user-defined types, postponing the definition of a variable until a suitable 
              initializer is available can also lead to better performance. 

-------------------------------------------------------------------------- */
#include <iostream>
#include <sstream>
using namespace std;

int SumitUp( string& s );


int main(){
    string s1;
    s1 = "The best is the enemy of the good.";

    string s{ "1234 2345 23455 12345 4566 8910"}; 
            // Far more efficient than declaring the string 
            // then assigning a value.
    cout << "Total is " << SumitUp( s ) << endl;

     return EXIT_SUCCESS;
}

int SumitUp( string& s ){

    stringstream ss(s);
    int total = 0;

    for( int temp;  ss >> temp; total += temp);
    return total;
} 
