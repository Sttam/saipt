/*--------------------------------------------------------------------------
        Date : 04 August  2020
     Session : 09 -  Statements  
     Purpose : Declarations as Statements

     Details :
               A declaration is a statement. Unless a variable is declared static, 
               its initializer is executed whenever the thread of control passes 
               through the declaration. 

               1. declaraions are allowed wherever a statement can be used.
               2. this allows to declare a variable just before its use
                  there by reducing uninitialzed variables.

               Fibonacci Series In C++
-------------------------------------------------------------------------- */
#include <iostream>
using namespace std;
constexpr int SERIES_LIMIT{15}; 
int main(){

     int t1{1};
     auto t2{t1};

     cout << "Febanacci Series " << t1 << ", ";

     for( auto count{1}; count < SERIES_LIMIT; count++ ){
        auto temp{t1}; 
        t1 = t2;
        t2 = t1 + temp;
        cout << t1 << ", ";
     
     }
     cout << t2 << " ......" << endl;

     return EXIT_SUCCESS;
}
