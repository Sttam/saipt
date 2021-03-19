/*
   Reference :

   https://www.tutorialspoint.com/cplusplus/class_member_access_operator_overloading.htm

   void f(Ptr p){
       p−>m = 7; // (p.operator->())->m = 7
    }

    This is a mock program.
    See there is no member data is available on obj.

    This is a version for the teaching purpose. ( Indicating the problem with the previous
    version )
    In the main 
    
    array<Obj, 10> objects;
    ObjContainer oc;
    for (auto &a : objects)
      oc.add(&a);
    SmartPointer sp(oc); // Create an iterator

    If the order is changed, results in memory violation. There were resource
    wastage and lack of flexibility.

    This is has nothing much regarding special operator but regarding clean coding.

    please compare the versions and ensure that designs are clean, so programming errors are reduced.

*/
#include <array>
#include <iostream>
#include <vector>
using namespace std;

class Obj {
  static int i,j;

public:
  void f() const { cout << "f() " << i++ << endl; }
  void g() const { cout << "g() " << j++ << endl; }
  void operator()() { cout << "Hello I am here \n"; }
};

// Static member definitions:
int Obj::i;
int Obj::j;

// Implement a container for the above class
class ObjContainer {
  vector<Obj *> vec;
  public:
  ObjContainer( std::array<Obj> arr){
    for( auto& o:arr ){
      vec.assign[&arr[0],&arr[] ]
    }
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
    if (index >= oc.vec.size())
      return false;
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
      return (Obj *)0;
    }

    return oc.vec[index];
  }
};

/*
   Program looks a bit silly, bit demonstrate the concept of the
   special operator() and the linking of the associated functions.

*/
int main() {
  array<Obj, 10> objects;
  ObjContainer oc{objects};
  SmartPointer sp(oc); // Create an iterator
   
  do {
    sp->f(); // smart pointer call
    Obj *p = sp.operator->(); 
    sp->operator()();
    sp->g();
  } while (sp++);

  return 0;
}