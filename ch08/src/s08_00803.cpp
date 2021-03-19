/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  Unions

  Source     : Text
***********************************************************************************************/
#include <iostream>
using namespace std;

union U {
    int m1;
    complex<double> m2; // complex has a constructor
    string m3; // string has a constructor (maintaining a serious invariant)
};

int main(int argc, char* argv[])
{
    U u;             // error : which default constructor?
    U u2 = u;        // error : which copy constructor?
    u.m1 = 1;        // assign to int member
    string s = u.m3; // disaster : read from string member
    return 0;          //error : which destructors are called for x, u, and u2?
}
