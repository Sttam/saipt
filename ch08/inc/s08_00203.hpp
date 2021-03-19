#ifndef  __S08_00203_hpp__
#define  __S08_00203_hpp__
#include <string>
using namespace std;
namespace saip{


struct Address {
    string zip; 
    string name; 
    int number; 
    string street; 
    string town;
    char state[2]; 
    Address(const string& n, int nu, const string& s, const string& t, const string& st, int z);
    void Print();
};

struct Address2 {
    string name; 
    string street; 
    string town;
    int    zip; 
    void Print();
};

}//namespace saip
#endif //__S03_00203_hpp__
