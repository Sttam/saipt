/*

   Date           : 2020/05/27
   Author         : Matts

   Purpose        : Integer representation

   Instructions   :

   Quiz yourself  : 
                 How signed and unsigned integers represented?
                 What is 2's Complement?
                 Why is it used?
                 What happens when a negative integer is assigned to an unsigned integer?


*/

#include <iostream>
#include <iomanip>

int main()
{
     using namespace std;

     int  si1{20}; 
     int  si2{-20}; 
     unsigned int ui1{si2}; 


     cout << " Signed Integer 1 " << setw(4) << si1  //warning: narrowing conversion of ‘si2’ from ‘int’ to ‘unsigned int’
          << " Signed Integer 2 " << setw(4) << si2 
          << " UnSigned Integer  " << setw(4) << ui1 << endl; 
     return EXIT_SUCCESS;

}
