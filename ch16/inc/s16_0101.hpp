#ifndef __s16_0101_hpp
#define __s16_0101_hpp
/* 
  --Session Points 
  A very brief summary of classes:

      A class is a user-defined type.
      A class consists of a set of members. The most common kinds of 
      members are data members and member functions.

    Member functions can define the meaning of initialization (creation), 
            copy, move, and cleanup (destruction).

    Members are accessed using . (dot) for objects and −> (arrow) for pointers.
    
    Operators, such as +, !, and [], can be defined for a class.
    
    A class is a namespace containing its members. 
    The public members provide the class’s interface and the private members provide 
    implementation details.

*/

class X {
private:    // the representation (implementation) is private
  int m;

public:                  
                         // the user interface is public
  X(int i = 0) : m{i} {} // a constr uctor (initialize the data member m)
  int mf(int i)          // a member function
  {
    int old = m;
    m = i;      // set a new value
    return old; // return the old value
  }
};
#endif