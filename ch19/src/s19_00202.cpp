/*
Function call notation expression-list.
Sample shows how this functor could be used in a for each statement.

template<typename Iter, typename Fct>
Fct for_each(Iter b, Iter e, Fct f)
{
  while (b != e) f(∗b++);
  return f;
}

*/
#include <algorithm>
#include <complex>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Add {
  complex<double> val;

public:
  Add(complex<double> c) : val{c} {} // save a value
  Add(double r, double i) : val{{r, i}} {}

  void operator()(complex<double> &c) const { 
      c += val; // add a value to argument
  }
};

void h(vector<complex<double>> &vec, list<complex<double>> &lst, complex<double> z) {
  for_each(vec.begin(), vec.end(), Add{2,3});
  for_each(lst.begin(), lst.end(), Add{z});
}

template <typename T>
void Print( T& arg){
    for( const auto &x:arg){
        std::cout << x << endl;
    }
}


int main() {
  list<complex<double>> lc;
 
  
  lc.push_back(complex(1.2, 2.2));
  lc.push_back(complex(2.2, 3.2));
  lc.push_back(complex(2.3, 1.2));

  vector<complex<double>> vc;
  vc.push_back(complex(1.2, 2.2));
  vc.push_back(complex(2.2, 3.2));
  vc.push_back(complex(2.3, 1.2));

  Print(vc);
  h(vc, lc, complex(5.5, 1.5));
  Print(vc);
  
 
}