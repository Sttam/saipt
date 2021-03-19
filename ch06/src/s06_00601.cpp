/*

   Date           : 2020/05/27
   Author         : Matts

   Purpose        : 
                   Some implementation-defined aspects of fundamental types can be found by a simple use of
                   sizeof, and more can be found in <limits>. 

   Instructions   :

   Quiz yourself  : 
                    Improve it with many more limits
                  


*/

#include <limits> 
#include <iostream>
using namespace std;

int main()
{
    cout << "size of long " << sizeof(1L) << '\n';
    cout << "size of long long " << sizeof(1LL) << '\n';
    cout << "largest float == " << std::numeric_limits<float>::max() << '\n';
    cout << "char is signed == " << std::numeric_limits<char>::is_signed << '\n';
}
