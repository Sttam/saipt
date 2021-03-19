/*
   Reference :

   https://www.tutorialspoint.com/cplusplus/class_member_access_operator_overloading.htm

   void f(Ptr p){
       p−>m = 7; // (p.operator->())->m = 7
    }

    This is a mock program.
    See there is no member data is available on obj.

*/
#include <array>
#include <iostream>
#include <vector>
using namespace std;

class Obj {
  static int i, j;

public:
  void f() const { cout << "f() " << i++ << endl; }
  void g() const { cout << "g() " << j++ << endl; }
  void operator()() { cout << "Hello I am here \n"; }
};

// Static member definitions:
int Obj::i = 1;
int Obj::j = 20;

// Implement a container for the above class
class ObjContainer {
  vector<Obj *> vec;

public:
  void add(Obj *obj) {
    vec.push_back(obj); // call vector's standard method.
  }
  friend class SmartPointer;
};

class SmartPointer {
  ObjContainer oc;
  int index{0};

public:
  SmartPointer(ObjContainer &objc) {
    oc = objc;
    index = 0;
  }

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
  ObjContainer oc;

  for (auto &a : objects)
    oc.add(&a);

  SmartPointer sp(oc); // Create an iterator
  do {
    sp->f(); // smart pointer call
    sp->operator()();
    sp->g();
  } while (sp++);

  return 0;
}