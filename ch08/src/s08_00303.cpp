/***********************************************************************************************
  Author     : Matts Date : 17 July 2020

  Purpose    :  Structures and Arrays

  The notation for Array is a bit primitive: Why i!=count? Why keep repeating .elem[i]? 
  Why just elements of type Point? The standard library provides std::array as a more complete and elegant
  development of the idea of a fixed-size array as a struct:


  The disadvantage of std::array compared to a built-in array is that we can’t deduce the number of
  elements from the length of the initializer:

  But it is a smart choice and makes the code error free.
       1. Don't need to pass the array bound
       2. Automatically initialize the elements
***********************************************************************************************/
#include <iostream>
#include <sstream>
#include <array>
using namespace std;

struct Point {
int x,y;
};

ostream& operator<<(ostream& os, Point p){

   cout << '{' << p.x << ',' << p.y << '}' << endl;
   return os;
}


template<typename T, std::size_t N>
ostream& operator<< (ostream &os, array<T,N>& a){
    for(const auto& e: a)
        cout << e;
    cout << "--End---" << endl;
    return os;
}

template<typename T, std::size_t N>
void shift(array<T,N>& a, Point p)
{
    for(auto& e: a){
        e.x += p.x;
        e.y += p.y;
    }
}


int main( int argc, char*argv[] ){

    //--* Using a normal array is inviting a lot of problems
    //--* Avoid using when it is possible.
    Point points[4] {{1,2},{3,4}};

    //Placing a built-in array in a struct allows us to treat that array as an object:
    array<Point,4> a{{{1,2},{3,4}}};


    //Standard array requires the number of elements in the template
    //array<Point> point3 = {{1,2},{3,4},{5,6}}; // error : number of elements not given

    cout << a;
    Point p1{5,10};  //Declaring a point to use it with shift;
    shift(a, p1 );
    cout << a;

    return EXIT_SUCCESS;
}

