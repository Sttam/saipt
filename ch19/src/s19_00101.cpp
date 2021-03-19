/*
    An example on subscripting.
    Line 18 invokes the subscripting.

*/

#include <iostream>
#include <string>
#include <s19_00101.hpp>

using namespace std;

int main()
{

    Assoc values;
    string buf;
    while (cin >> buf)
        ++values[buf];

    for (auto x : values.vec)
        cout << '{' << x.first << ',' << x.second << "}\n";
}