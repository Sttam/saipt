/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  Unions

  Source     : Text
***********************************************************************************************/
#include <iostream>
using namespace std;

union Fudge {
    int i;
    int* p;
};

int*cheat(int i)
{
    Fudge a;
    a.i = i;
    return a.p; // bad use
}

int main(int argc, char* argv[])
{

    int *p = cheat( 20000 );
  
    return 0;

}
