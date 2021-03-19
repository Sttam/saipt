
/*

   Date           : 2020/06/09
   Author         : Matts

   Purpose        : 
                   There are atleast two errors in the dynamic function we defined.
                   can you find it?


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
  
   vector<int> iv = {1,2,3};
   vector<double> dv = {1.1,2.2,3.3,4.4,5.5,6.6};
   decltype(auto) av =  iv + dv;
   for (auto p = iv.begin(); p!= iv.end(); p++ )
        cout << setw(5) << setprecision(3)<< *p << " ";
   cout << endl;

   for (auto p = dv.begin(); p!= dv.end(); p++ )
        cout << setw(5) << setprecision(3)<< *p << " ";
   cout << endl;

   decltype(auto) ai =  iv + dv;
   for (auto p = ai.begin(); p!= ai.end(); p++ )
        cout << setw(5) << setprecision(3)<< *p << " ";
   cout << endl;

   return EXIT_SUCCESS; 
}

template<class T, class U>
     auto operator+(const vector<T>& a, const vector<U>& b)->vector<decltype(T{}+U{})>{
           auto  ax = T{} + U{};
           vector<decltype(ax)> s{};

           auto iT = a.begin();
           auto iU = b.begin();
           T tT{0};
           U tU{0};

           while( iT != a.end() && iU != b.end() ){
              if( iT != a.end() ){
                  tT = *iT;
              }
              if( iU != b.end() ){
                  tU = *iU;
              }
              s.push_back( tU + tT );
              iT++; iU++;
           }
           return s;
 }
