
/*

   Date           : 2020/06/09
   Author         : Matts

   Purpose        : 
                   We can use auto when we have a suitable initializer. But sometimes, we want to have a type
                   deduced without defining an initialized variable. Then, we can use a declaration type specifier:
                   decltype(expr) is the declared type of expr.


   Instructions   :

   Quiz yourself  : 
*/

#include <iostream>
#include <vector>
using namespace std;

template<class T, class U>
       auto operator+(const vector<T>& a, const vector<U>& b)->vector<decltype(T{}+U{})>;

int main()
{
   const int x = 123;
   auto y = x;           // y has type int
   decltype(auto) z = x; // z has type const int, the declared type of x
  
   /* This I have written completely by me to 
      help you learn the concept

      even I am new to these features of C++
      a simple example made will take you a long way.

   */ 
   vector<int> iv = {1,2,3,4,5,6};
   vector<double> dv = {1.1,2.2,3.3,4.4,5.5,6.6};
   decltype(auto) av =  iv + dv;
   for (auto p = av.begin(); p!= av.end(); p++ )
        cout << *p << " ";
   cout << endl;

   decltype(auto) ai =  iv + iv;
   for (auto p = ai.begin(); p!= ai.end(); p++ )
        cout << *p << " ";
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
           while( iT != a.end() && iU != b.end() ){
              T tT{0};
              U tU{0};
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
