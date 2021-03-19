/***********************************************************************************************
  Author     : Matts Date : 17 July 2020

  Purpose    :  Structures and Arrays
      Cleaned up presentation of s08_00303.cpp ( Is it a sublime pearly lotus ? )
***********************************************************************************************/
#include <iostream>
#include <sstream>
#include <array>
using namespace std;

struct Point {
int x,y;
};

ostream& operator<<(ostream& os, const Point &p){
   cout << '{' << p.x << ',' << p.y << '}' << endl;
   return os;
}

template<typename T, std::size_t N>
ostream& operator<<(ostream& os, const array<T,N>& a ){
    for(const auto& e: a) cout << e;
    return os;
}

template<typename T, std::size_t N>
array<T,N> operator < (Point p, const array<T,N>& a)
{
    auto b = a;
    for(auto& e: b){
        e.x += p.x;
        e.y += p.y;
    }
    return b;
}


int main( int argc, char*argv[] ){

    array<Point,4>Polygon{{{1,2},{3,4}}};
    cout << Polygon;

    Point Origin{5,10};
    cout << Origin;

    auto ShiftedPolygon =  Origin < Polygon;
    cout << ShiftedPolygon;

    return EXIT_SUCCESS;
}
