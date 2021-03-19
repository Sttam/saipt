#ifndef __s19_00401_hpp
#define __s19_00401_hpp
#include <iostream>

using namespace std;

template<typename T> class Ptr {
  T* ptr;
  T* array;
  int sz;

public:
  template <int N>
  Ptr(T* p, T (&a)[N]);   // bind to array a, sz==N, initial value p
  Ptr(T* p, T* a, int s); // bind to array a of size s, initial value p
  Ptr(T*p);               // bind to single object, sz==0, initial value p
  Ptr &operator++();      // prefix
  Ptr operator++(int);    // postfix
  Ptr &operator--();      // prefix
  Ptr operator--(int);    // postfix
  T &operator*();         // prefix

};

template <typename T>
Ptr<T>::Ptr(T* p, T* a, int s){
    if( !p){
        ptr = nullptr;
        array = nullptr;
        sz = 0;
    }else{ 

        ptr = p;
        if( s > 0 ){
            array = a;
        }   
        size = s;
    }
}

template <typename T>
template <int N>
Ptr<T>::Ptr(T* p, T (&a)[N]){
     ptr = p;
     array = p;
     sz = sizeof(a)/sizeof(T);

     cout << "sz " << sz << endl;
    
}


#endif