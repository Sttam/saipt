#include <algorithm>
#include <complex>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

void h(vector<complex<double>> &vec, list<complex<double>> &lst, complex<double> z) {
    complex<double> d{2,3};
    for_each(vec.begin(),vec.end(),[d](complex<double>& a){ a+= d;});
    for_each(lst.begin(),lst.end(),[z](complex<double>& a){ a+= z; });
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