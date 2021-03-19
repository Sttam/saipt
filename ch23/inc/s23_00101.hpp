#ifndef __s23_00101_HPP
#define __s23_00101_HPP
#include <iostream>
namespace saip {

template <typename C> class String {
public:
  String();
  explicit String(const C *);
  String(const String &);
  String operator=(const String &);
  // ...
  C &operator[](int n) { return ptr[n]; } // unchecked element access
  String &operator+=(C c);                // add c at end
                                          // ...
  template <typename U>
  friend std::ostream &operator<<(std::ostream &s, const String<U> &c);

private:
  static const int short_max = 15; // for the short string optimization
  C ch[short_max];
  int sz;
  C *ptr; // ptr points to sz Cs
};

template <typename C>
String<C>::String() // String<C>’s constructor
    : sz{0}, ptr{ch} {
  ch[0] = {}; // terminating 0 of the appropriate character type
}

template <typename C> String<C>::String(const C *p) {

  
  C *ptr1 = const_cast<C*>(p);
  while (*ptr1++)
    sz++;

  if (sz < short_max) {
    for (int i = 0; i < sz; i++) {
      ch[i] = p[i];
    }
    return;
  }
  ptr = new C[sz];
  C *ptr2 = const_cast<C*>(ptr);
  ptr1 = const_cast<C*>(p);
  while (*ptr2++ = *p++)
    ;
  return;
}

template <typename C>
std::ostream &operator<<(std::ostream &s,
                         const String<C> &c) // String<C>’s constructor
{
  if (c.sz < String<C>::short_max) {
    for (int i = 0; i < c.sz; i++) {
      s << c.ch[i];
    }
    return s;
  }

  C *p = c.ptr;

  for (int i = 0; i < c.sz; i++) {
    s << *p++;
  }
  return s;
}

} // namespace saip

#endif //__s23_00101_HPP