#ifndef __S18_00203d_hpp
#define __S18_00203d_hpp
// A Sample complex classs
#include <iostream>
class complex
{ // very simplified complex

    double re, im;

public:
    constexpr complex(double r = 0, double i = 0) : re{r}, im{i} {}
    constexpr double real() { return re; }
    constexpr double imag() { return im; }

    void real(double r) { re = r; }
    void imag(double i) { im = i; }

    complex &operator+=(complex);
    complex &operator-=(complex);
    complex &operator*=(complex);

    friend std::ostream &operator<<(std::ostream &os, complex c);
};

complex operator-(complex a, complex b);
complex operator+(complex a, complex b);
complex operator*(complex a, complex b);

complex operator+(complex a, complex b)
{
    complex t{a};
    t += b;
    return t;
}

complex operator-(complex a, complex b)
{
    complex t{a};
    t -= b;
    return t;
}

complex operator*(complex a, complex b)
{
    complex t{a};
    t *= b;
    return t;
}

inline complex &complex::operator+=(complex rhs)
{

    re += rhs.re;
    im += rhs.im;
    return *this;
}

complex &complex::operator*=(complex rhs)
{

    re *= rhs.re;
    im *= rhs.im;
    return *this;
}

complex &complex::operator-=(complex rhs)
{

    re -= rhs.re;
    im -= rhs.im;
    return *this;
}

std::ostream &operator<<(std::ostream &os, complex c)
{
    os << "Complex : Real => " << c.re << " Img : " << c.im << std::endl;
    return os;
}

// imaginar y literal
constexpr complex operator""_i(long double d)
{

    return complex(0, d); // complex is a literal type
}

#endif