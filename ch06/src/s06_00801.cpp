
/*

   Date           : 2020/07/09
   Author         : Matts

   Purpose        : Initializer Lists

   Instructions   :

   Quiz yourself  : 
*/

#include <iostream>
#include <string>
#include <complex>
#include <vector>

const double pi = 3.1415926535897932384626433832;
using namespace std;
int main()
{

    int x{1};
    int a[] = { 1, 2 }; // array initializer


    struct S { int x; string s; };
    S s = { 1, "Helios" }; // struct initializer
    complex<double> z = { 0, pi }; // use constructor

    vector<int> v1 ={ 1, 2, 3, 4, 5};
    vector<int> v2(100);

    for (vector<int>::iterator p = v1.begin(); p != v1.end(); p++)
    *p *= 7;

    for (auto p = v1.begin(); p != v1.end(); ++p)
          *p *= 7;

    for (auto p = v1.begin(); p!= v1.end(); ++p)
        cout << *p << " ";

    cout << endl;
    return EXIT_SUCCESS; 

}
