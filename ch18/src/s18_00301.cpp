/* -----------------------------------------------------------

Show user defined conversion operations.
There are limitations with the constructor based conversion operations.
It cannot convert from a user defined to built-in type.

-------------------------------------------------------------*/
#include <iostream>
#include <s18_00301.hpp>
using namespace std;

int main()
{

    try{ 
    Tiny c1 = 2;
    Tiny c2 = 62;
    Tiny c3 = c2-c1; // c3 = 60
    Tiny c4 = c3;    //no range check (not necessary)
    int i = c1 + c2; // i = 64
    c1 = c1 + c2;    // range error: c1 can’t be 64
    i = c3-64;       //i = -4
    c2 = c3-64;      // range error: c2 can’t be -4
    c3 = c4;         // no range check (not necessary)
    
    } catch(Tiny::BadRange){
        cout << " We have a bad range " << endl;
    }
    catch( ... ){
        cout  << " We have an unexpected catch" << endl;
    }
    return 0;
}