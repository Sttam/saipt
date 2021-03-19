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


Array shift(Array a, Point p, int count ){
    for (int i=0; i!=count; ++i) {
          a.elem[i].x += p.x;
          a.elem[i].y += p.y;
    }
    return a;
}

std::ostream& operator << ( ostream& os, Point &p ){
    os << "{ " << p.x  << ", " << p.y << " } " ;
    return os;
}

void printArray(Array a, int count ){
    cout << "Array >> "<<  endl;
    for (int i=0; i!=count; ++i)
        cout << "     "<<  a.elem[i] << endl;
  
}

int main( int argc, char*argv[] ){

    Point points[5] {{1,2},{3,4},{5,6},{7,8}, {9,10} };

    //Placing a built-in array in a struct allows us to treat that array as an object:
    Array a{{{1,2},{3,4},{5,6},{7,8},{9,10}}};
    Point p{10,15};

    Array b = shift(a, p, 5 );
    printArray(a, 5);
    return EXIT_SUCCESS;
}
