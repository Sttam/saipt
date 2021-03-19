#ifndef __s19_00303_hpp
#define __s19_00303_hpp

#include <vector>
#include <string>
#include <array>
#include <iostream>

using namespace std;

class Obj {
  static int i,j;

public:
  void f() const { cout << "f() " << i++ << endl; }
  void g() const { cout << "g() " << j++ << endl; }
  void operator()() { cout << "operator() \n"; }
};

// Static member definitions:
int Obj::i;
int Obj::j;

constexpr size_t array_size{10};
// Implement a container for the above class
class ObjContainer {
  vector<Obj *> vec;
  public:
  ObjContainer( array<Obj,array_size>& arr){
    for( auto& x:arr)
       vec.push_back( &x ); 
  }
  friend class SmartPointer;

};

class SmartPointer {
  ObjContainer &oc;
  int index{0};

public:
  SmartPointer(ObjContainer &objc):oc{objc} {}

  // Return value indicates end of list:
  bool operator++() { // Prefix version
    if (index >= oc.vec.size()){
      index = 0;
      return false;
    }
    if (oc.vec[++index] == nullptr)
      return false;
    return true;
  }

  bool operator++(int) { // Postfix version
    return operator++();
  }

  // overload operator->
  Obj *operator->() const {
    if (!oc.vec[index]) {
      cout << "Zero value";
      return nullptr;
    }

    return oc.vec[index];
  }
};


#endif