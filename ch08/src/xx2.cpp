/***********************************************************************************************
***********************************************************************************************/
#include <iostream>
using namespace std;

struct Point {
int x,y;
};

struct Array {
   Point elem[5];
};

void mycopy( Point *p1, Point *p2 ){

    *p1 = *p2;
}

int main( int argc, char*argv[] ){

    Point point1[5] {{1,2},{3,4},{5,6},{7,8}, {9,10}};
    Point point2[5] {{2,2},{3,4},{5,6},{8,8}, {9,10}};

    //point1 = point2; 
    *point1 = *point2; 
    mycopy( point1, point2 );
    for( auto& x:point1 )
           cout << x;

    Array a{{{1,2},{3,4},{5,6},{7,8}, {9,10}}};
    Array b{{{1,2},{3,4},{5,6},{7,8}, {9,10}}};

    a = b;
    printArray(a, 5);
    return EXIT_SUCCESS;
}

void printArray(Array a, int count ){
    cout << "Array >> "<<  endl;
    for (int i=0; i!=count; ++i)
        cout << "  X "<<  a.elem[i];
  
}
std::ostream& operator << ( ostream& os, Point &p ){
    os << "{ " << p.x  << ", " << p.y << " } \n" ;
    return os;
}
