/*

   Date           : 2020/05/27
   Author         : Matts

   Purpose        : How are signed and unsigned character behave?

   Instructions   :

   Quiz yourself  : Why 

*/

#include <iostream>
#include <iomanip>

int main()
{
     using namespace std;

     char  c1{65}; 
     signed char  sc1{-20}; 
     unsigned char uc1{sc1}; //warning: narrowing conversion of ‘sc1’ from ‘signed char’ to ‘unsigned char’


     cout << " char              " << setw(4) << c1  <<  " integer Value  " << setw(4) << int{c1}  << endl;
     cout << " Signed char       " << setw(4) << sc1 <<  " integer Value  " << setw(4) << int{sc1} << endl;
     cout << " UnSigned char     " << setw(4) << uc1 <<  " integer Value  " << setw(4) << int{uc1} << endl;
     return EXIT_SUCCESS;

}
