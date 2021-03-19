/***********************************************************************************************
  Author     : Matts Date : 19th July 2020

  Purpose    :  Plain Old Data
                What is a POD and what is not a POD

  Source     : Text
***********************************************************************************************/
#include <iostream>

struct S0 { };                                               // a POD
struct S1 { int a; };                                        // a POD
struct S2 { int a; S2(int aa) : a(aa) { } };                 // not a POD (non default constructor)
struct S3 { int a; S3(int aa) : a(aa) { } S3() {} };         // a POD (user-defined default constructor)
struct S4 { int a; S4(int aa) : a(aa) { } S4() = default; }; // a POD
struct S5 { virtual void f(); /* ... */ };                   // not a POD (has a virtual function)
struct S6 : S1 { };                                          // a POD
struct S7 : S0 { int b; };                                   // a POD
struct S8 : S1 { int b; };                                   // not a POD (data in both S1 and S8)
struct S9 : S0, S1 {};                                       // a POD

using namespace std;
int main(int argc, char* argv[])
{
    cout << std::boolalpha;
    cout << "Is S0 POD <" << is_pod<S0>::value << ">\n";
    cout << "Is S1 POD <" << is_pod<S1>::value << ">\n";
    cout << "Is S2 POD <" << is_pod<S2>::value << ">\n";
    cout << "Is S3 POD <" << is_pod<S3>::value << ">\n";
    cout << "Is S4 POD <" << is_pod<S4>::value << ">\n";
    cout << "Is S5 POD <" << is_pod<S5>::value << ">\n";
    cout << "Is S6 POD <" << is_pod<S6>::value << ">\n";
    cout << "Is S7 POD <" << is_pod<S7>::value << ">\n";
    cout << "Is S8 POD <" << is_pod<S8>::value << ">\n";
    cout << "Is S9 POD <" << is_pod<S9>::value << ">\n";
    cout << endl;

    cout << "Is S0 is_standard_layout <" << is_standard_layout<S0>::value << ">\n";
    cout << "Is S1 is_standard_layout <" << is_standard_layout<S1>::value << ">\n";
    cout << "Is S2 is_standard_layout <" << is_standard_layout<S2>::value << ">\n";
    cout << "Is S3 is_standard_layout <" << is_standard_layout<S3>::value << ">\n";
    cout << "Is S4 is_standard_layout <" << is_standard_layout<S4>::value << ">\n";
    cout << "Is S5 is_standard_layout <" << is_standard_layout<S5>::value << ">\n";
    cout << "Is S6 is_standard_layout <" << is_standard_layout<S6>::value << ">\n";
    cout << "Is S7 is_standard_layout <" << is_standard_layout<S7>::value << ">\n";
    cout << "Is S8 is_standard_layout <" << is_standard_layout<S8>::value << ">\n";
    cout << "Is S9 is_standard_layout <" << is_standard_layout<S9>::value << ">\n";
    cout << endl;

    cout << "Is S0 is_trivial<" << is_trivial<S0>::value << ">\n";
    cout << "Is S1 is_trivial<" << is_trivial<S1>::value << ">\n";
    cout << "Is S2 is_trivial<" << is_trivial<S2>::value << ">\n";
    cout << "Is S3 is_trivial<" << is_trivial<S3>::value << ">\n";
    cout << "Is S4 is_trivial<" << is_trivial<S4>::value << ">\n";
    cout << "Is S5 is_trivial<" << is_trivial<S5>::value << ">\n";
    cout << "Is S6 is_trivial<" << is_trivial<S6>::value << ">\n";
    cout << "Is S7 is_trivial<" << is_trivial<S7>::value << ">\n";
    cout << "Is S8 is_trivial<" << is_trivial<S8>::value << ">\n";
    cout << "Is S9 is_trivial<" << is_trivial<S9>::value << ">\n";
    return 0;
}
