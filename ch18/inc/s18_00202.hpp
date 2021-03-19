#ifndef __S18_00101_hpp
#define __S18_00101_hpp
// This sample is written to explain
// A binary operator can be defined by either a non-static member 
//function taking one argument or a nonmember function 
//taking two arguments.
#include <iostream>
class X
{ // very simplified complex

    double x;

public:
    //explicit X(double xx=0) : x{xx} {}
    X(double xx=0) : x{xx} {}
    
    X& operator+=(X);
    X& operator*=(X);
    
    friend X operator-(X a, X b);
    friend X operator+(X a, X b);
    friend X operator*(X a, X b);
    friend std::ostream& operator<<(std::ostream& os, X c);

};



X operator+(X a, X b ){
    X t{a};
    t.x += b.x;
    return t;
}

X operator-(X a, X b ){
    X t{a};
    t.x -= b.x;
    return t;
}

X operator*(X a,X b){
    X t{a};
    t.x *= b.x;
    return t;
}

X& X::operator+=(X rhs){
   
    x += rhs.x;
    return *this;
}



X& X::operator*=(X rhs){
    
    x *= rhs.x;
    return *this;
}


std::ostream& operator<<(std::ostream& os, X c){
    os<< "X : " << c.x << std::endl;
    return os;
}

#endif