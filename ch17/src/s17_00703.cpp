#include <iostream>
#include <vector>
using namespace std;

//Initialization Using Constructors

struct X
{
    X(int);
};

struct Y : X
{
    X m;
    Y(int a) : X(a), m = a{}; // syntax error: can’t use = for member initialization
};

X g(1); // initialize global var iable
void f(int a)
{
    X def(); //function returning an X (surpr ise!?)
    X* p{nullptr};
    X var = 2;               // initialize local var iable
    p = new X = 4;           // syntax error: can’t use = for new
    X a[](1, 2, 3);          // error : can’t use () for array initialization
    vector<X> v(1, 2, 3, 4); // error : can’t use () for list elements
}
/*
The = and () notations for initialization are not uniform either. 
If you insist on using = or () initialization, you have to 
remember where they are allowed and what they mean.

*/
int main()
{

    return 0;
}