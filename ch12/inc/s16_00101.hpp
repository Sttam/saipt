#ifndef __S16_00101_hhp
#define __S16_00101_hhp

class X
{
private: //the representation (implementation) is private
    int m;

public:                    //the user interface is public
    X(int i = 0) : m{i} {} // a constr uctor (initialize the data member m)
    int mf(int i)          // a member function
    {
        int old = m;
        m = i;      // set a new value
        return old; // return the old value
    }
};

#endif