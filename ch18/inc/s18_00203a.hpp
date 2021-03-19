#ifndef __S18_00203_hpp
#define __S18_00203_hpp
// A Sample complex classs
#include <iostream>
class complex
{ // very simplified complex

    double re, im;

public:
   
    complex(double r=0, double i=0) : re{r},im{i} {}
    double getRe(){ return re;}
    double getIm(){ return im;}
    
    complex& operator+=(complex);
    complex& operator-=(complex);
    complex& operator*=(complex);
    

    friend std::ostream& operator<<(std::ostream& os, complex c);

};

complex operator-(complex a, complex b);
complex operator+(complex a, complex b);
complex operator*(complex a, complex b);


complex operator+(complex a, complex b ){
    complex t{a};
    t += b;
    return t;
}

complex operator-( complex a, complex b ){
    complex t{a};
    t -= b;
    return t;
}

complex operator*(complex a,complex b){
    complex t{a};
    t *= b;
    return t;
}

inline complex& complex::operator+=(complex rhs){
   
    re += rhs.re;
    im += rhs.im;
    return *this;
}


complex& complex::operator*=(complex rhs){
   
    re *= rhs.re;
    im *= rhs.im;
    return *this;
}

complex& complex::operator-=(complex rhs){
   
    re -= rhs.re;
    im -= rhs.im;
    return *this;
}

std::ostream& operator<<(std::ostream& os, complex c){
    os<< "X : Real => " << c.re << " Img : " << c.im << std::endl;
    return os;
}

#endif