/***********************************************************************************************
  Author     : Matts Date : 17 July 2020

  Purpose    : Structures 

              How structures are defined and initialized. 
              It is dangerous to leave variables uninitialized. 
***********************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

struct Point {
   int x, y;
};

ostream& operator << ( ostream &os, Point p ){

     os << "{ " <<p.x << ", " << p.y << " }" << endl;
     return os;
}

    Point pg;     // danger : uninitialized if in local scope
int main( int argc, char* argv[] ){

    cout << pg;   //printing out the global Point
    Point p0;     // danger : uninitialized if in local scope
    cout << p0;
    Point p1 {};  // default construction: {{},{}}; that is {0.0}
    cout << p1;
    Point p2 {1}; // the second member is default constructed: {1,{}}; that is {1,0}
    cout << p2;
    Point p3 {1,2}; // {1,2}
    cout << p3;

    //Point p4 {{1,2}, {2,3}}; ////Trying to initialize with more variable
    //cout << p4;

    return EXIT_SUCCESS;

}
