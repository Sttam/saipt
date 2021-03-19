/***********************************************************************************************
  Author     : Matts Date : 17 July 2020

  Purpose    : Structures

A struct is simply a class where the members are public by default. So, a struct can have member
functions. In particular, a struct can have constructors. 

A sample on how to use the std::Initializer_list
***********************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x, y;
};

struct Points {
    vector<Point> elem;// must contain at least one Point
    Points( initializer_list<Point>);
};

Points::Points(initializer_list<Point> args){
    for (auto& e:args)
        elem.push_back(e);
};

ostream& operator <<( ostream& os, Point& p) {
    cout << "{" << p.x << ", "  << p.y << "}\n" ;
    return os;
}

ostream& operator <<( ostream& os, Points& p) {
    for(auto& e:p.elem)
        cout << e;
    return os;
}

int main( int argc, char* argv[] ){

    Points xs = { {1, 2}, {2, 3 }};
    cout << xs;
    return EXIT_SUCCESS;
}
