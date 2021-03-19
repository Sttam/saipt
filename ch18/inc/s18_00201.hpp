#ifndef __S18_00101_hpp
#define __S18_00101_hpp
// This sample is written to explain
// A binary operator can be defined by either a non-static member 
//function taking one argument or a nonmember function 
//taking two arguments.
#include <iostream>
class complex
{ // very simplified complex

    double re, im;

public:
    complex(double r, double i) : re{r}, im{i} {}
    
    complex& operator+=(complex);
    complex& operator*=(complex);
    complex& operator-();
    double getim(){ return im;};
    double getre(){ return re;}
    friend complex operator-(complex a, complex b);
    friend complex operator+(complex a, complex b);
    friend complex operator*(complex a, complex b);
};


complex operator+(complex a, complex b ){
    complex t1{a};
    t1.re += b.re;
    t1.im += b.im;
    return t1;
}

complex operator-(complex a, complex b ){
    complex t1{a};
    t1.re -= b.re;
    t1.im -= b.im;
    return t1;
}

complex& complex::operator+=(complex rhs){
   
    re += rhs.re;
    im += rhs.im;
    return *this;
}
complex& complex::operator-(){
   
    re *= -1;
    im *= -1;
    return *this;
}
complex operator*(complex a,complex b){
    complex t1{a};
    t1.re *= b.re;
    t1.im *= b.im;
    return t1;
}

complex& complex::operator*=(complex rhs){
    
    re *= rhs.re;
    im *= rhs.im;
    return *this;
}


std::ostream& operator<<(std::ostream& os, complex c){
    os<< "Real : " << c.getre() << " Img : " << c.getim() << std::endl;
    return os;
}

#endif