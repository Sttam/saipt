/*
    A  variation of subscripting is provided to recoginze
    int& Assoc::operator[](const string &s)
    const int& Assoc::operator[] (const string& s) const

    The first function creates a records while the second one
    is invoked on a find.


*/

#include <iostream>
#include <string>
#include <s19_00102.hpp>

using namespace std;

void f( const Assoc& a, const string s);
int main()
{

    Assoc values;
    string buf;
    while (cin >> buf)
        ++values[buf];
        
    for (auto x : values.vec)
        cout << '{' << x.first << ',' << x.second << "}\n";

    f( values, "Hello");
}

void f( const Assoc& a, const std::string s){
  cout << "The string \"" << s << "\" found " << a[s] << " times " <<  endl;
}