/*--------------------------------------------------------------------------
     Date : 13th July 2020
(Structures Unions Enumerations )
Teaching Point
Purpose
It is difficult to make a full understanding of the concept eventhough
the concept could be very simple.

Try correcting your programs.
-------------------------------------------------------------------------- */
#include <iostream>
#include <s08_00102.hpp>
using namespace std;
using namespace saip;

int main(){

    Address ad;
    ad.name       = "Matts";
    ad.number     = 10;
    ad.street     = "Downing Street";
    ad.town       = "London";
    ad.state[0]   = 'S';
    ad.state[1]   = 'E';
    ad.zip        = "SW1A 2AA";

    PrintAddress( ad );
    return 0;
}

namespace saip{

void PrintAddress( Address&  a ){
    cout <<  "   Address(Reference)     "  << endl <<  
             "Name  : " << a.name       << " "  << endl <<
             "No.   : " << a.number     << " "  << endl << 
             "Street: " << a.street     << " "  << endl <<
             "Town  : " << a.town       << " "  << endl << 
             "State : " << a.state[0]  << a.state[1] << endl <<
             "Zip   : " << a.zip << endl << endl << endl;
}

}//namespace saip
