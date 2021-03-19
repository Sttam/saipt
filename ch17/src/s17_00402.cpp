#include <iostream>
using namespace std;

struct Buf
{
    int count;
    char buf[16*1024]; //A 16KB Buffer 
};

Buf buf0; // statically allocated, so initialized by default

void f()
{
Buf buf1;       // leave elements uninitialized
Buf buf2 {};    // I really want to zero out those elements
int* p1 = new int;  // *p1 is uninitialized
int* p2 = new int{};    // *p2 == 0
int* p3 = new int{7};   // *p3 == 7
// ...
}

int main(){
    f();
}