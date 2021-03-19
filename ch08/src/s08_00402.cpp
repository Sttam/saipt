/***********************************************************************************************
  Author     : Matts Date : 

  Purpose    :  Structures and Arrays
      Type equivalance.
      Compiler is looking at functional equivalance and 
      constructors helps load values from other types
***********************************************************************************************/
#include <iostream>
using namespace std;
#define ELOG cout <<  " " << __COUNTER__  <<  endl; 


struct PointB {
int x,y;
    PointB(int a=0, int b=0):x{a},y{b}{};

};

struct PointA {
    int x,y;
    PointA(int a=0, int b=0):x{a},y{b}{ cout << "Default Constructor" << endl;};
    PointA( const PointB& b):x{b.x}, y{b.y}{ cout << "Constructor of A with B" << endl;};
    PointA& operator=( const PointB& b); 
};

PointA& PointA::operator=( const PointB& b){ 
    x = b.x;
    y = b.y;
    cout << "Copy Assignment Constructor" << endl; 
    return *this;
}

int main( int argc, char*argv[] ){

    ELOG;
    PointA ptA;                           ELOG;
    PointB ptB;                           ELOG;

    ptA = (PointA)ptB;                    ELOG;
    ptA = ptB;                            ELOG; 
    PointA ptAA = PointA();               ELOG;
    PointA ptAA1 = ptB;                   ELOG;
    PointA ptAA2 = (PointA)PointB();      ELOG;
    PointA ptAA3(PointB());               ELOG;
    PointA ptAA4 = PointB();              ELOG;

    return EXIT_SUCCESS;
}
