/*

   Date           : 2020/05/27
   Author         : Matts

   Purpose        : Floating point representation

   Instructions   :

   Quiz yourself  : 
                  Why is there no unsigned representation of float/double/long double?


*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

     float        f{20.123467}; 
     double       d{20.123467}; 
     long double  ld{20.123467}; 
     //warning: narrowing conversion of ‘f’ from ‘float’ to ‘int’ 
     cout << " float        " << setw(4) << sizeof( f ) << " Value "    << setprecision(4) <<  f <<  "   Integer Value " << int{f} << endl;
     //warning: narrowing conversion of ‘d’ from ‘double’ to ‘int’ [-Wnarrowing]
     cout << " double       " << setw(4) << sizeof( d ) << " Value "    << setprecision(4) <<  d <<  "   Integer Value " << int{d} << endl;
     cout << " long double  " << setw(4) << sizeof(ld ) << " Value "    << setprecision(4) <<  ld << "   Integer Value " << int{ld} << endl;
     return EXIT_SUCCESS;

}
