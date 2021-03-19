/***********************************************************************************************
  Author     : Matts Date : 17 July 2020

  Purpose    :  Structures and Arrays

       We can have arrays of structs and structs containing arrays
       Placing a built-in array in a struct allows us to treat that array as an object: we can copy the struct
       containing it in initialization (including argument passing and function return) and assignment. 

       Let us first consider how we manipulate an array and later we will see how this 
       done through the std::array.

       The major problem could be we calculate the array bound errorneously or dynamic data issues
       may cause the program to fail
***********************************************************************************************/
#include <iostream>
#include <sstream>
using namespace std;

struct Point {
int x,y;
};

struct Array {
   Point elem[5];

};
std::ostream& operator << ( ostream& os, Point &p );
s1(){

  f1();

}
f1(){
    
  Point p1[5] {{1,2},{3,4},{5,6},{7,8}, {9,10}};

}

int main( int argc, char*argv[] ){

    Point p1[5] {{1,2},{3,4},{5,6},{7,8}, {9,10}};
    Point p2[5] {{1,1},{3,4},{5,6},{7,8}, {9,9}};

    Point *pp = p1;
    p1 = p2
   *p1 = *p2;

    int x;
    x= 100;

    Array a{{{1,2},{3,4},{5,6},{7,8},{9,10}}};
    Array b{{{1,2},{3,4},{5,6},{7,8},{9,10}}};

    a = b; b=a;
   
    Point p{10,15};

    //Array b = shift(a, p, 5 );
    //printArray(a, 5);
    return EXIT_SUCCESS;
}

void mycopy(Point *p1, Point *p2 ){
}

Array shift(Array a, Point p, int count ){
    for (int i=0; i!=count; ++i) {
          a.elem[i].x += p.x;
          a.elem[i].y += p.y;
    }
    return a;
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
