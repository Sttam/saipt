
/*

   Date           : 2020/06/09
   Author         : Matts

   Purpose        : 
                    Errors rectified from the 703 example.

   Instructions   :

   Quiz yourself  : 
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

template<class T, class U>
       auto operator+(const vector<T>& a, const vector<U>& b)->vector<decltype(T{}+U{})>;
int main()
{
   vector<int> iv = {1,2,3,4,5,6,7,8};
   vector<double> dv = {1.1,2.2,3.3,4.4,5.5,6.6};

   for (auto p = iv.begin(); p!= iv.end(); p++ )
        cout << setw(5) << setprecision(3)<< *p << " ";
   cout << endl;

   for (auto p = dv.begin(); p!= dv.end(); p++ )
        cout << setw(5) << setprecision(3)<< *p << " ";
   cout << endl;

   decltype(auto) av =  iv + dv;

   for (auto p = av.begin(); p!= av.end(); p++ )
        cout << setw(5) << setprecision(3)<< *p << " ";
   cout << endl;

   return EXIT_SUCCESS; 
}

/*

I have written this fresh to provide a good example.
Please read through and understand the dynamic variable setup
by the decltype

*/
template<class T, class U>
     auto operator+(const vector<T>& a, const vector<U>& b)->vector<decltype(T{}+U{})>{
           auto  ax = T{} + U{};
           vector<decltype(ax)> s{};

           auto iT = a.begin();
           auto iU = b.begin();
           while( iT != a.end() || iU != b.end() ){
              T tT{};
              U tU{};
              if( iT != a.end() ){
                  tT = *iT++;
              }
              if( iU != b.end() ){
                  tU = *iU++;
              }
              s.push_back( tU + tT );
           }
           return s;
 }
