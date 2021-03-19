#include <iostream>
#include <s16_00101.hpp>

int main()
{
    X var{8};           // a variable of type X, initialized to 7
    X *ptr = &var;
    X &ref{var};

    int x = var.mf(7);   // access using . (dot)
    int y = ptr->mf(9); // access using -> (arrow)
    int z = ref.mf(20);
    //int z = var.m;       // error : cannot access private member

    return 0;
}