/*-------------------------------------------------------------------------------------

   Date           : 2020/05/27
   Author         : Matts

   Purpose        : The C++ language and standard library are defined by their ISO standard. 
                    Certain aspects are left to implementation defined. When it is implementation
                    defined, the outcome could vary compiler to compiler. 

   Instructions   :

-----------------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
const int x_size = 1024;
char page[x_size];

int main()
{
     using namespace std;
     char lpage[x_size];
     int x[10];
     char* pc = lpage;
     int y = 0;
     page[ x_size * 2 ] = 7;

     unsigned char c1 = 64; // well defined: a char has at least 8 bits and can always hold 64
     unsigned char c2 = 256; // implementation-defined: truncation if a char has only 8 bits

     cout << "The ASCII value of the character stored is " << (int)c1 << " " << (int)c2 << endl; 

     page[ x_size * 7  ] = 7; // undefined

     for( auto i = 125; i < 160; i++ ){ 

         char c = i;
         signed char sc = i;
         unsigned char uc = i; 
         cout << "values of char " << setw(4) << (int)c << " signed char " << setw(4) << int{sc} 
                         << " Unsigned char " << setw(4) << int{uc} << endl; 

     }

     return EXIT_SUCCESS;

}
