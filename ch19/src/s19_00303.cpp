/*
   
   rewritten to minimize programming errors.

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
#include <s19_00303.hpp>
int main() {
  array<Obj, 10> objects;
  ObjContainer oc{objects};
  SmartPointer sp(oc); // Create an iterator
   
  do {
    sp->f(); // smart pointer call
    sp->operator()();
    sp->g();
  } while (sp++);

  return 0;
}