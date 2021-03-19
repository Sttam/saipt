#ifndef __S18_00301_hpp
#define __S18_00301_hpp
/*
Sample is created to explain conversion operation.

*/
#include <iostream>
class Tiny
{
    char v;
    void assign(int i)
    {
        if (i & ~077)
            throw BadRange();
        v = i;
    }

public:
    class BadRange
    {
    };
    Tiny(int i) { assign(i); }
    Tiny &operator=(int i)
    {
        assign(i);
        return *this;
    }
    operator int() const { return v; } // conversion to int function
};

#endif