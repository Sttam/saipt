/***********************************************************************************************
  Author     : Matts Date : 17 July 2020

  Purpose    : Structures - Constructors

               Constructors are needed nput is reordered, validate arguments, 
               modify arguments, establish invariants etc. 
***********************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

struct Point {
   int x, y;
};

struct Points {
     vector<Point> elem;// must contain at least one Point
     Points(Point p0) { elem.push_back(p0);}
     Points(Point p0, Point p1) { elem.push_back(p0); elem.push_back(p1);} 
     // ...
};

ostream& operator << ( ostream &os, Point p ){

     os << "{ " <<p.x << ", " << p.y << " }" << endl;
     return os;
}

ostream& operator << ( ostream& os, Points& ps ){
     for ( auto& e:ps.elem )
            os << e;
     return os;
}


int main( int argc, char* argv[] ){


   //Points x0;            // error : no default constructor
                           //no matching function for call to ‘Points::Points()’
   cout << "Printing Points x1{ {100,200} }; " << endl;
   Points x1{ {100,200} }; // one Point
   cout << x1;
  
   cout << "Printing Points x2{ {100,200}, {300,400} }; // two Points " << endl;
   Points x2{ {100,200}, {300,400} }; // two Points
   cout << x2;
   return EXIT_SUCCESS;
}
