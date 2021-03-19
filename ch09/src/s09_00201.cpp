/*--------------------------------------------------------------------------
        Date : 04 August  2020
     Session : 09 -  Statements  
     Purpose : If Statements

     Details :

     In an if-statement, the first (or only) statement is executed if the condition is true and the second
     statement (if it is specified) is executed otherwise. If a condition evaluates to something different
     from a Boolean, it is – if possible – implicitly converted to a bool. This implies that any arithmetic
     or pointer expression can be used as a condition. For example, if x is an integer, then
-------------------------------------------------------------------------- */
#include <iostream>
using namespace std;

int main(){

     auto score{180};
     auto balls_faced{56};
     auto sixes{20};

     double rate{(double)score/balls_faced};
     cout << "Scoring rate " << rate << endl;

     if (sixes > 10 && score > 100 ){
     
         cout << "He is a super scorer ...." << endl;
     }

     return EXIT_SUCCESS;
}

/*
if (x) // ...  means if (x != 0) // ...

For a pointer p,
if (p) // ...
is a direct statement of the test ‘‘Does p point to a valid object (assuming proper initialization)?’’
and is equivalent to
if (p != nullptr) // ...

*/
