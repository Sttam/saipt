#include <iostream>
using namespace std;

template <class T>
class Checked_pointer
{ // control access to T* member
public:
    T &operator*(){

        return *p;
    }; // check for nullptr and return value
    T* p{nullptr};
    // ...
};

template <class T>
class Checked_pointer2
{ // control access to T* member
public:
    //memberwise initialization works only if we can access the members.
    //If a class has a private non-static data member, 
    //it needs a constructor to initialize it.
    Checked_pointer2(T *tp):p(tp){}
    T &operator*(){

        return *p;
    }; // check for nullptr and return value
private:
    T* p{nullptr};
    // ...
};

int main(){
    Checked_pointer<int> cp{new int{7}};

    int &ir  = *cp;
    cout << "Value of p   : " << *(cp.p) << endl;
    cout << "Value of ir  : " << ir << endl;
    ir = 20;
    cout << "Value of p   : " << *(cp.p) << endl;

    Checked_pointer<int> cp2 {new int{7}};


    return 0;
}