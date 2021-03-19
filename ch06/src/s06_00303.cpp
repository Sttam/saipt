/*

   Date           : 2020/06/08
   Author         : Matts

   Purpose        : C++ Literals
                    No need to mug it up.
                    Need to know how you could express it as per the rules.
                    Auto has an impact on the type of the variable

   Instructions   :

   Quiz yourself  : 

*/

#include <iostream>

using namespace std;

int main() {

    // Prefix
    //Decimal
    const int value1  = 95;
    int value2  = 76;
    auto value3  =  value1;

   //Binary
   int value4    = 0b101;
   int value5    = 0B001;
   int value6    = 0B1111;

   int value7    = 0356;
   int value8    = 0732;
   int value9    = 0137;

   int value10   = 0xA3;
   int value11   = 0X38C;
   int value12   = 0XFFFF;

   /*Suffix
    u or U	  unsigned int
    l or L        long int
    ul or UL      unsigned long int
    ll or LL      long long int
    ull or ULL	  unsigned long long int
    No suffix	  int
   */
   auto  value13 = 0xA; // assigning hex integer literal
   auto  value14 = 0b100; 
   auto  value15 = 79; // assigning decimal integer


   auto  value16  = 34.876;
   auto  value17  = 34876E-3;
   cout << "Value  1 " <<  value1  << endl;
   cout << "Value  2 " <<  value2  << endl;
   cout << "Value  3 " <<  value3  << endl;
   cout << "Value  4 " <<  value4  << endl;
   cout << "Value  5 " <<  value5  << endl;
   cout << "Value  6 " <<  value6  << endl;
   cout << "Value  7 " <<  value7  << endl;
   cout << "Value  8 " <<  value8  << endl;
   cout << "Value  9 " <<  value9  << endl;
   cout << "Value 10 " <<  value10  << endl;
   cout << "Value 11 " <<  value11 << endl;
   cout << "Value 12 " <<  value12 << endl;
   cout << "Value 13 " <<  value13 << endl;

  return EXIT_SUCCESS;
}
