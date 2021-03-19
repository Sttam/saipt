/*----------------------------------------------------------------------------------------------
     Date : 13th July 2020

  covering struct Layout : - Structure Layout

  The CPU performs reads and writes to memory most efficiently when the data is naturally aligned. 
  Which means that the data's memory address are not as per the structure defiition. But padded as
  decided by the compile.

----------------------------------------------------------------------------------------------*/
#include <iostream>
#include <s08_00104.hpp>
using namespace std;
using namespace saip;

void f1();
void f2();

int main(){

    int TotalSize1 = sizeof( simple1 );
    int TotalSize2 = sizeof( simple2 );
    int CalcSize = 13 + sizeof( int ) + 31 + 31 + sizeof( double ) + 3 + sizeof(int) +6;
    // char    name[13]; int     number; char    street[31]; char    town[31];
    //double  mydouble; char    state[3]; int     number2; char    zip[6];

     cout << "Total Size 1 Struct Simple 1      : " << TotalSize1 << endl;
     cout << "Total Size 2 Struct Simple 2      : " << TotalSize2 << endl;
     cout << "Calculated Size                   : " << CalcSize << endl;
     simple1 x;
     void* p = &x;
     void* p1= &x.number;
     cout << "Starting Address   : " << p << endl;
     cout << "Starting Address   " << endl <<
             "         number    : " << reinterpret_cast<intptr_t>(p1)- reinterpret_cast<intptr_t>(p) << endl;
}
