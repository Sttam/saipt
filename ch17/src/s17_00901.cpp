#include <iostream>
using namespace std;

class Curious
{
public:
    static const int c1 = 7;       // OK
    static int c2 = 11;            // error : not const
    const int c3 = 13;             // OK, but not static (§17.4.4)
    static const int c4 = sqrt(9); // error : in-class initializer not constant
    static const float c5 = 7.0;   // error : in-class not integral (use constexpr rather than const)
    // ...
};

const int Curious::c1; // don’t repeat initializer here
const int∗ p = &Curious::c1; // OK: Curious::c1 has been defined

int main(){

    return 0;
}