/*
A scaled 
*/
#include <s19_00401.hpp>
#include <iostream>
using namespace std;

class MyClass{
    string name;
    int age;

    public:
    MyClass( string n, int a=18):name{n},age{a}{}

};

int main(){

    int a[500];

    Ptr myp(a,a);

}