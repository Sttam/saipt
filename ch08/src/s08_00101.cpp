/*--------------------------------------------------------------------------
     Date : 13th July 2020
(Structures Unions Enumerations )
Teaching Point
Purpose
Example will not compile due to the wrong namespace configuration
Participants should try to solve the issue.
It gives a solid understanding of the concept of namespace.

Please review the header file s08_00101.hpp
-------------------------------------------------------------------------- */
#include <iostream>
#include <s08_00101.hpp>
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
    PrintAddress( &ad );
    return 0;
}


void PrintAddress( Address&  a ){
    cout <<  "     Address         "  << endl <<  
             "Name  : " << a.name       << " "  << endl <<
             "No.   : " << a.number     << " "  << endl << 
             "Street: " << a.street     << " "  << endl <<
             "Town  : " << a.town       << " "  << endl << 
             "State : " << a.state[0]  << a.state[1] << endl <<
             "Zip   : " << a.zip << endl;
}

void PrintAddress( Address*   p ){
    cout <<  "     Address         "  << endl <<  
             "Name  : " << p->name       << " "  << endl <<
             "No.   : " << p->number     << " "  << endl << 
             "Street: " << p->street     << " "  << endl <<
             "Town  : " << p->town       << " "  << endl << 
             "State : " << p->state[0]  << p->state[1] << endl <<
             "Zip   : " << p->zip << endl;
}
