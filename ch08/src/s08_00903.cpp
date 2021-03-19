/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  enum classes

  Source     : Text
***********************************************************************************************/
#include <iostream>
using namespace std;

   enum color { red=2, yellow, green, black };
   enum class Traffic_light { red, yellow, green };
   enum class Warning { green, yellow, orange, red }; // fire alert levels


void f(Traffic_light& x)
{
    //if (x == 9) { /* ... */ } // error : 9 is not a Traffic_light
    //if (x == red) { /* ... */ } // error : no red in scope
    //if (x == Warning::red) { /* ... */ } // error : x is not a Warning
    if (x == Traffic_light::red) { /* ... */ } // OK
}

int main(int argc, char* argv[])
{
    //Warning a1 = 7;          // error : no int->Warning conversion
    //int a2 = green;          // error : green not in scope
    //int a3 = Warning::green; // error : no War ning->int conversion
    Warning a4 = Warning::green; // OK

    Traffic_light  X{2};
    f(X);
    
    return 0;          
}

