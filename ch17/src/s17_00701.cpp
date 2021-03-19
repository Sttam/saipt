#include <iostream>
using namespace std;

//Initialization Using Constructors

struct X
{
    X(int);
};
/*
X x0;         //error : no initializer
X x1{};      // error : empty initializer
X x2{2};     // OK
X x3{"two"}; // error : wrong initializer type
X x4{1, 2};  // error : wrong number of initializers
X x5{x4};    // OK: a copy constr uctor is implicitly defined

*/

int main(){

    return 0;
}