#ifndef __s16_0102_hpp
#define __s16_0102_hpp

//A small variation from the s16_0102_hpp
//Normally functions are included in .cpp files
//Here it is included in the header file.
//It is included in the main and a single object file is formed.
//Question : What happens when multiple files are included?
class X {
private:    // the representation (implementation) is private
  int m;

public:                  
                         // the user interface is public
  X(int i = 0) : m{i} {} // a constr uctor (initialize the data member m)
  int mf(int i);         // a member function
};

int X::mf(int i)          // a member function
  {
    int old = m;
    m = i;      // set a new value
    return old; // return the old value
  }
#endif