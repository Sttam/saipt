/***********************************************************************************************
  Author     : Matts Date : 1Cleaned up presentation of s08_00303.cpp ( Is it a sublime pearly lotus ? )

  Purpose    :  Structures and Arrays
      Type equivalance.
      Compiler is looking at functional equivalance and it is determined by the programmer
***********************************************************************************************/
#include <iostream>
using namespace std;

struct PointA {
    int x,y;
   
};

struct PointB {
int x,y;
};

int main( int argc, char*argv[] ){

    PointA ptA;
    PointB ptB;
//  ptA = ptB; //Error

    return EXIT_SUCCESS;
}
