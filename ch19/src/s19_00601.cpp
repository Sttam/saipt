/*
A scaled
*/
#include <iostream>
#include <complex>
#include <string>
#include <initializer_list>

std::complex<long double> operator "" _i(long double d){

  return std::complex<long double>(0, d);
}
std::string operator""_s(const char* p, size_t n) // std::string literal
{
    std::cout << p << std::endl;
    return std::string{p,n}; // requires free-store allocation
}

template<typename T> void f(const T& s){
    
    std::cout << s << std::endl;

}

int main() {

    f( "Hello" );      // pass pointer to char*
    f({"Hello"s});     // pass (five-character) string object
  //f("Hello\n"s);   // pass (six-character) string object
  //auto z = 2 + 1i; // complex{2,1}
  return 0;
}