
/*----------------------------------------------------------------------------------------------

   Date           : 2020/06/07
   Author         : Matts

   Purpose        : Character value is printed. (Bjarne Stroustrup)
                    the choice of signed or unsigned for a plain char is implementation defined.

   Instructions   :

   Quiz yourself  : 
---------------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;
int main()
{

    for (char c; cin >> c; )
           cout << "the value of '" << c << "' is " << int{c} << '\n';

    char x = 250;
    //the choice of signed or unsigned for a plain char is implementation defined.
    cout << "the value of '" << x << "' is " << int{x} << '\n';
    x = 128;
    cout << "the value of '" << x << "' is " << int{x} << '\n';
    unsigned char y = 250;
    cout << "the value of '" << x << "' is " << int{x} << '\n';
    return EXIT_SUCCESS; 
}
