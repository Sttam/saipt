#ifndef __S18_00101_hpp
#define __S18_00101_hpp
#include <iostream>
class complex
{ // very simplified complex

    double re, im;

public:
    complex(double r, double i) : re{r}, im{i} {}
    complex operator+(complex);
    complex operator*(complex);
    complex& operator+=(complex);
    complex& operator*=(complex);
    double getim(){ return im;};
    double getre(){ return re;}
};

complex complex::operator+(complex rhs){
    complex t1{*this};
    t1.re += rhs.re;
    t1.im += rhs.im;
    return t1;
}

complex& complex::operator+=(complex rhs){
   
    re += rhs.re;
    im += rhs.im;
    return *this;
}

complex complex::operator*(complex rhs){
    complex t1{*this};
    t1.re *= rhs.re;
    t1.im *= rhs.im;
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