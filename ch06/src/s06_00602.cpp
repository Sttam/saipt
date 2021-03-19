
/*-----------------------------------------------------------------------------------------------------------------

   Date           : 2020/06/08
   Author         : Matts

   Purpose        : Size of types (Bjarne Stroustrup)

   Instructions   :

   Quiz yourself  : 
---------------------------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;
#include <limits>
#include <iostream>
#include <vector>
int main()
{

    int a1 {1};
    int a2 = {2};
    int a3 = 3;
    int a4(4);
    /*
        Of these, only the first can be used in every context, and I strongly recommend its use. It is clearer
        and less error-prone than the alternatives. However, the first form (used for a1) is new in C++11, so
        the other three forms are what you find in older code. The two forms using = are what you use in
        C. Old habits die hard, so I sometimes (inconsistently) use = when initializing a simple variable
        with a simple value. For example:
        int x1 = 0;
        char c1 = 'z';

    */

   

    vector<int> v1 {99}; // v1 is a vector of 1 element with the value 99
    vector<int> v2(99); // v2 is a vector of 99 elements each with the default value 0
 
    /*
       I use the explicit invocation of a constructor, (99), to get the second meaning. Most types do not
       offer such confusing alternatives – even most vectors do not; for example:
    */


    vector<string> v3{"hello!"}; // v1 is a vector of 1 element with the value "hello!"
    //vector<string> v4("hello!"); // error : no vector constructor takes a string literal

    int x[] = { 1, 2, 3, 4}; //Mutiple elements of an array. Then use =

    /*
        When using auto to get the type determined by the initializer. 
        if the initializer is a {}-list, we may not want its type deduced 
    */

     auto z1 {99}; // z1 is an initializer_list<int>
     auto z2 = 99; // z2 is an int
     //auto z3{} ; // z2 is an int

    char buf[1000] {}; // initialize every char to 0. Care should be given
                       // when initalizing large arrays using basic construct.


    return EXIT_SUCCESS; 
}
